/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@class NSCountedSet, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, WBSHistorySQLiteStore;

@interface WBSHistory : NSObject <WBSHistoryStoreDelegate> {
    NSMutableDictionary *_entriesByURLString;
    NSObject<OS_dispatch_queue> *_entriesByURLStringAccessQueue;
    unsigned long long _historyAgeLimitInDays;
    WBSHistorySQLiteStore *_historyStore;
    NSCountedSet *_stringsForUserTypedDomainExpansion;
    NSObject<OS_dispatch_queue> *_waitUntilHistoryHasLoadedQueue;
    bool_hasStartedLoadingHistory;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) bool hasAnyHistoryItems;
@property(readonly) unsigned long long hash;
@property(readonly) unsigned long long historyAgeLimitInDays;
@property(readonly) unsigned long long numberOfHistoryItems;
@property(readonly) unsigned long long numberOfHistoryItemsOnHistoryQueue;
@property(readonly) Class superclass;

+ (void)clearExistingSharedHistory;
+ (id)existingSharedHistory;
+ (id)historyDatabaseURL;
+ (id)historyDatabaseWriteAheadLogURL;
+ (id)historyPropertyListURL;

- (void).cxx_destruct;
- (void)_addItem:(id)arg1 addToStringsForUserTypedDomainExpansions:(bool)arg2;
- (void)_addItemToStringsForUserTypedDomainExpansion:(id)arg1;
- (void)_addVisitedLinksForItemsIfNeeded:(id)arg1;
- (double)_ageLimitDay;
- (unsigned long long)_cachedNumberOfDevicesInSyncCircle;
- (void)_clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(id)arg3;
- (id)_createHistoryStore;
- (void)_dispatchHistoryCleared:(id)arg1;
- (void)_dispatchHistoryItemDidChange:(id)arg1;
- (void)_dispatchHistoryItemWillChange:(id)arg1;
- (void)_dispatchHistoryItemsAdded:(id)arg1;
- (void)_dispatchHistoryItemsLoaded:(id)arg1;
- (void)_dispatchHistoryItemsRemoved:(id)arg1;
- (void)_dispatchHistoryItemsRemovedDuringLoading:(id)arg1;
- (void)_dispatchHistoryLoaded;
- (id)_fetchThrottlerData;
- (void)_getAllTombstonesWithCompletion:(id)arg1;
- (void)_getServerChangeTokenDataWithCompletion:(id)arg1;
- (void)_getVisitsAndTombstonesNeedingSyncWithCompletion:(id)arg1;
- (Class)_historyItemClass;
- (bool)_isStringForUserTypedDomainExpansionInHistory:(id)arg1;
- (void)_loadHistory;
- (void)_loadHistoryAsynchronouslyIfNeeded;
- (id)_pushThrottlerData;
- (void)_removeAllVisitedLinks;
- (void)_removeHistoryItemsInResponseToUserAction:(id)arg1 completionHandler:(id)arg2;
- (void)_removeHistoryItemsInResponseToUserAction:(id)arg1;
- (id)_removeItemForURLString:(id)arg1;
- (void)_removeItemFromStringsForUserTypedDomainExpansion:(id)arg1;
- (void)_replayAndAddTombstone:(id)arg1;
- (void)_sendNotification:(id)arg1 withItems:(id)arg2;
- (void)_setCachedNumberOfDevicesInSyncCircle:(unsigned long long)arg1;
- (void)_setFetchThrottlerData:(id)arg1;
- (void)_setPushThrottlerData:(id)arg1;
- (void)_setServerChangeTokenData:(id)arg1;
- (void)_setSyncCircleSizeRetrievalThrottlerData:(id)arg1;
- (id)_syncCircleSizeRetrievalThrottlerData;
- (void)_visitIdentifiersMatchingExistingVisits:(id)arg1 populateAssociatedVisits:(bool)arg2 completion:(id)arg3;
- (void)_waitUntilHistoryHasLoadedMainThread;
- (void)addAutocompleteTrigger:(id)arg1 forURLString:(id)arg2;
- (bool)canRecordRedirectFromVisit:(id)arg1 to:(id)arg2;
- (void)clearHistory;
- (void)clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2;
- (void)clearHistoryWithCompletionHandler:(id)arg1;
- (void)close;
- (void)dealloc;
- (void)enumerateItemsUsingBlock:(id)arg1;
- (bool)hasAnyHistoryItems;
- (unsigned long long)historyAgeLimitInDays;
- (void)historyLoader:(id)arg1 didLoadItems:(id)arg2 discardedItems:(id)arg3 stringsForUserTypeDomainExpansion:(id)arg4;
- (void)historyLoaderDidFinishLoading:(id)arg1;
- (void)historyStore:(id)arg1 didPrepareToDeleteWithDeletionPlan:(id)arg2;
- (id)historyStore;
- (void)historyStoreDidFailDatabaseIntegrityCheck:(id)arg1;
- (bool)historyStoreShouldCheckDatabaseIntegrity:(id)arg1;
- (id)init;
- (id)itemForURL:(id)arg1;
- (id)itemForURLString:(id)arg1;
- (id)itemRedirectedFrom:(id)arg1 to:(id)arg2 origin:(long long)arg3 date:(id)arg4;
- (id)itemRedirectedFrom:(id)arg1 to:(id)arg2;
- (id)itemVisitedAtURLString:(id)arg1 title:(id)arg2 timeOfVisit:(double)arg3 wasHTTPNonGet:(bool)arg4 wasFailure:(bool)arg5 increaseVisitCount:(bool)arg6 origin:(long long)arg7;
- (id)itemVisitedAtURLString:(id)arg1 title:(id)arg2 wasHTTPNonGet:(bool)arg3 wasFailure:(bool)arg4 increaseVisitCount:(bool)arg5;
- (unsigned long long)numberOfHistoryItems;
- (unsigned long long)numberOfHistoryItemsOnHistoryQueue;
- (void)performBlockAfterHistoryHasLoaded:(id)arg1;
- (void)savePendingChangesBeforeTerminationWithCompletionHandler:(id)arg1;
- (void)updateTitle:(id)arg1 forVisit:(id)arg2;
- (void)waitUntilHistoryHasLoaded;

@end
