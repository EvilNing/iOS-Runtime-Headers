/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVVideoComposition, AVVideoCompositionRenderContextInternal;

@interface AVVideoCompositionRenderContext : NSObject {
    AVVideoCompositionRenderContextInternal *_internal;
}

@property(readonly) struct { double x1; double x2; double x3; double x4; } edgeWidths;
@property(readonly) bool highQualityRendering;
@property(readonly) struct { long long x1; long long x2; } pixelAspectRatio;
@property(readonly) float renderScale;
@property(readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } renderTransform;
@property(readonly) struct CGSize { double x1; double x2; } size;
@property(readonly) AVVideoComposition * videoComposition;

+ (id)renderContextPropertiesFromFigCompositor:(struct OpaqueFigVideoCompositor { }*)arg1;

- (void)_willDeallocOrFinalize;
- (void)dealloc;
- (struct { double x1; double x2; double x3; double x4; })edgeWidths;
- (void)finalize;
- (bool)hasEqualPropertiesToFigVideoCompositor:(struct OpaqueFigVideoCompositor { }*)arg1;
- (bool)highQualityRendering;
- (id)initWithFigVideoCompositor:(struct OpaqueFigVideoCompositor { }*)arg1 clientRequiredPixelBufferAttributes:(id)arg2 videoComposition:(id)arg3 pixelBufferPool:(struct __CVPixelBufferPool { }*)arg4;
- (bool)isBufferYCbCr:(struct __CVBuffer { }*)arg1;
- (struct __CVBuffer { }*)newPixelBuffer;
- (struct { long long x1; long long x2; })pixelAspectRatio;
- (struct __CVPixelBufferPool { }*)pixelBufferPool;
- (float)renderScale;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })renderTransform;
- (struct CGSize { double x1; double x2; })size;
- (id)videoComposition;

@end
