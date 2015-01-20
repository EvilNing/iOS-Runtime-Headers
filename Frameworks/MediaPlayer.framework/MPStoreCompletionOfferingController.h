/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSCache, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface MPStoreCompletionOfferingController : NSObject <MCProfileConnectionObserver> {
    NSMutableDictionary *_lookupItemsByStoreLookupID;
    NSMutableDictionary *_lookupItemsByTokenID;
    unsigned long long _nextTokenID;
    NSCache *_offeringCache;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (void)_getIsCMCDisabled:(bool*)arg1 disabledReason:(id*)arg2;
+ (bool)_isCmcEnabled;
+ (void)setWantsArtwork:(bool)arg1;
+ (id)storeOfferingController;

- (void).cxx_destruct;
- (void)_defaultMediaLibraryDidChangeNotification:(id)arg1;
- (void)_dumpCache;
- (void)_lookupCompletedWithResponse:(id)arg1 lookupItem:(id)arg2 error:(id)arg3;
- (void)_onQueueCancelCompletionOfferingLookupTokenID:(unsigned long long)arg1;
- (void)_onQueueClearCache;
- (id)_onQueueCompletionOfferingForAlbumItemsQuery:(id)arg1;
- (id)_onQueueGetInsertedLookupItemForAlbumItemsQuery:(id)arg1 requestAlreadyIssued:(bool*)arg2 responseBlock:(id)arg3;
- (void)_onQueuePostLookupCompletedForLookupItem:(id)arg1 offering:(id)arg2 error:(id)arg3;
- (void)_onQueueRemoveLookupItem:(id)arg1;
- (void)_onQueueRemoveLookupItemsForStoreLookupID:(id)arg1;
- (void)_onQueueSetCachedCompletionOffering:(id)arg1 forStoreLookupID:(id)arg2;
- (id)_onQueueStartCompletionOfferingLookupForAlbumItemsQuery:(id)arg1 responseBlock:(id)arg2;
- (id)_sanitizedQuery:(id)arg1;
- (void)_storeAccountsDidChangeNotification:(id)arg1;
- (void)cancelCompletionOfferingLookup:(unsigned long long)arg1;
- (id)completionOfferingForAlbumItemsQuery:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (unsigned long long)startCompletionOfferingLookupForAlbumItemsQuery:(id)arg1 responseBlock:(id)arg2;

@end
