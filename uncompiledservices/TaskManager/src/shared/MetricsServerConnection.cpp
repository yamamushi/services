// MetricsServerConnection.cpp
// Copyright 2000-01, Sony Online Entertainment Inc., all rights reserved. 
// Author: Justin Randall

//-----------------------------------------------------------------------

#include "FirstTaskManager.h"
#include "MetricsServerConnection.h"

#include "sharedFoundation/Clock.h"
#include "sharedMessageDispatch/Transceiver.h"
#include "TaskConnection.h"
#include "TaskManager.h"

//-----------------------------------------------------------------------

MetricsServerConnection::MetricsServerConnection(TaskConnection * c, const std::string & n) :
TaskHandler(),
callback(),
commandLine(n),
connected(true),
connection(c),
lastSpawnTime(Clock::timeMs())
{
	callback.connect(c->getTransceiverClosed(), *this, &MetricsServerConnection::closed); //lint !e1025 !e1703 !e1514 !e64
	callback.connect(*this, &MetricsServerConnection::onProcessKilled); //lint !e1025 !e1703 !e1514 !e64 !e1058 !e118
}

//-----------------------------------------------------------------------

MetricsServerConnection::~MetricsServerConnection()
{
	connection = 0;
}

//-----------------------------------------------------------------------

void MetricsServerConnection::closed(const Closed &)
{
	if(connected)
	{
		ProcessAborted a;
		a.commandLine = commandLine;
		a.hostName = NetworkHandler::getHostName();
		MessageDispatch::Transceiver<const ProcessAborted &> b;
		b.emitMessage(a);

		unsigned long t = Clock::timeMs();
		if(t - lastSpawnTime > 5000) // stop spawning if it bombs immediately
		{
			lastSpawnTime = t;
			// need to restart it!
//			IGNORE_RETURN(TaskManager::startServer("MetricsServer", "", "local"));
		}
		else
		{
			// emit the killed message
			ProcessKilled k;
			k.commandLine = a.commandLine;
			k.hostName = a.hostName;
			MessageDispatch::Transceiver<const ProcessKilled &> pk;
			pk.emitMessage(k);
		}
		connected = false;
	}
}

//-----------------------------------------------------------------------

void MetricsServerConnection::onProcessKilled(const ProcessKilled & k)
{
	if(k.commandLine == commandLine)
		lastSpawnTime = Clock::timeMs(); // force it to stay dead
}

//-----------------------------------------------------------------------

void MetricsServerConnection::receive(const Archive::ByteStream & )
{
#if 0
	Archive::ReadIterator r(message);
	GameNetworkMessage m(r);
#endif
}

//-----------------------------------------------------------------------

