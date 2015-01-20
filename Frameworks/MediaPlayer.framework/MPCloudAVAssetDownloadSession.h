/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPCloudAssetDownloadSessionIdentifier, MPStoreItemContext;

@interface MPCloudAVAssetDownloadSession : AVAssetDownloadSession {
    MPStoreItemContext *_context;
    MPCloudAssetDownloadSessionIdentifier *_downloadSessionIdentifier;
    bool_isStreamingQuality;
}

@property(retain) MPStoreItemContext * context;
@property(retain) MPCloudAssetDownloadSessionIdentifier * downloadSessionIdentifier;
@property bool isStreamingQuality;

+ (id)assetDownloadSessionWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 context:(id)arg4;

- (void).cxx_destruct;
- (id)context;
- (id)downloadSessionIdentifier;
- (bool)isStreamingQuality;
- (void)setContext:(id)arg1;
- (void)setDownloadSessionIdentifier:(id)arg1;
- (void)setIsStreamingQuality:(bool)arg1;

@end
