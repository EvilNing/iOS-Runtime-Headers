/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, PUPhotosGridViewController, PUResourceDownloadRequest;

@interface PUPhotosGridDownloadHelper : NSObject {
    id _currentDownloadSuccessHandler;
    NSString *_currentGridProgressIdentifier;
    PUResourceDownloadRequest *_currentResourceDownloadRequest;
    PUPhotosGridViewController *_gridViewController;
}

@property(readonly) PUPhotosGridViewController * gridViewController;

- (void).cxx_destruct;
- (void)_downloadForRequest:(id)arg1 didCompleteWithSuccess:(bool)arg2 canceled:(bool)arg3 error:(id)arg4;
- (void)_startDownloadingRequiredResourcesForRequest:(id)arg1 inCollection:(id)arg2;
- (void)_updateDownloadProgress;
- (void)cancelCurrentAssetDownload;
- (id)gridViewController;
- (void)handleDownloadOfAsset:(id)arg1 inCollection:(id)arg2 withSuccessHandler:(id)arg3;
- (id)initWithGridViewController:(id)arg1;

@end
