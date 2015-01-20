/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSIndexSet, NSString, PLAssetContainerChangeNotification, PLFilteredAlbum, PLIndexMapper;

@interface PLFilteredAlbumChangeNotification : PLAssetContainerChangeNotification <PLDerivedNotification, PLIndexMapperDataSource> {
    PLFilteredAlbum *_album;
    PLAssetContainerChangeNotification *_backingNotification;
    NSIndexSet *_filteredIndexes;
    PLIndexMapper *_indexMapper;
    NSIndexSet *_oldFilteredIndexes;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * description;
@property(copy) NSIndexSet * filteredIndexes;
@property(readonly) unsigned long long hash;
@property(readonly) unsigned long long hash;
@property(retain,readonly) PLIndexMapper * indexMapper;
@property(readonly) Class superclass;
@property(readonly) Class superclass;
@property(retain,readonly) NSIndexSet * updatedFilteredIndexes;

+ (id)notificationForDerivedObject:(id)arg1 priorChangeState:(id)arg2 forBackingObjectNotification:(id)arg3;

- (id)_changedObjects;
- (id)_diffDescription;
- (bool)_getOldSet:(id*)arg1 newSet:(id*)arg2;
- (id)album;
- (bool)countDidChange;
- (void)dealloc;
- (id)description;
- (id)filteredIndexes;
- (id)indexMapper;
- (id)init;
- (id)initWithFilteredAlbum:(id)arg1 priorChangeState:(id)arg2 albumChangeNotification:(id)arg3;
- (bool)keyAssetDidChange;
- (id)object;
- (void)setFilteredIndexes:(id)arg1;
- (bool)shouldIncludeObjectAtIndex:(unsigned long long)arg1;
- (bool)shouldReload;
- (bool)titleDidChange;
- (id)updatedFilteredIndexes;

@end
