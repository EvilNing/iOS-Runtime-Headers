/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@class NSCache, NSMapTable, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface MCDBrowsableContentModel : NSObject {
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSString *_bundleID;
    NSCache *_fetchedItems;
    NSMutableDictionary *_identifiersToIndexPaths;
    NSMapTable *_indexPathsToViewControllers;
    NSObject<OS_dispatch_queue> *_serialAccessQueue;
}

@property(copy,readonly) NSString * bundleID;

- (void).cxx_destruct;
- (void)_contentItemsUpdated:(id)arg1;
- (void)_dataSourceInvalidated:(id)arg1;
- (void)_finishLoadingNotification:(id)arg1;
- (void)_notifyLoadOfIndexPath:(id)arg1;
- (void)_nowPlayingDidChangeNotifiction:(id)arg1;
- (void)_playbackInitiatedNotification:(id)arg1;
- (id)bundleID;
- (id)contentItemForIndexPath:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)fetchChildrenAtIndexPath:(id)arg1 forRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 completionHandler:(id)arg3;
- (void)getCountOfItemsForIndexPath:(id)arg1 completionHandler:(id)arg2;
- (id)initWithBundleID:(id)arg1;
- (void)initiatePlaybackAtIndexPath:(id)arg1;
- (id)listenerForIndexPath:(id)arg1;
- (void)loadBrowsableContentForIndexPath:(id)arg1;
- (void)registerListener:(id)arg1 forIndexPath:(id)arg2;
- (bool)remoteAppIsPlaying;
- (void)unregisterListenerAtIndexPath:(id)arg1;

@end
