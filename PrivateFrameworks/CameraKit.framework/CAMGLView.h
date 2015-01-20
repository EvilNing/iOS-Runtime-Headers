/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CAEAGLLayer, EAGLContext, PLGLLayerDelegate;

@interface CAMGLView : UIView {
    struct CGSize { 
        double width; 
        double height; 
    EAGLContext *__atomicContext;
    } __atomicFixedSize;
    long long _drawableHeight;
    long long _drawableWidth;
    unsigned int _framebuffer;
    CAEAGLLayer *_glLayer;
    PLGLLayerDelegate *_glLayerDelegate;
    id _renderNotifyBlock;
    unsigned int _renderbuffer;
    bool__atomicRetainedBacking;
    bool__disableLayoutForGLLayerInternal;
    bool__shouldDeleteFramebuffer;
    bool_disableLayoutForGLLayer;
}

@property(setter=_setAtomicContext:,retain) EAGLContext * _atomicContext;
@property(setter=_setAtomicFixedSize:) struct CGSize { double x1; double x2; } _atomicFixedSize;
@property(setter=_setAtomicRetainedBacking:) bool _atomicRetainedBacking;
@property(getter=_isDisabledLayoutForGLLayerInternal,setter=_setDisableLayoutForGLLayerInternal:) bool _disableLayoutForGLLayerInternal;
@property(setter=_setShouldDeleteFramebuffer:) bool _shouldDeleteFramebuffer;
@property(retain) EAGLContext * context;
@property(getter=isDisabledLayoutForGLLayer) bool disableLayoutForGLLayer;
@property long long drawableHeight;
@property long long drawableWidth;
@property struct CGSize { double x1; double x2; } fixedSize;
@property(retain,readonly) CAEAGLLayer * glLayer;
@property(copy) id renderNotifyBlock;
@property bool retainedBacking;

- (void).cxx_destruct;
- (id)_atomicContext;
- (struct CGSize { double x1; double x2; })_atomicFixedSize;
- (bool)_atomicRetainedBacking;
- (void)_configureLayer;
- (void)_createFramebufferInContext:(id)arg1;
- (void)_deleteFramebufferInContext:(id)arg1;
- (void)_handleRenderNotifyBlock;
- (bool)_isDisabledLayoutForGLLayerInternal;
- (void)_layoutGLLayer;
- (void)_setAtomicContext:(id)arg1;
- (void)_setAtomicFixedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setAtomicRetainedBacking:(bool)arg1;
- (void)_setDisableLayoutForGLLayerInternal:(bool)arg1;
- (bool)_setFramebuffer:(bool*)arg1 context:(id)arg2;
- (void)_setShouldDeleteFramebuffer:(bool)arg1;
- (bool)_shouldDeleteFramebuffer;
- (id)context;
- (void)dealloc;
- (long long)drawableHeight;
- (long long)drawableWidth;
- (struct CGSize { double x1; double x2; })fixedSize;
- (void)forceDestroyGLResources;
- (id)glLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDisabledLayoutForGLLayer;
- (void)layoutSubviews;
- (id)renderNotifyBlock;
- (void)renderPixelBuffer:(struct __CVBuffer { }*)arg1 ciContext:(id)arg2 mirrorRendering:(bool)arg3;
- (void)renderWithBlock:(id)arg1;
- (bool)retainedBacking;
- (void)setContentMode:(long long)arg1;
- (void)setContentScaleFactor:(double)arg1;
- (void)setContext:(id)arg1;
- (void)setDisableLayoutForGLLayer:(bool)arg1;
- (void)setDrawableHeight:(long long)arg1;
- (void)setDrawableWidth:(long long)arg1;
- (void)setFixedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRenderNotifyBlock:(id)arg1;
- (void)setRetainedBacking:(bool)arg1;

@end
