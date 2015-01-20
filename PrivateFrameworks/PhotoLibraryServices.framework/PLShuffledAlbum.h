/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class <NSObject><NSCopying>, NSArray, NSDate, NSDictionary, NSMutableOrderedSet, NSNumber, NSObject<PLAlbumProtocol>, NSOrderedSet, NSString, NSURL, PLManagedAsset, UIImage;

@interface PLShuffledAlbum : NSObject <PLAlbumProtocol, PLIndexMappingCache> {
    NSMutableOrderedSet *_assets;
    struct NSObject { Class x1; } *_backingAlbum;
    struct __CFArray { } *_fromBackingMap;
    PLManagedAsset *_startingAsset;
    struct __CFArray { } *_toBackingMap;
}

@property(retain) NSMutableOrderedSet * _assets;
@property(readonly) unsigned long long approximateCount;
@property(retain,readonly) NSOrderedSet * assets;
@property(readonly) unsigned long long assetsCount;
@property(retain,readonly) NSObject<PLAlbumProtocol> * backingAlbum;
@property unsigned long long batchSize;
@property(copy,readonly) <NSObject><NSCopying> * cachedIndexMapState;
@property(readonly) bool canContributeToCloudSharedAlbum;
@property(readonly) bool canShowAvalancheStacks;
@property(readonly) bool canShowComments;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * description;
@property(retain,readonly) NSDate * endDate;
@property(retain,readonly) NSURL * groupURL;
@property bool hasUnseenContentBoolValue;
@property(readonly) unsigned long long hash;
@property(readonly) unsigned long long hash;
@property(retain) NSString * importSessionID;
@property(readonly) bool isCameraAlbum;
@property(readonly) bool isCloudSharedAlbum;
@property(readonly) bool isEmpty;
@property(readonly) bool isFamilyCloudSharedAlbum;
@property(readonly) bool isFolder;
@property(readonly) bool isInTrash;
@property(readonly) bool isLibrary;
@property(readonly) bool isMultipleContributorCloudSharedAlbum;
@property(readonly) bool isOwnedCloudSharedAlbum;
@property(readonly) bool isPanoramasAlbum;
@property(readonly) bool isPendingPhotoStreamAlbum;
@property(readonly) bool isPhotoStreamAlbum;
@property(readonly) bool isRecentlyAddedAlbum;
@property(readonly) bool isStandInAlbum;
@property(readonly) bool isUserLibraryAlbum;
@property(readonly) bool isWallpaperAlbum;
@property(retain) PLManagedAsset * keyAsset;
@property(retain,readonly) NSNumber * kind;
@property(readonly) int kindValue;
@property(copy,readonly) NSArray * localizedLocationNames;
@property(copy,readonly) NSString * localizedTitle;
@property(retain,readonly) NSMutableOrderedSet * mutableAssets;
@property(copy,readonly) NSString * name;
@property int pendingItemsCount;
@property int pendingItemsType;
@property(readonly) unsigned long long photosCount;
@property(retain,readonly) UIImage * posterImage;
@property(retain) PLManagedAsset * secondaryKeyAsset;
@property(readonly) bool shouldDeleteWhenEmpty;
@property(retain) NSDictionary * slideshowSettings;
@property(copy,readonly) id sortingComparator;
@property(retain,readonly) NSDate * startDate;
@property(retain,readonly) PLManagedAsset * startingAsset;
@property(readonly) Class superclass;
@property(readonly) Class superclass;
@property(retain) PLManagedAsset * tertiaryKeyAsset;
@property(retain,readonly) NSString * title;
@property(retain,readonly) NSString * uuid;
@property(readonly) unsigned long long videosCount;

+ (struct NSObject { Class x1; }*)shuffledAlbum:(struct NSObject { Class x1; }*)arg1 startingAsset:(id)arg2;
+ (struct NSObject { Class x1; }*)unshuffledAlbum:(struct NSObject { Class x1; }*)arg1;

- (id)_assets;
- (unsigned long long)approximateCount;
- (id)assets;
- (unsigned long long)assetsCount;
- (struct NSObject { Class x1; }*)backingAlbum;
- (void)batchFetchAssets:(id)arg1;
- (id)cachedIndexMapState;
- (bool)canContributeToCloudSharedAlbum;
- (bool)canPerformEditOperation:(unsigned long long)arg1;
- (bool)canShowAvalancheStacks;
- (bool)canShowComments;
- (unsigned long long)count;
- (unsigned long long)countOfShuffledAssets;
- (void)createShuffledIndexesMaps;
- (void)createShuffledIndexesMapsIfNeeded;
- (void)dealloc;
- (Class)derivedChangeNotificationClass;
- (id)description;
- (struct __CFArray { }*)fromBackingMap;
- (id)groupURL;
- (bool)hasUnseenContentBoolValue;
- (id)importSessionID;
- (unsigned long long)indexInShuffledAssetsOfObject:(id)arg1;
- (id)init;
- (id)initWithBackingAlbum:(struct NSObject { Class x1; }*)arg1 startingAsset:(id)arg2;
- (void)insertObject:(id)arg1 inShuffledAssetsAtIndex:(unsigned long long)arg2;
- (bool)isCameraAlbum;
- (bool)isCloudSharedAlbum;
- (bool)isEmpty;
- (bool)isFamilyCloudSharedAlbum;
- (bool)isFolder;
- (bool)isInTrash;
- (bool)isLibrary;
- (bool)isMultipleContributorCloudSharedAlbum;
- (bool)isOwnedCloudSharedAlbum;
- (bool)isPanoramasAlbum;
- (bool)isPendingPhotoStreamAlbum;
- (bool)isPhotoStreamAlbum;
- (bool)isRecentlyAddedAlbum;
- (bool)isStandInAlbum;
- (bool)isUserLibraryAlbum;
- (bool)isWallpaperAlbum;
- (id)keyAsset;
- (id)kind;
- (int)kindValue;
- (id)localizedLocationNames;
- (id)localizedTitle;
- (bool)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2;
- (id)mutableAssets;
- (id)name;
- (id)objectInShuffledAssetsAtIndex:(unsigned long long)arg1;
- (int)pendingItemsCount;
- (int)pendingItemsType;
- (unsigned long long)photosCount;
- (id)posterImage;
- (void)reducePendingItemsCountBy:(unsigned long long)arg1;
- (void)removeObjectFromShuffledAssetsAtIndex:(unsigned long long)arg1;
- (void)replaceObjectInShuffledAssetsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (id)secondaryKeyAsset;
- (void)setHasUnseenContentBoolValue:(bool)arg1;
- (void)setImportSessionID:(id)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setPendingItemsCount:(int)arg1;
- (void)setPendingItemsType:(int)arg1;
- (void)setSecondaryKeyAsset:(id)arg1;
- (void)setSlideshowSettings:(id)arg1;
- (void)setTertiaryKeyAsset:(id)arg1;
- (void)set_assets:(id)arg1;
- (bool)shouldDeleteWhenEmpty;
- (id)slideshowSettings;
- (id)sortingComparator;
- (id)startingAsset;
- (id)tertiaryKeyAsset;
- (id)title;
- (id)uuid;
- (unsigned long long)videosCount;

@end
