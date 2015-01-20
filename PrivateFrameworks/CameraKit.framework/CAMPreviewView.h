/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class CAMCaptureController, CAMExposureBiasSlider, CAMFocusAttachmentView, CAMFocusLockAttachmentView, CAMFocusLockView, CAMFocusPointView, CAMFocusSplitAttachmentView, CAMFocusView, CAMVideoPreviewView, NSMutableDictionary, UIView;

@interface CAMPreviewView : UIView {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    unsigned int _canShowFocus : 1;
    unsigned int _controlsAreVisible : 1;
    int __exposureBiasSide;
    CAMCaptureController *__sharedCameraController;
    CAMFocusView *_continuousAutoFocusView;
    double _dimmingStrength;
    UIView *_dimmingView;
    CAMFocusAttachmentView *_dismissFocusAttachment;
    float _exposureBiasMax;
    float _exposureBiasMin;
    CAMExposureBiasSlider *_exposureBiasSlider;
    float _exposureBiasValue;
    CAMFocusPointView *_exposureView;
    NSMutableDictionary *_faceIDsToViews;
    UIView *_facesContainerView;
    UIView *_focusContainerView;
    CAMFocusPointView *_focusView;
    } _lastExposureFrame;
    } _lastFocusFrame;
    CAMFocusLockAttachmentView *_lockFocusAttachment;
    CAMFocusLockView *_lockFocusView;
    UIView *_maskingContainerView;
    UIView *_previewContainer;
    CAMFocusSplitAttachmentView *_splitFocusAndExposureAttachment;
    CAMVideoPreviewView *_videoPreviewView;
    bool__showExposureBiasSlider;
    bool_hideExposureBiasSlider;
    bool_showExposureBiasSliderOnChange;
    bool_showLockFocusAttachment;
    bool_showSplitFocusAndExposureAttachment;
    bool_splitFocusAndExposure;
    bool_square;
}

@property(readonly) int _exposureBiasSide;
@property CAMCaptureController * _sharedCameraController;
@property(setter=_setShowExposureBiasSlider:) bool _showExposureBiasSlider;
@property double dimmingStrength;
@property float exposureBiasMax;
@property float exposureBiasMin;
@property float exposureBiasValue;
@property bool hideExposureBiasSlider;
@property(readonly) double lastExposureFadeOutTime;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } lastExposureFrame;
@property(readonly) double lastFocusFadeOutTime;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } lastFocusFrame;
@property bool showExposureBiasSliderOnChange;
@property bool showLockFocusAttachment;
@property bool showSplitFocusAndExposureAttachment;
@property bool splitFocusAndExposure;
@property(getter=isSquare) bool square;
@property(retain,readonly) CAMVideoPreviewView * videoPreviewView;

- (void).cxx_destruct;
- (bool)_allowDismissFocusAttachment;
- (bool)_allowFocusLockAttachments;
- (bool)_allowSplitFocusAndExposure;
- (void)_attachAttachment:(id)arg1 toFocusView:(id)arg2 position:(int)arg3;
- (void)_createExposureBiasSlider;
- (void)_createFocusViewIfNeeded;
- (bool)_enableExposureBias;
- (int)_exposureBiasSide;
- (void)_layoutExposureBiasSlider;
- (void)_setExposureBiasSliderAlpha:(double)arg1 animationDuration:(double)arg2;
- (void)_setShowExposureBiasSlider:(bool)arg1;
- (id)_sharedCameraController;
- (bool)_shouldDismissFocusViewsOnFocusDidEnd;
- (bool)_shouldVendAttachment:(id)arg1;
- (bool)_showExposureBiasSlider;
- (void)_showFocusAtPoint:(struct CGPoint { double x1; double x2; })arg1 startAnimating:(bool)arg2;
- (void)_updateExposureFrameForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_updateFocusFrameForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_updateLockFocusAttachment;
- (void)_updateSplitFocusAndExposureAttachment;
- (void)animateFocusLock;
- (void)animateFocusLockScaleDown;
- (struct CGPoint { double x1; double x2; })currentExposurePoint;
- (struct CGPoint { double x1; double x2; })currentFocusPoint;
- (double)dimmingStrength;
- (id)dismissFocusAttachment;
- (void)dismissFocusViews;
- (float)exposureBiasMax;
- (float)exposureBiasMin;
- (id)exposureBiasSlider;
- (float)exposureBiasValue;
- (id)exposurePointView;
- (void)fadeOutFaceTrackingViews;
- (void)focusDidEnd;
- (id)focusPointView;
- (bool)hideExposureBiasSlider;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isSquare;
- (double)lastExposureFadeOutTime;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })lastExposureFrame;
- (double)lastFocusFadeOutTime;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })lastFocusFrame;
- (id)lockFocusAttachment;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (void)removeAllFocusViewsLeavingActivePointViews:(bool)arg1;
- (void)removeContinuousAutoFocusView;
- (void)resetFocusViewFadeOutSuspensions;
- (void)resumeFocusViewFadeOutResetPending:(bool)arg1;
- (void)setControlsAreVisible:(bool)arg1;
- (void)setDimmingStrength:(double)arg1 duration:(double)arg2;
- (void)setDimmingStrength:(double)arg1;
- (void)setExposureBiasMax:(float)arg1;
- (void)setExposureBiasMin:(float)arg1;
- (void)setExposureBiasSide:(int)arg1 animated:(bool)arg2;
- (void)setExposureBiasValue:(float)arg1;
- (void)setFocusViewsHidden:(bool)arg1 animated:(bool)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHideExposureBiasSlider:(bool)arg1;
- (void)setShouldShowFocus:(bool)arg1;
- (void)setShowExposureBiasSliderOnChange:(bool)arg1;
- (void)setShowLockFocusAttachment:(bool)arg1;
- (void)setShowSplitFocusAndExposureAttachment:(bool)arg1;
- (void)setSplitFocusAndExposure:(bool)arg1;
- (void)setSquare:(bool)arg1 animated:(bool)arg2;
- (void)setSquare:(bool)arg1;
- (void)set_sharedCameraController:(id)arg1;
- (void)showContinuousAutoFocusView;
- (bool)showExposureBiasSliderOnChange;
- (void)showFaceTrackingViewsForFaces:(id)arg1;
- (void)showFocusAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)showLockFocusAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)showLockFocusAttachment;
- (bool)showSplitFocusAndExposureAttachment;
- (bool)splitFocusAndExposure;
- (id)splitFocusAndExposureAttachment;
- (void)suspendFocusViewFadeOut;
- (void)updateExposurePoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateFocusViewsLastInteractionTime;
- (id)videoPreviewView;

@end
