/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class APSConnection, BRCAccountSession, BRCContainerMetadataSyncPersistedState, BRCCountedSet, BRCMinHeap, BRCOperation, BRCRelativePath, BRCSyncBudgetThrottle, BRCThrottle, BRCThrottledScheduler, CKContainer, NSMutableDictionary, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSOperationQueue, NSString, PQLConnection;

@interface BRCContainerScheduler : NSObject <APSConnectionDelegate, BRCLocalContainerDelegate, BRCLowDiskDelegate> {
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    BRCThrottledScheduler *_applyChangesScheduler;
    unsigned long long _availableQuota;
    CKContainer *_ckContainerForContainersMetadataSync;
    PQLConnection *_clientDB;
    BRCContainerMetadataSyncPersistedState *_containerMetadataPersistedState;
    BRCOperation *_containerMetadataSyncOperation;
    unsigned int _containerMetadataSyncState;
    BRCThrottle *_containerResetThrottle;
    NSObject<OS_dispatch_source> *_containersMetadataSyncSource;
    BRCCountedSet *_coordinatedReaders;
    BRCCountedSet *_coordinatedWriters;
    NSObject<OS_dispatch_group> *_downloadGroup;
    NSString *_environmentName;
    NSObject<OS_dispatch_group> *_initialSyncDownGroup;
    NSMutableDictionary *_localContainersByID;
    NSMutableDictionary *_localContainersByMangledID;
    } _lock;
    BRCMinHeap *_lostHeap;
    NSObject<OS_dispatch_source> *_lostScanDelay;
    NSObject<OS_dispatch_group> *_lostScanGroup;
    id _lostScanHandler;
    NSObject<OS_dispatch_queue> *_lostScanQueue;
    NSObject<OS_dispatch_source> *_lostScanSource;
    APSConnection *_pushConnection;
    NSObject<OS_dispatch_queue> *_pushQueue;
    NSObject<OS_dispatch_source> *_pushSource;
    BRCThrottledScheduler *_readerScheduler;
    BRCRelativePath *_root;
    NSMutableDictionary *_serverContainersByID;
    PQLConnection *_serverDB;
    BRCAccountSession *_session;
    NSObject<OS_dispatch_source> *_syncDelay;
    NSObject<OS_dispatch_group> *_syncGroup;
    BRCMinHeap *_syncHeap;
    NSOperationQueue *_syncOperationQueue;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSObject<OS_dispatch_source> *_syncSource;
    BRCSyncBudgetThrottle *_syncUpBudget;
    NSObject<OS_dispatch_group> *_uploadGroup;
    NSObject<OS_dispatch_group> *_writerGroup;
    bool_applyCountReachedMax;
    bool_isInLowDisk;
    bool_readerCountReachedMax;
    /* Warning: Unrecognized filer type: 'A' using 'void*' */ void*_downloadSuspendCount;
    /* Warning: Unrecognized filer type: 'A' using 'void*' */ void*_uploadSuspendCount;
}

@property(readonly) BRCAccountSession * accountSession;
@property(readonly) BRCThrottledScheduler * applyChangesScheduler;
@property unsigned long long availableQuota;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) NSObject<OS_dispatch_group> * downloadGroup;
@property(readonly) unsigned long long hash;
@property(readonly) NSObject<OS_dispatch_group> * initialSyncDownGroup;
@property(readonly) NSObject<OS_dispatch_group> * lostScanGroup;
@property(readonly) BRCThrottledScheduler * readerScheduler;
@property(readonly) Class superclass;
@property(readonly) NSObject<OS_dispatch_group> * syncGroup;
@property(readonly) BRCSyncBudgetThrottle * syncUpBudget;
@property(readonly) NSObject<OS_dispatch_group> * uploadGroup;
@property(readonly) NSObject<OS_dispatch_group> * writerGroup;

- (void).cxx_destruct;
- (void)_addContainerToScheduler:(id)arg1;
- (long long)_applyAdditionsInContainer:(id)arg1;
- (long long)_applyChangesScheduleContainer:(id)arg1;
- (void)_automaticSyncSchedule;
- (id)_containerMetadataRecordsToSave;
- (id)_containersMetadataSyncDatabase;
- (void)_lostScanSchedule;
- (unsigned long long)_readCoordinationCount;
- (long long)_readerScheduleContainer:(id)arg1;
- (void)_removeContainerFromLostScanList:(id)arg1;
- (void)_removeContainerFromSyncList:(id)arg1;
- (void)_scheduleUpdatePushTopicsRegistration;
- (void)_signalContainersMetadataSync;
- (void)_syncSchedule;
- (void)_syncScheduleForContainersMetadata;
- (void)_unscheduleContainer:(id)arg1;
- (void)_updatePushTopicsRegistration;
- (unsigned long long)_writeCoordinationCount;
- (id)accountSession;
- (void)activateLocalContainer:(id)arg1 withServerContainer:(id)arg2 creation:(bool)arg3;
- (id)applyChangesScheduler;
- (unsigned long long)availableQuota;
- (id)ckContainerForContainersMetadataSync;
- (void)close;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (id)containerByID:(id)arg1;
- (id)containerByMangledID:(id)arg1;
- (void)containerDidBecomeBackground:(id)arg1;
- (void)containerDidBecomeForeground:(id)arg1;
- (id)createContainerIfNeeded:(id)arg1 isInReset:(bool)arg2;
- (bool)createContainerOnDisk:(id)arg1 createdRoot:(bool*)arg2 createdDocuments:(bool*)arg3;
- (void)deactivate;
- (void)didChangeApplyChangesStatusForContainer:(id)arg1;
- (void)didChangeLostScanStatusForContainer:(id)arg1;
- (void)didChangeReaderStatusForContainer:(id)arg1;
- (void)didChangeSyncStatusForContainer:(id)arg1;
- (void)didChangeSyncStatusForContainerMetadataForContainer:(id)arg1;
- (void)didInitialSyncDownForContainer:(id)arg1;
- (void)didMarkItemNeedsDownloadInContainer:(id)arg1 oldState:(unsigned int)arg2 newState:(unsigned int)arg3;
- (void)didMarkItemNeedsUploadInContainer:(id)arg1 oldState:(unsigned int)arg2 newState:(unsigned int)arg3;
- (id)downloadGroup;
- (void)downloadResume;
- (void)downloadSuspend;
- (void)dumpToContext:(id)arg1;
- (void)endReadCoordinationInContainer:(id)arg1;
- (void)endWriteCoordinationInContainer:(id)arg1;
- (void)enumerateContainers:(id)arg1;
- (id)initWithAccountSession:(id)arg1;
- (id)initialSyncDownGroup;
- (id)lostScanGroup;
- (void)lostScanResume;
- (void)lostScanSetupTargetQueue:(id)arg1 handler:(id)arg2;
- (void)lostScanSuspend;
- (void)lowDiskStatusChangedForDevice:(int)arg1 hasEnoughSpace:(bool)arg2;
- (id)readerScheduler;
- (void)refreshPushRegistrationAfterAppsListChanged;
- (id)removeAndReturnLocalContainers;
- (void)resetContainer:(id)arg1 resetType:(unsigned long long)arg2;
- (void)resetContainerAsync:(id)arg1;
- (void)scheduleReset:(unsigned long long)arg1 forContainer:(id)arg2;
- (void)scheduleSyncDownContainerMetadata;
- (void)setAvailableQuota:(unsigned long long)arg1;
- (void)setupWithRoot:(id)arg1;
- (bool)startReadCoordinationInContainer:(id)arg1;
- (bool)startWriteCoordinationInContainer:(id)arg1;
- (id)syncGroup;
- (void)syncResume;
- (void)syncSuspend;
- (id)syncUpBudget;
- (id)uploadGroup;
- (void)uploadResume;
- (void)uploadSuspend;
- (void)willInitialSyncDownForContainer:(id)arg1;
- (id)writerGroup;

@end
