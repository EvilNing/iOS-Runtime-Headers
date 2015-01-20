/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLImageCacheList, PLImageLoadingThread;

@interface PLImageCache : NSObject {
    PLImageCacheList *_cacheList;
    PLImageLoadingThread *_loader;
}

- (void)_addImageToCache:(id)arg1;
- (id)_cachedImageFromSource:(id)arg1 asset:(id)arg2;
- (id)_imageLoader;
- (void)_uncacheImage:(id)arg1;
- (id)cachedImageFromSource:(id)arg1 asset:(id)arg2 loadIfNeeded:(bool)arg3 synchronously:(bool)arg4 priority:(int)arg5 forImageLoadingQueue:(id)arg6 completion:(id)arg7;
- (id)cachedImageFromSource:(id)arg1 forAsset:(id)arg2 loadIfNeeded:(bool)arg3 synchronously:(bool)arg4 priority:(int)arg5 forImageLoadingQueue:(id)arg6;
- (void)cancelLoadFromSource:(id)arg1 asset:(id)arg2 imageLoadingQueue:(id)arg3;
- (void)dealloc;
- (id)init;
- (void)invalidateCachedImageForSource:(id)arg1 asset:(id)arg2;
- (id)newCachedImageWithImageContents:(void*)arg1 orientation:(long long)arg2 metadata:(id)arg3 fromSource:(id)arg4 asset:(id)arg5;
- (id)newImageLoadingQueue;
- (void)pauseLoading;
- (void)removeImageLoadingQueue:(id)arg1;
- (void)resumeLoading;

@end
