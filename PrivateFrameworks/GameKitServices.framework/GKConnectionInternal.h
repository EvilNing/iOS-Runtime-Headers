/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CDXClient, NSData, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_source>, NSString, TimingCollection;

@interface GKConnectionInternal : GKConnection <CDXClientDelegate, CDXClientSessionDelegate> {
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    NSMutableArray *_allowRelayPIDList;
    } _cPreblobFetch;
    } _cPrepareThread;
    CDXClient *_cdxClient;
    NSMutableDictionary *_cdxSessions;
    id _eventDelegate;
    int _fPreReleased;
    int _fPrepareThread;
    NSMutableArray *_gckEventList;
    unsigned int _gckPID;
    struct OpaqueGCKSession { } *_gckSession;
    NSMutableDictionary *_initRelayQueue;
    NSObject<OS_dispatch_source> *_localGamingCDXListenSource;
    unsigned short _localGamingCDXPort;
    int _localGamingCDXSocket;
    NSMutableDictionary *_localGamingSocketToConnectionDataMap;
    NSMutableDictionary *_localGamingSocketToPIDMap;
    NSMutableArray *_pendingConnectionPIDList;
    TimingCollection *_perfTimers;
    NSString *_pidGUID;
    NSMutableDictionary *_pidToConnectTimeoutSource;
    NSMutableDictionary *_pidToConnectionDataMap;
    NSMutableDictionary *_pidToPlayerIDMap;
    NSMutableDictionary *_pidToPreblobMap;
    NSMutableDictionary *_pidToRelayConnectionDataMap;
    NSMutableDictionary *_pidToRelayInitiateInfoMap;
    NSMutableDictionary *_pidToRelayUpdateInfoMap;
    NSMutableSet *_pidsPreparedForConnection;
    NSData *_preblob;
    id _preblobCallback;
    double _preblobCallbackCancelTime;
    NSMutableDictionary *_preblobToPIDMap;
    struct opaqueRTCReporting { } *_reportingAgent;
    NSMutableDictionary *_updateRelayQueue;
    double _wakeTime;
    } _xPreblobFetch;
    } _xPrepareThread;
    } _xRelay;
    bool_fAllowMoreRelay;
    bool_toForwardEVents;
}

@property(retain) CDXClient * cdxClient;
@property(retain) NSMutableDictionary * cdxSessions;
@property(retain) NSMutableDictionary * pidToConnectTimeoutSource;

- (void)CDXClient:(id)arg1 error:(id)arg2;
- (void)CDXClient:(id)arg1 preblob:(id)arg2;
- (void)CDXClientSession:(id)arg1 receivedData:(id)arg2 from:(long long)arg3;
- (void)addEvent:(struct { int x1; char *x2; int x3; unsigned int x4; }*)arg1 remotePeer:(unsigned int)arg2;
- (id)asyncWorkQueue;
- (void)cancelConnectParticipant:(id)arg1;
- (id)cdxClient;
- (id)cdxSessions;
- (void)connectParticipantsWithConnectionData:(id)arg1 withSessionInfo:(id)arg2;
- (void)connectPendingConnectionsFromList:(id)arg1 sessionInfo:(id)arg2;
- (bool)convertParticipantID:(id)arg1 toPeerID:(id*)arg2;
- (bool)convertPeerID:(id)arg1 toParticipantID:(id*)arg2;
- (id)createInitiateRelayDictionaryForParticipant:(id)arg1 remotePeerID:(id)arg2;
- (id)createInsecureTicketUsingSortedConnectionsFromList:(id)arg1;
- (void)dealloc;
- (void)doRelayCheckForRemotePeerID:(id)arg1;
- (id)eventDelegate;
- (id)extractBlobUsingData:(id)arg1 withSourcePID:(unsigned int)arg2 destPID:(unsigned int)arg3;
- (unsigned int)gckPID;
- (struct OpaqueGCKSession { }*)gckSession;
- (id)getLocalConnectionDataForLocalGaming;
- (void)getLocalConnectionDataWithCompletionHandler:(id)arg1;
- (id)initWithParticipantID:(id)arg1;
- (void)initiateRelayWithParticipant:(id)arg1 withConnectionData:(id)arg2 withRelayInfo:(id)arg3 didInitiate:(bool)arg4;
- (void)internalInitiateRelayWithParticipant:(id)arg1 withConnectionData:(id)arg2 withRelayInfo:(id)arg3 didInitiate:(bool)arg4;
- (void)internalUpdateRelayWithParticipant:(id)arg1 withConnectionData:(id)arg2 withRelayInfo:(id)arg3 didInitiate:(bool)arg4;
- (void)internal_setRemoteConnectionData:(id)arg1 fromParticipantID:(id)arg2 pendingConnectionPIDList:(id)arg3;
- (bool)localGamingCheckEstablishConnection:(id)arg1 connectionData:(id)arg2;
- (void)localGamingReceiveDataHandler:(id)arg1 data:(id)arg2 time:(double)arg3 error:(id)arg4;
- (id)networkStatistics;
- (id)networkStatisticsDictionaryForGCKStats:(void*)arg1;
- (id)newRelayUpdateDictionaryForParticipant:(id)arg1 didInitiate:(bool)arg2;
- (id)pidToConnectTimeoutSource;
- (void)preRelease;
- (struct opaqueRTCReporting { }*)reportingAgent;
- (void)setCdxClient:(id)arg1;
- (void)setCdxSessions:(id)arg1;
- (void)setEventDelegate:(id)arg1;
- (void)setParticipantID:(id)arg1 forPeerID:(id)arg2;
- (void)setPidToConnectTimeoutSource:(id)arg1;
- (void)setReportingAgent:(struct opaqueRTCReporting { }*)arg1;
- (bool)shouldWeInitiateRelayWithPID:(unsigned int)arg1;
- (bool)startListeningForLocalGamingCDX;
- (id)timerQueue;
- (void)updateRelayWithParticipant:(id)arg1 withConnectionData:(id)arg2 withRelayInfo:(id)arg3 didInitiate:(bool)arg4;

@end
