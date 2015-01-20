/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class FigCameraViewfinderSessionLocal, NSDictionary, NSString;

@interface FigCameraViewfinderLocal : FigCameraViewfinder <FigCaptureSessionObserver> {
    FigCameraViewfinderSessionLocal *_activeViewfinderSession;
    NSDictionary *_options;
    bool_observing;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) int photoThumbnailMaxDimension;
@property(readonly) float photoThumbnailQuality;
@property(readonly) bool photoThumbnailQualitySpecified;
@property(readonly) Class superclass;

+ (id)cameraViewfinder;
+ (void)initialize;

- (void)_updateActiveViewfinderSession:(id)arg1;
- (void)captureSession:(long long)arg1 didCapturePhotoWithStatus:(int)arg2 thumbnailData:(id)arg3 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (void)captureSessionDidStart:(id)arg1;
- (void)captureSessionDidStop:(long long)arg1;
- (void)dealloc;
- (id)init;
- (int)photoThumbnailMaxDimension;
- (float)photoThumbnailQuality;
- (bool)photoThumbnailQualitySpecified;
- (void)startWithOptions:(id)arg1;
- (void)stop;

@end
