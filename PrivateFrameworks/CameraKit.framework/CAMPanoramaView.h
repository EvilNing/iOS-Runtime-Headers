/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class <PLCameraPanoramaViewDelegate>, CADisplayLink, CALayer, CAMPanoramaArrowView, CAMPanoramaLabel, CAMPanoramaLevelView, CMMotionManager, NSOperationQueue, NSString, UIImageView, UIView;

@interface CAMPanoramaView : UIView <UIAccelerometerDelegate> {
    struct CGPoint { 
        double x; 
        double y; 
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
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    NSOperationQueue *_accelerometerQueue;
    CAMPanoramaArrowView *_arrowView;
    } _arrowViewBeginCenter;
    float _currentAcceleration;
    } _currentArrowFrame;
    } _currentMaskFrame;
    double _currentSpeed;
    long long _deferredDeviceOrientation;
    <PLCameraPanoramaViewDelegate> *_delegate;
    long long _deviceOrientation;
    int _direction;
    CADisplayLink *_displayLink;
    long long _frameCounter;
    float _initialAcceleration;
    } _initialArrowFrame;
    } _initialMaskFrame;
    CAMPanoramaLabel *_instructionalText;
    UIView *_instructionalTextBackground;
    CAMPanoramaLevelView *_levelView;
    CMMotionManager *_motionManager;
    UIImageView *_previewBackgroundImageView;
    UIView *_previewContainer;
    UIImageView *_previewGhostImageView;
    CALayer *_previewLayer;
    UIView *_previewMaskingContainer;
    float _previewScale;
    } _visiblePreviewRect;
    bool_ignorePreviewUpdates;
    bool_isAnimatingDirection;
    bool_isAnimatingTextIn;
    bool_isAnimatingTextOut;
    bool_isCapturing;
    bool_isProcessing;
    bool_showingFastText;
    bool_showingMoveText;
}

@property(copy,readonly) NSString * debugDescription;
@property <PLCameraPanoramaViewDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) CALayer * panoramaPreviewLayer;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_arrowWasTapped:(id)arg1;
- (void)_cancelDelayedShowMoveText;
- (void)_createMotionManagerAndDisplayLink;
- (double)_ghostWidth;
- (void)_hideText;
- (void)_showMoveDownText;
- (void)_showMoveUpText;
- (void)_updateInstructionalText:(id)arg1;
- (void)_updateInstructionalTextBackground;
- (void)dealloc;
- (id)delegate;
- (void)hideArrowTextAfterDelay;
- (void)hideFastMovementTextAfterDelay;
- (void)hideInstructionalText;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 centerYOffset:(double)arg2 panoramaPreviewScale:(float)arg3;
- (id)panoramaPreviewLayer;
- (void)panoramaWillStart;
- (void)setCaptureDirection:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceOrientation:(long long)arg1;
- (void)setMaskingContainerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 direction:(int)arg2;
- (void)showFastMovementText;
- (void)showMoveDownText;
- (void)showMoveDownTextAfterDelay;
- (void)showMoveUpText;
- (void)showMoveUpTextAfterDelay;
- (void)showSavingHUD:(bool)arg1;
- (void)updateToContentSize:(id)arg1;
- (void)updateUI;
- (void)updateWithParameters:(id)arg1;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visiblePreviewRect;

@end
