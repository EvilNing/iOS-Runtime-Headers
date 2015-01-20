/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <VKTrackingCameraControllerDelegate>, VKAnimation, VKCameraContext, VKMapCanvas, VKMapModel;

@interface VKTrackingCameraController : VKCameraController {
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    struct { 
        struct VKPoint { 
            double x; 
            double y; 
            double z; 
        } position; 
        double course; 
        boolonRoute; 
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    struct VKEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    struct VKNavigationCameraModel { 
        double _halfVerticalFov; 
        double _horizontalFov; 
        double _tanHalfHorizontalFov; 
        double _courseOverride; 
        struct SpringDamper { 
            double _position; 
            double _velocity; 
            double _acceleration; 
            double _kSpring; 
            double _kDamper; 
            double _restingPosition; 
            bool_directionIsPositive; 
        } _pitchSpring; 
        struct AngularSpringDamper { 
            double _position; 
            double _velocity; 
            double _acceleration; 
            double _kSpring; 
            double _kDamper; 
            double _restingPosition; 
            bool_directionIsPositive; 
        } _courseSpring; 
        struct SpringDamper { 
            double _position; 
            double _velocity; 
            double _acceleration; 
            double _kSpring; 
            double _kDamper; 
            double _restingPosition; 
            bool_directionIsPositive; 
        } _referenceScreenOffsetSpring; 
        struct SpringDamper { 
            double _position; 
            double _velocity; 
            double _acceleration; 
            double _kSpring; 
            double _kDamper; 
            double _restingPosition; 
            bool_directionIsPositive; 
        } _boomLengthSpring; 
        struct State { 
            double _course; 
            double _referenceScreenOffset; 
            double _pitch; 
            double _boomLength; 
        } _targetState; 
        double _previousUpdateTime; 
    struct State { 
        struct State { 
            double _course; 
            double _referenceScreenOffset; 
            double _pitch; 
            double _boomLength; 
        } modelState; 
        struct VKPoint { 
            double x; 
            double y; 
            double z; 
        } puckPosition; 
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    struct CGPoint { 
        double x; 
        double y; 
    struct fast_shared_ptr<vk::RouteLineSection> { 
        struct _fast_shared_ptr_control {} *_control; 
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    VKAnimation *_animation;
    } _cameraModel;
    id _completionHandler;
    double _cruiseHeight;
    double _cruiseHeightOverride;
    double _cruisePhi;
    double _cruisePhiOverride;
    long long _desiredMapMode;
    double _endZoomScale;
    } _farthestPoi;
    int _focusStyle;
    float _halfPuckSize;
    } _insets;
    VKCameraContext *_lastCameraContext;
    } _lastRouteLinePanPuckPosition;
    VKMapCanvas *_mapCanvas;
    double _mapModeTransitionZoomScale;
    VKMapModel *_mapModel;
    } _matchedIndex;
    } _matchedSection;
    double _maxBoomLength;
    double _maxDistanceScale;
    VKAnimation *_panAnimation;
    double _panBoomLength;
    } _panCameraOffset;
    double _panCourseOffset;
    int _panDirection;
    double _panPitch;
    double _panReturnStartTime;
    double _panRouteOffset;
    double _panStartBoomLength;
    } _panStartCameraState;
    double _panStartPitch;
    int _panStyle;
    VKAnimation *_pitchAnimation;
    double _pitchOffset;
    double _previousCourse;
    double _previousOffset;
    } _previousReference;
    double _previousStepTime;
    double _puckOffset;
    double _puckOffsetDelta;
    } _puckPosition;
    } _puckTargetPosition;
    struct VKCircularBuffer<double> { struct vector<double, std::__1::allocator<double> > { double *x_1_1_1; double *x_1_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_1_1_3; } x1; unsigned long long x2; boolx3; double x4; } *_rotationRateBuffer;
    double _startCourse;
    double _startDistance;
    } _startPanPoint;
    double _startPinchScale;
    double _startPitch;
    } _startPuckScreenPosition;
    double _startTime;
    double _startZoomScale;
    VKAnimation *_tapZoomAnimation;
    double _tracePlaybackSpeedMultiplier;
    <VKTrackingCameraControllerDelegate> *_trackingDelegate;
    double _userZoomFocusStyleMaxZoomScale;
    double _userZoomFocusStyleMinZoomScale;
    double _userZoomFocusStyleZoomScale;
    double _verticalGroundspan;
    double _verticalGroundspanScale;
    int _viewStyle;
    double _zoomScale;
    VKAnimation *_zoomScaleAnimation;
    bool_animatingIn;
    bool_canZoomIn;
    bool_canZoomOut;
    bool_insetsAnimating;
    bool_panning;
    bool_pitching;
    bool_puckAnimatorRunning;
    bool_receivedFirstUpdate;
    bool_shouldAllowMapModeTransition;
    bool_shouldLimitTopDownHeight;
    bool_successfullyStartedRouteLinePan;
    bool_zooming;
}

@property(readonly) bool canZoomIn;
@property(readonly) bool canZoomOut;
@property VKMapCanvas * mapCanvas;
@property(retain) VKMapModel * mapModel;
@property int panStyle;
@property float puckSize;
@property bool shouldLimitTopDownHeight;
@property double tracePlaybackSpeedMultiplier;
@property <VKTrackingCameraControllerDelegate> * trackingDelegate;
@property double userZoomFocusStyleGroundspanMeters;
@property double userZoomFocusStyleMaxGroundspanMeters;
@property double userZoomFocusStyleMinGroundspanMeters;
@property double verticalGroundspanScale;
@property double zoomScale;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_handleZoomChanged;
- (void)_resumeAnimationIfNecessary;
- (void)_startTapZoomAnimationFrom:(double)arg1 to:(double)arg2 completionHandler:(id)arg3;
- (void)_step;
- (void)_updateCameraForStartAnimation:(double)arg1 position:(struct VKPoint { double x1; double x2; double x3; })arg2 orientation:(const struct { double x1[4][4]; }*)arg3;
- (void)_updateCruiseHeightAndPhi;
- (void)_updateVerticalGroundspanForCameraContext:(id)arg1 reference:(struct VKPoint { double x1; double x2; double x3; })arg2 focus:(struct VKPoint { double x1; double x2; double x3; })arg3 offset:(double)arg4;
- (bool)canZoomIn;
- (bool)canZoomOut;
- (void)canvasFrameDidChange;
- (void)dealloc;
- (id)detailedDescription;
- (void)edgeInsetsDidEndAnimating;
- (void)edgeInsetsWillBeginAnimating;
- (id)init;
- (bool)isAtDefaultZoomScale;
- (bool)isGesturing;
- (id)mapCanvas;
- (id)mapModel;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pan:(struct CGPoint { double x1; double x2; })arg1 worldDelta:(const struct Matrix<double, 3, 1> { double x1[3]; }*)arg2;
- (int)panStyle;
- (void)pauseIfNeeded;
- (void)puckAnimator:(id)arg1 updatedPosition:(struct { struct VKPoint { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; double x2; boolx3; }*)arg2;
- (void)puckAnimator:(id)arg1 updatedTargetPosition:(struct VKPoint { double x1; double x2; double x3; })arg2;
- (void)puckAnimatorDidStop:(id)arg1;
- (float)puckSize;
- (double)relavantMaxZoomScale;
- (double)relavantMinZoomScale;
- (double)relevantZoomScale;
- (void)resumeIfNeeded;
- (void)setCanZoomIn:(bool)arg1;
- (void)setCanZoomOut:(bool)arg1;
- (void)setEdgeInsets:(struct VKEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setGesturing:(bool)arg1;
- (void)setMapCanvas:(id)arg1;
- (void)setMapModeTransitionZoomScale:(double)arg1;
- (void)setMapModel:(id)arg1;
- (void)setPanStyle:(int)arg1;
- (void)setPuckSize:(float)arg1;
- (void)setRelevantZoomScale:(double)arg1;
- (void)setShouldLimitTopDownHeight:(bool)arg1;
- (void)setTracePlaybackSpeedMultiplier:(double)arg1;
- (void)setTrackingDelegate:(id)arg1;
- (void)setUserZoomFocusStyleGroundspanMeters:(double)arg1;
- (void)setUserZoomFocusStyleMaxGroundspanMeters:(double)arg1;
- (void)setUserZoomFocusStyleMinGroundspanMeters:(double)arg1;
- (void)setUserZoomFocusStyleZoomScale:(double)arg1;
- (void)setVerticalGroundspanScale:(double)arg1;
- (void)setZoomScale:(double)arg1;
- (void)setZoomStyle:(int)arg1;
- (bool)shouldLimitTopDownHeight;
- (void)startPanning:(struct CGPoint { double x1; double x2; })arg1;
- (void)startPinchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startPitchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startWithPounce:(bool)arg1 pounceCompletionHandler:(id)arg2;
- (void)stop;
- (void)stopPanning:(struct CGPoint { double x1; double x2; })arg1;
- (void)stopPinchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)stopPitchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (double)tracePlaybackSpeedMultiplier;
- (id)trackingDelegate;
- (void)updateCameraContext:(id)arg1;
- (void)updatePinchWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)updatePitchWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1 translation:(double)arg2;
- (void)updatedMatchedSection:(struct fast_shared_ptr<vk::RouteLineSection> { struct _fast_shared_ptr_control {} *x1; })arg1 index:(struct PolylineCoordinate { unsigned int x1; float x2; }*)arg2;
- (double)userZoomFocusStyleGroundspanMeters;
- (double)userZoomFocusStyleMaxGroundspanMeters;
- (double)userZoomFocusStyleMinGroundspanMeters;
- (double)verticalGroundspanScale;
- (void)zoom:(double)arg1 relativeToPoint:(struct CGPoint { double x1; double x2; })arg2 completionHandler:(id)arg3;
- (double)zoomScale;

@end
