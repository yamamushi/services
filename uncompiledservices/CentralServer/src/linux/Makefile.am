
AUTOMAKE_OPTIONS=foreign
bin_PROGRAMS=CentralServer
CentralServer_CXXFLAGS=-I$(srcdir)/../$(platform) \
	-I$(srcdir)/../shared \
	-I$(archive_dir)/include \
	-I$(unicode_dir)/include \
	-I$(localization_dir)/include \
	-I$(singleton_dir)/include \
	-I$(engine_dir)/server/library/serverNetworkMessages/include/public \
	-I$(engine_dir)/server/library/serverKeyShare/include/public \
	-I$(engine_dir)/shared/library/sharedCompression/include/public \
	-I$(engine_dir)/shared/library/sharedDebug/include/public \
	-I$(engine_dir)/shared/library/sharedFile/include/public \
	-I$(engine_dir)/shared/library/sharedFoundationTypes/include/public \
	-I$(engine_dir)/shared/library/sharedFoundation/include/public \
	-I$(engine_dir)/shared/library/sharedMemoryManager/include/public \
	-I$(engine_dir)/shared/library/sharedMessageDispatch/include/public \
	-I$(engine_dir)/shared/library/sharedNetwork/include/public \
	-I$(engine_dir)/shared/library/sharedRandom/include/public \
	-I$(engine_dir)/shared/library/sharedRegex/include/public \
	-I$(engine_dir)/shared/library/sharedTemplate/include/public \
	-I$(engine_dir)/shared/library/sharedThread/include/public \
	-I$(engine_dir)/shared/library/sharedUtility/include/public \
	-I$(stlport_dir)/stlport \
	-I$(perforce_dir)/include \
	-Wno-ctor-dtor-privacy
CentralServer_SOURCES=main.cpp
CentralServer_LDADD = $(top_builddir)/../engine/shared/library/sharedMemoryManager/libsharedMemoryManager.la \
	../shared/libCentralServershared.la \
	../shared/AuctionTransferGameAPI/libAuctionTransferGameAPI.la \
	../shared/AuctionTransferGameAPI/ATGenericAPI/libAuctionTransferGameAPIATGenericAPI.la \
	../shared/AuctionTransferGameAPI/Base/libAuctionTransferGameAPIBase.la \
	../shared/AuctionTransferGameAPI/Base/linux/libAuctionTransferGameAPIlinux.la \
	../shared/AuctionTransferGameAPI/TcpLibrary/libAuctionTransferGameAPITcpLibrary.la \
	../shared/AuctionTransferGameAPI/zip/Zip/libAuctionTransferGameAPIZip.la \
	$(top_builddir)/../engine/server/library/serverKeyShare/libserverKeyShare.la \
	$(top_builddir)/../engine/shared/library/sharedGame/src/shared/sui/libsharedGamesharedsui.la \
	$(top_builddir)/../engine/shared/library/sharedNetwork/libsharedNetwork.la \
	$(top_builddir)/../engine/shared/library/sharedLog/libsharedLog.la \
	$(top_builddir)/../engine/server/library/serverUtility/libserverUtility.la \
	$(top_builddir)/../engine/shared/library/sharedNetworkMessages/src/shared/common/libsharedNetworkMessagessharedcommon.la \
	$(top_builddir)/../engine/shared/library/sharedNetworkMessages/src/shared/clientGameServer/libsharedNetworkMessagessharedclientGameServer.la \
	$(top_builddir)/../engine/shared/library/sharedNetworkMessages/src/shared/libsharedNetworkMessagesshared.la \
	$(top_builddir)/../engine/shared/library/sharedImage/libsharedImage.la \
	$(top_builddir)/../engine/shared/library/sharedCommandParser/libsharedCommandParser.la \
	$(top_builddir)/../engine/server/library/serverMetrics/libserverMetrics.la \
	$(top_builddir)/../engine/server/library/serverNetworkMessages/src/shared/transferServer/libserverNetworkMessagessharedtransferServer.la \
	$(top_builddir)/../engine/server/library/serverNetworkMessages/src/shared/gameStationPlayersCollector/libserverNetworkMessagessharedgameStationPlayersCollector.la \
	$(top_builddir)/../engine/server/library/serverNetworkMessages/src/shared/libserverNetworkMessagesshared.la \
	$(top_builddir)/../engine/server/library/serverNetworkMessages/src/shared/centralPlanetServer/libserverNetworkMessagessharedcentralPlanetServer.la \
	$(top_builddir)/../engine/server/library/serverNetworkMessages/src/shared/gamePlanetServer/libserverNetworkMessagessharedgamePlanetServer.la \
	$(top_builddir)/../engine/server/library/serverNetworkMessages/src/shared/centralConnectionServer/libserverNetworkMessagessharedcentralConnectionServer.la \
	$(top_builddir)/../engine/server/library/serverNetworkMessages/src/shared/gameGameServer/libserverNetworkMessagessharedgameGameServer.la \
	$(top_builddir)/../engine/server/library/serverNetworkMessages/src/shared/centralTaskManager/libserverNetworkMessagessharedcentralTaskManager.la \
	$(top_builddir)/../engine/server/library/serverNetworkMessages/src/shared/loginCentralServer/libserverNetworkMessagessharedloginCentralServer.la \
	$(top_builddir)/../engine/server/library/serverNetworkMessages/src/shared/metricsMessages/libserverNetworkMessagessharedmetricsMessages.la \
	$(top_builddir)/../engine/server/library/serverNetworkMessages/src/shared/centralGameServer/libserverNetworkMessagessharedcentralGameServer.la \
	$(top_builddir)/../engine/shared/library/sharedUtility/libsharedUtility.la \
	$(top_builddir)/../engine/shared/library/sharedXml/libsharedXml.la \
	$(top_builddir)/../engine/shared/library/sharedMessageDispatch/libsharedMessageDispatch.la \
	$(top_builddir)/../engine/shared/library/sharedFile/libsharedFile.la \
	$(top_builddir)/../engine/shared/library/sharedCompression/libsharedCompression.la \
	$(top_builddir)/../engine/shared/library/sharedDebug/libsharedDebug.la \
	$(top_builddir)/../game/shared/library/swgSharedUtility/libswgSharedUtility.la \
	$(top_builddir)/../engine/shared/library/sharedFoundation/libsharedFoundation.la \
	$(top_builddir)/../engine/shared/library/sharedThread/libsharedThread.la \
	$(top_builddir)/../engine/shared/library/sharedSynchronization/libsharedSynchronization.la \
	$(top_builddir)/../engine/shared/library/sharedMath/libsharedMath.la \
	$(top_builddir)/../engine/shared/library/sharedRandom/libsharedRandom.la \
	$(top_builddir)/../external/ours/library/localizationArchive/liblocalizationArchive.la \
	$(top_builddir)/../external/ours/library/localization/liblocalization.la \
	$(top_builddir)/../external/ours/library/unicodeArchive/libunicodeArchive.la \
	$(top_builddir)/../external/ours/library/unicode/libunicode.la \
	$(top_builddir)/../external/ours/library/fileInterface/libfileInterface.la \
	$(top_builddir)/../external/ours/library/crypto/libcrypto.la \
	$(top_builddir)/../external/ours/library/archive/libarchive.la \
	$(libxml_dir)/libxml2.la \
	$(stlport_dir)/lib/libstlport_gcc.a \
	$(pcre_dir)/lib/libpcre.a \
	$(udplibrary_dir)/output/debug/libudplibrary.a 


CentralServer_LDFLAGS=-lpthread -ldl -lz -lm -lncurses

../shared/libCentralServershared.la:
	make -C ../shared

../shared/AuctionTransferGameAPI/libAuctionTransferGameAPI.la:
	make -C ../shared/AuctionTransferGameAPI

../shared/AuctionTransferGameAPI/ATGericAPI/libAuctionTransferGameAPIATGenericAPI.la:
	make -C ../shared/AuctionTransferGameAPI/ATGenericAPI

../shared/AuctionTransferGameAPI/Base/libAuctionTransferGameAPIBase.la:
	make -C ../shared/AuctionTransferGameAPI/Base

../shared/AuctionTransferGameAPI/Base/linux/libAuctionTransferGameAPIlinux.la:
	make -C ../shared/AuctionTransferGameAPI/Base/linux

../shared/AuctionTransferGameAPI/TcpLibrary/libAuctionTransferGameAPITcpLibrary.la:
	make -C ../shared/AuctionTransferGameAPI/TcpLibrary

../shared/AuctionTransferGameAPI/zip/Zip/libAuctionTransferGameAPIZip.la:
	make -C ../shared/AuctionTransferGameAPI/zip/Zip



$(top_builddir)/../game/shared/library/swgSharedUtility/libswgSharedUtility.la:
	make -C $(top_builddir)/../game/shared/library/swgSharedUtility

$(top_builddir)/../engine/shared/library/sharedSkillSystem/libsharedSkillSystem.la:
	make -C $(top_builddir)/../engine/shared/library/sharedSkillSystem

$(top_builddir)/../engine/shared/library/sharedImage/libsharedImage.la:
	make -C $(top_builddir)/../engine/shared/library/sharedImage

$(top_builddir)/../engine/shared/library/sharedFractal/libsharedFractal.la:
	make -C $(top_builddir)/../engine/shared/library/sharedFractal

$(top_builddir)/../engine/shared/library/sharedTerrain/libsharedTerrain.la:
	make -C $(top_builddir)/../engine/shared/library/sharedTerrain

$(top_builddir)/../engine/shared/library/sharedCollision/libsharedCollision.la:
	make -C $(top_builddir)/../engine/shared/library/sharedCollision

$(top_builddir)/../engine/shared/library/sharedObject/src/shared/object/libsharedObjectsharedobject.la:
	make -C $(top_builddir)/../engine/shared/library/sharedObject/src/shared/object

$(top_builddir)/../engine/shared/library/sharedGame/libsharedGame.la:
	make -C $(top_builddir)/../engine/shared/library/sharedGame

$(top_builddir)/../engine/shared/library/sharedNetworkMessages/src/shared/common/libsharedNetworkMessagessharedcommon.la:
	make -C $(top_builddir)/../engine/shared/library/sharedNetworkMessages/src/shared/common

$(top_builddir)/../engine/shared/library/sharedNetworkMessages/src/shared/clientGameServer/libsharedNetworkMessagessharedclientGameServer.la:
	make -C $(top_builddir)/../engine/shared/library/sharedNetworkMessages/src/shared/clientGameServer

$(top_builddir)/../engine/shared/library/sharedNetworkMessages/src/shared/libsharedNetworkMessagesshared.la:
	make -C $(top_builddir)/../engine/shared/library/sharedNetworkMessages/src/shared

$(top_builddir)/../engine/shared/library/sharedMath/libsharedMath.la:
	make -C $(top_builddir)/../engine/shared/library/sharedMath

$(top_builddir)/../engine/shared/library/sharedCommandParser/libsharedCommandParser.la:
	make -C $(top_builddir)/../engine/shared/library/sharedCommandParser

$(top_builddir)/../engine/shared/library/sharedRandom/libsharedRandom.la:
	make -C $(top_builddir)/../engine/shared/library/sharedRandom

$(top_builddir)/../engine/shared/library/sharedUtility/libsharedUtility.la:
	make -C $(top_builddir)/../engine/shared/library/sharedUtility

$(top_builddir)/../engine/shared/library/sharedXml/libsharedXml.la:
	make -C $(top_builddir)/../engine/shared/library/sharedXml

$(top_builddir)/../engine/server/library/serverMetrics/libserverMetrics.la:
	make -C $(top_builddir)/../engine/server/library/serverMetrics

$(top_builddir)/../engine/server/library/serverNetworkMessages/src/shared/centralGameServer/libserverNetworkMessagessharedcentralGameServer.la:
	make -C $(top_builddir)/../engine/server/library/serverNetworkMessages/src/shared/centralGameServer

$(top_builddir)/../engine/server/library/serverNetworkMessages/src/shared/centralConnectionServer/libserverNetworkMessagessharedcentralConnectionServer.la:
	make -C $(top_builddir)/../engine/server/library/serverNetworkMessages/src/shared/centralConnectionServer

$(top_builddir)/../engine/server/library/serverNetworkMessages/src/shared/loginCentralServer/libserverNetworkMessagessharedloginCentralServer.la:
	make -C $(top_builddir)/../engine/server/library/serverNetworkMessages/src/shared/centralConnectionServer

$(top_builddir)/../engine/server/library/serverNetworkMessages/src/shared/libserverNetworkMessagesshared.la:
	make -C $(top_builddir)/../engine/server/library/serverNetworkMessages/src/shared

$(top_builddir)/../engine/server/library/serverNetworkMessages/src/shared/metricsMessages/libserverNetworkMessagessharedmetricsMessages.la:
	make -C $(top_builddir)/../engine/server/library/serverNetworkMessages/src/shared/metricsMessages

$(top_builddir)/../engine/server/library/serverNetworkMessages/src/shared/transferServer/libserverNetworkMessagessharedtransferServer.la:
	make -C $(top_builddir)/../engine/server/library/serverNetworkMessages/src/shared/transferServer

$(top_builddir)/../engine/server/library/serverNetworkMessages/src/shared/gameStationPlayersCollector/libserverNetworkMessagessharedgameStationPlayersCollector.la:
	make -C $(top_builddir)/../engine/server/library/serverNetworkMessages/src/shared/gameStationPlayersCollector

$(top_builddir)/../engine/server/library/serverNetworkMessages/src/shared/centralPlanetServer/libserverNetworkMessagessharedcentralPlanetServer.la:
	make -C $(top_builddir)/../engine/server/library/serverNetworkMessages/src/shared/centralPlanetServer

$(top_builddir)/../engine/server/library/serverNetworkMessages/src/shared/gamePlanetServer/libserverNetworkMessagessharedgamePlanetServer.la:
	make -C $(top_builddir)/../engine/server/library/serverNetworkMessages/src/shared/gamePlanetServer

$(top_builddir)/../engine/server/library/serverNetworkMessages/src/shared/gameGameServer/libserverNetworkMessagessharedgameGameServer.la:
	make -C $(top_builddir)/../engine/server/library/serverNetworkMessages/src/shared/gameGameServer

$(top_builddir)/../engine/server/library/serverNetworkMessages/src/shared/centralTaskManager/libserverNetworkMessagessharedcentralTaskManager.la:
	make -C $(top_builddir)/../engine/server/library/serverNetworkMessages/src/shared/centralTaskManager

$(top_builddir)/../engine/server/library/serverUtility/libserverUtility.la:
	make -C $(top_builddir)/../engine/server/library/serverUtility

$(top_builddir)/../engine/shared/library/sharedCompression/libsharedCompression.la:
	make -C $(top_builddir)/../engine/shared/library/sharedCompression

$(top_builddir)/../engine/shared/library/sharedDebug/libsharedDebug.la:
	make -C $(top_builddir)/../engine/shared/library/sharedDebug

$(top_builddir)/../engine/shared/library/sharedFile/libsharedFile.la:
	make -C $(top_builddir)/../engine/shared/library/sharedFile

$(top_builddir)/../engine/shared/library/sharedFoundation/libsharedFoundation.la:
	make -C $(top_builddir)/../engine/shared/library/sharedFoundation

$(top_builddir)/../engine/shared/library/sharedLog/libsharedLog.la:
	make -C $(top_builddir)/../engine/shared/library/sharedLog

$(top_builddir)/../engine/shared/library/sharedMemoryManager/libsharedMemoryManager.la:
	make -C $(top_builddir)/../engine/shared/library/sharedMemoryManager

$(top_builddir)/../engine/shared/library/sharedMessageDispatch/libsharedMessageDispatch.la:
	make -C $(top_builddir)/../engine/shared/library/sharedMessageDispatch

$(top_builddir)/../engine/shared/library/sharedNetwork/libsharedNetwork.la:
	make -C $(top_builddir)/../engine/shared/library/sharedNetwork

$(top_builddir)/../engine/shared/library/sharedNetworkMessages/libsharedNetworkMessages.la:
	make -C $(top_builddir)/../engine/shared/library/sharedNetworkMessages

$(top_builddir)/../engine/shared/library/sharedSynchronization/libsharedSynchronization.la:
	make -C $(top_builddir)/../engine/shared/library/sharedSynchronization

$(top_builddir)/../engine/shared/library/sharedThread/libsharedThread.la:
	make -C $(top_builddir)/../engine/shared/library/sharedThread

$(top_builddir)/../engine/server/library/serverKeyShare/libserverKeyShare.la:
	make -C $(top_builddir)/../engine/server/library/serverKeyShare

$(top_builddir)/../external/ours/library/unicodeArchive/libunicodeArchive.la:
	make -C $(top_builddir)/../external/ours/library/unicodeArchive

$(top_builddir)/../external/ours/library/unicode/libunicode.la:
	make -C $(top_builddir)/../external/ours/library/unicode

$(top_builddir)/../external/ours/library/localizationArchive/liblocalizationArchive.la:
	make -C $(top_builddir)/../external/ours/library/localizationArchive

$(top_builddir)/../external/ours/library/localization/liblocalization.la:
	make -C $(top_builddir)/../external/ours/library/localization

$(top_builddir)/../external/ours/library/fileInterface/libfileInterface.la:
	make -C $(top_builddir)/../external/ours/library/fileInterface

$(top_builddir)/../external/ours/library/crypto/libcrypto.la:
	make -C $(top_builddir)/../external/ours/library/crypto

$(top_builddir)/../external/ours/library/archive/libarchive.la:
	make -C $(top_builddir)/../external/ours/library/archive

$(udplibrary_dir)/output/debug/libudplibrary.a:
	make -C $(udplibrary_dir)

$(stlport_dir)/lib/libstlport_gcc.a:
	make -C $(stlport_dir)/src -f gcc-linux.mak

$(top_builddir)/../engine/shared/library/sharedGame/src/shared/sui/libsharedGamesharedsui.la:
	cd $(top_builddir)/../engine/shared/library/sharedGame/src/shared/sui && $(MAKE)


include $(engine_dir)/../make_include/engine.include
