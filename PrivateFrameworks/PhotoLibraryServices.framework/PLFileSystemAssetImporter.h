/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSMutableDictionary, NSMutableIndexSet, NSMutableSet, NSString, PLPhotoLibrary;

@interface PLFileSystemAssetImporter : NSObject {
    NSMutableDictionary *_existingOIDsByUUID;
    NSMutableSet *_existingUUIDs;
    NSMutableDictionary *_existingUUIDsByPath;
    PLPhotoLibrary *_photoLibrary;
    NSString *_photoLibraryStoreUUID;
    NSMutableIndexSet *_thumbIndexes;
    unsigned long long _thumbnailBatchFetchSize;
    bool_hasProcessedAnyAssets;
}

@property(retain) NSMutableDictionary * existingOIDsByUUID;
@property(retain) NSMutableSet * existingUUIDs;
@property(retain) NSMutableDictionary * existingUUIDsByPath;
@property unsigned long long thumbnailBatchFetchSize;

- (id)_addAssetWithURL:(id)arg1 existingOID:(id)arg2;
- (id)addAssetWithURLs:(id)arg1 forceInsert:(bool)arg2 forceUpdate:(bool)arg3;
- (id)addAssetWithURLs:(id)arg1;
- (void)addAvailableThumbnailIndex:(unsigned long long)arg1;
- (id)assetURLisInDatabase:(id)arg1;
- (void)dealloc;
- (id)existingOIDsByUUID;
- (id)existingUUIDs;
- (id)existingUUIDsByPath;
- (id)initWithPhotoLibrary:(id)arg1;
- (unsigned long long)nextThumbnailIndex;
- (void)setExistingOIDsByUUID:(id)arg1;
- (void)setExistingUUIDs:(id)arg1;
- (void)setExistingUUIDsByPath:(id)arg1;
- (void)setModificationAndCreationDateOnAsset:(id)arg1 withURL:(id)arg2;
- (void)setThumbnailBatchFetchSize:(unsigned long long)arg1;
- (bool)setupPhotoAsset:(id)arg1 withURL:(id)arg2;
- (bool)setupVideoAsset:(id)arg1 withURL:(id)arg2;
- (unsigned long long)thumbnailBatchFetchSize;

@end
