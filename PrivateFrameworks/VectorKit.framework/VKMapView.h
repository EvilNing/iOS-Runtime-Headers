/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class <VKMapViewDelegate>, <VKRoutePreloadSession>, GEOMapRegion, NSArray, VKClassicGlobeCanvas, VKConsoleView, VKLabelMarker, VKMapCanvas, VKPolylineOverlayPainter;

@interface VKMapView : UIView <VKInteractiveMapDelegate, UIGestureRecognizerDelegate> {
    VKMapCanvas *_canvas;
    <VKMapViewDelegate> *_delegate;
    BOOL _geodConnectionOpen;
    VKClassicGlobeCanvas *_globe;
    int _mapType;
}

@property BOOL allowDatelineWraparound;
@property(getter=isAnimatingToTrackAnnotation,readonly) BOOL animatingToTrackAnnotation;
@property Class calloutViewClass;
@property(readonly) BOOL canEnter3DMode;
@property(readonly) BOOL canShowAnimationForPlaceCard;
@property(readonly) BOOL canShowFlyover;
@property struct { double x1; double x2; double x3; } centerCoordinate;
@property(readonly) VKConsoleView * consoleView;
@property BOOL debugDrawContinuously;
@property BOOL debugEnableMultisampling;
@property(readonly) float debugFramesPerSecond;
@property BOOL debugLayoutContinuously;
@property BOOL debugPaintFrameRateGraph;
@property <VKMapViewDelegate> * delegate;
@property BOOL dynamicMapModesEnabled;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } edgeInsets;
@property(readonly) BOOL enableDebugLabelHighlighting;
@property(retain) VKPolylineOverlayPainter * focusedLabelsPolylinePainter;
@property(getter=isFullyDrawn,readonly) BOOL fullyDrawn;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } fullyOccludedEdgeInsets;
@property(getter=isFullyPitched,readonly) BOOL fullyPitched;
@property(getter=isGesturing) BOOL gesturing;
@property BOOL isPitchable;
@property int labelScaleFactor;
@property BOOL localizeLabels;
@property int loupeType;
@property(retain) GEOMapRegion * mapRegion;
@property(readonly) GEOMapRegion * mapRegionOfInterest;
@property int mapType;
@property(readonly) double maximumZoomLevel;
@property(readonly) double minimumZoomLevel;
@property(readonly) double pitch;
@property(getter=isPitched,readonly) BOOL pitched;
@property(readonly) double presentationYaw;
@property BOOL rendersInBackground;
@property(retain) <VKRoutePreloadSession> * routePreloadSession;
@property(readonly) VKLabelMarker * selectedLabelMarker;
@property(getter=isShowingFlyover,readonly) BOOL showingFlyover;
@property BOOL staysCenteredDuringPinch;
@property BOOL staysCenteredDuringRotation;
@property BOOL trackingAutoSelectsZoomScale;
@property double trackingZoomScale;
@property BOOL trafficEnabled;
@property(readonly) NSArray * visibleTileSets;
@property(readonly) double yaw;

+ (id)installedStylesheetNames;

- (void)_createGlobe;
- (void)_enterBackground:(id)arg1;
- (void)_enterForeground:(id)arg1;
- (void)_initializeGlobe;
- (void)_mapkit_configureFromDefaults;
- (void)addAnnotationMarker:(id)arg1 allowAnimation:(BOOL)arg2;
- (void)addOverlay:(id)arg1;
- (void)addPersistentOverlay:(id)arg1;
- (BOOL)allowDatelineWraparound;
- (void)animateCanvasForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)animateToMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(id)arg5;
- (id)annotationCoordinateTest;
- (id)annotationMarkerForSelectionAtPoint:(struct CGPoint { float x1; float x2; })arg1 avoidCurrent:(BOOL)arg2;
- (id)annotationRectTest;
- (id)attributionsForCurrentRegion;
- (BOOL)buildingFootprintsDisabled;
- (id)calloutPopoverController;
- (Class)calloutViewClass;
- (BOOL)canEnter3DMode;
- (BOOL)canShowAnimationForPlaceCard;
- (BOOL)canShowAnimationForSearchResultWithMapRegion:(id)arg1;
- (BOOL)canShowFlyover;
- (struct { double x1; double x2; double x3; })centerCoordinate;
- (void)clearScene;
- (id)consoleView;
- (struct CGPoint { float x1; float x2; })convertCoordinate:(struct { double x1; double x2; })arg1 toCameraModelPointToView:(id)arg2;
- (struct CGPoint { float x1; float x2; })convertCoordinate:(struct { double x1; double x2; })arg1 toPointToView:(id)arg2;
- (struct { double x1; double x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toCoordinateFromView:(id)arg2;
- (id)currentCanvas;
- (void)dealloc;
- (BOOL)debugDrawContinuously;
- (BOOL)debugEnableMultisampling;
- (float)debugFramesPerSecond;
- (void)debugHighlightLabelAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)debugLayoutContinuously;
- (BOOL)debugPaintFrameRateGraph;
- (void)debugRunPerformanceTest;
- (id)delegate;
- (void)deselectAnnotationMarker:(id)arg1 animated:(BOOL)arg2;
- (void)deselectLabelMarkerAnimated:(BOOL)arg1;
- (void)deselectTrafficIncidentAnimated:(BOOL)arg1;
- (id)detailedDescription;
- (void)dismissExpandedCallout;
- (BOOL)dynamicMapModesEnabled;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;
- (BOOL)enableDebugLabelHighlighting;
- (void)enter3DMode;
- (void)exit3DMode;
- (id)focusedLabelsPolylinePainter;
- (void)forceSceneLoad;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })fullyOccludedEdgeInsets;
- (void)goToTileX:(int)arg1 Y:(int)arg2 Z:(int)arg3 tileSize:(int)arg4;
- (id)imageForShieldWithType:(int)arg1 shieldText:(id)arg2 scale:(float)arg3 mode:(int)arg4;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 andGlobe:(BOOL)arg2 shouldRasterize:(BOOL)arg3;
- (BOOL)isAnimatingToTrackAnnotation;
- (BOOL)isFullyDrawn;
- (BOOL)isFullyPitched;
- (BOOL)isGesturing;
- (BOOL)isPitchable;
- (BOOL)isPitched;
- (BOOL)isShowingFlyover;
- (BOOL)isShowingNoDataPlaceholders;
- (id)labelMarkerForSelectionAtPoint:(struct CGPoint { float x1; float x2; })arg1 pointLabelsOnly:(BOOL)arg2;
- (int)labelScaleFactor;
- (BOOL)labelsDisabled;
- (BOOL)localizeLabels;
- (int)loupeType;
- (void)map:(id)arg1 annotationMarker:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)map:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2;
- (void)map:(id)arg1 canShowFlyoverDidChange:(BOOL)arg2;
- (void)map:(id)arg1 didAddAnnotationMarkers:(id)arg2;
- (void)map:(id)arg1 didAnimateInAnnotationMarkers:(id)arg2;
- (void)map:(id)arg1 didBecomePitched:(BOOL)arg2;
- (void)map:(id)arg1 didDeselectAnnotationMarker:(id)arg2;
- (void)map:(id)arg1 didDeselectLabelMarker:(id)arg2;
- (void)map:(id)arg1 didDeselectTrafficIncident:(id)arg2;
- (void)map:(id)arg1 didSelectAnnotationMarker:(id)arg2;
- (void)map:(id)arg1 didUpdateCalloutPopoverController:(id)arg2 forSource:(id)arg3;
- (void)map:(id)arg1 didUpdateCalloutView:(id)arg2 forSource:(id)arg3 animated:(BOOL)arg4;
- (void)map:(id)arg1 labelMarker:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (id)map:(id)arg1 painterForOverlay:(id)arg2;
- (id)map:(id)arg1 presentationForAnnotation:(id)arg2;
- (void)map:(id)arg1 trafficIncident:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)map:(id)arg1 willAnimateInAnnotationMarkers:(id)arg2;
- (void)map:(id)arg1 willSelectLabelMarker:(id)arg2;
- (void)map:(id)arg1 willSelectTrafficIncident:(id)arg2;
- (void)map:(id)arg1 willShowCalloutPopoverController:(id)arg2 forSource:(id)arg3;
- (void)map:(id)arg1 willShowCalloutView:(id)arg2 forSource:(id)arg3;
- (void)mapDidBecomeFullyDrawn:(id)arg1;
- (void)mapDidBecomePartiallyDrawn:(id)arg1;
- (void)mapDidChangeVisibleRegion:(id)arg1;
- (void)mapDidDraw:(id)arg1;
- (void)mapDidFailLoadingTiles:(id)arg1 withError:(id)arg2;
- (void)mapDidFinishLoadingTiles:(id)arg1;
- (void)mapDidStartLoadingTiles:(id)arg1;
- (void)mapDidStopRegionAnimation:(id)arg1 completed:(BOOL)arg2;
- (id)mapMatcherOfType:(id)arg1;
- (id)mapRegion;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })mapRegionBounds;
- (id)mapRegionOfInterest;
- (int)mapType;
- (void)mapWillStartRegionAnimation:(id)arg1;
- (double)maximumZoomLevel;
- (double)minimumZoomLevel;
- (double)pitch;
- (BOOL)polygonsDisabled;
- (void)preloadNavigationSceneResources;
- (void)preparePlaceCardAnimationForLocation:(struct { double x1; double x2; })arg1 completion:(id)arg2;
- (double)presentationYaw;
- (void)puckAnimator:(id)arg1 updatedPosition:(struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; double x2; BOOL x3; }*)arg2;
- (void)puckAnimator:(id)arg1 updatedTargetPosition:(struct { double x1; double x2; double x3; })arg2;
- (void)puckAnimatorDidStop:(id)arg1;
- (BOOL)rastersDisabled;
- (BOOL)realisticLandDisabled;
- (BOOL)realisticRoadsDisabled;
- (void)removeAnnotationMarker:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (void)removePersistentOverlay:(id)arg1;
- (BOOL)rendersInBackground;
- (BOOL)restoreViewportFromInfo:(id)arg1;
- (BOOL)roadClassDisabled:(int)arg1;
- (BOOL)roadsDisabled;
- (id)routePreloadSession;
- (void)selectAnnotationMarker:(id)arg1 animated:(BOOL)arg2 avoid:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)selectLabelMarker:(id)arg1 animated:(BOOL)arg2 avoid:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)selectTrafficIncident:(id)arg1 animated:(BOOL)arg2 avoid:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (id)selectedLabelMarker;
- (id)selectedTrafficIncident;
- (void)setAllowDatelineWraparound:(BOOL)arg1;
- (void)setAnnotationMarkerDeselectionCallback:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCalloutViewClass:(Class)arg1;
- (void)setCanonicalSkyHeight:(double)arg1;
- (void)setCenterCoordinate:(struct { double x1; double x2; double x3; })arg1 animated:(BOOL)arg2;
- (void)setCenterCoordinate:(struct { double x1; double x2; double x3; })arg1;
- (void)setCurrentLocationText:(id)arg1;
- (void)setDebugDrawContinuously:(BOOL)arg1;
- (void)setDebugEnableMultisampling:(BOOL)arg1;
- (void)setDebugLayoutContinuously:(BOOL)arg1;
- (void)setDebugPaintFrameRateGraph:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDesiredMapMode:(int)arg1 immediate:(BOOL)arg2;
- (void)setDisableBuildingFootprints:(BOOL)arg1;
- (void)setDisableLabels:(BOOL)arg1;
- (void)setDisablePolygons:(BOOL)arg1;
- (void)setDisableRasters:(BOOL)arg1;
- (void)setDisableRealisticLand:(BOOL)arg1;
- (void)setDisableRealisticRoads:(BOOL)arg1;
- (void)setDisableRoadClass:(BOOL)arg1 forRoadClass:(int)arg2;
- (void)setDisableRoads:(BOOL)arg1;
- (void)setDynamicMapModesEnabled:(BOOL)arg1;
- (void)setEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setEnabledBlackRoadLines:(BOOL)arg1;
- (void)setFocusedLabelsPolylinePainter:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFullyOccludedEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setGesturing:(BOOL)arg1;
- (void)setIsPitchable:(BOOL)arg1;
- (void)setLabelScaleFactor:(int)arg1;
- (void)setLocalizeLabels:(BOOL)arg1;
- (void)setLoupeType:(int)arg1;
- (void)setMapRegion:(id)arg1 animated:(BOOL)arg2;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(BOOL)arg4 completion:(id)arg5;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(BOOL)arg4;
- (void)setMapRegion:(id)arg1;
- (void)setMapType:(int)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsLayout;
- (void)setRendersInBackground:(BOOL)arg1;
- (void)setRouteLineSplitAnnotation:(id)arg1;
- (void)setRoutePreloadSession:(id)arg1;
- (void)setRouteUserOffset:(struct { unsigned int x1; float x2; })arg1;
- (void)setShouldLimitTrackingCameraHeight:(BOOL)arg1;
- (void)setStaysCenteredDuringPinch:(BOOL)arg1;
- (void)setStaysCenteredDuringRotation:(BOOL)arg1;
- (void)setStylesheet:(id)arg1;
- (void)setStylesheetName:(id)arg1;
- (void)setTracePlaybackSpeedMultiplier:(double)arg1;
- (void)setTrackingAutoSelectsZoomScale:(BOOL)arg1;
- (void)setTrackingZoomScale:(double)arg1;
- (void)setTrafficEnabled:(BOOL)arg1;
- (void)setYaw:(double)arg1 animated:(BOOL)arg2;
- (void)showSearchResultAnimationAtCoordinate:(struct { double x1; double x2; })arg1 withMapRegion:(id)arg2;
- (id)snapshotImage;
- (void)startPanningAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)startPinchingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)startPitchingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)startPlaceCardAnimationAtCoordinate:(struct { double x1; double x2; })arg1 andDistance:(double)arg2;
- (void)startRotatingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(BOOL)arg2 animated:(BOOL)arg3;
- (BOOL)staysCenteredDuringPinch;
- (BOOL)staysCenteredDuringRotation;
- (void)stopPanningAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)stopPinchingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)stopPitchingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)stopPlaceCardAnimation;
- (void)stopRotatingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)stopScenicAnimation;
- (void)stopSnappingAnimations;
- (void)stopTracking;
- (void)stopTrackingAnnotation;
- (id)stylesheet;
- (id)stylesheetName;
- (BOOL)supportsMapType:(int)arg1;
- (BOOL)trackingAutoSelectsZoomScale;
- (double)trackingZoomScale;
- (BOOL)trafficEnabled;
- (id)trafficIncidentForSelectionAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)transitionToTracking:(BOOL)arg1 mapMode:(int)arg2 pounceCompletionHandler:(id)arg3;
- (void)updatePanWithTranslation:(struct CGPoint { float x1; float x2; })arg1;
- (void)updatePinchWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)updatePitchWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1 translation:(double)arg2;
- (void)updateRotationWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1 newValue:(double)arg2;
- (void)updateTrackingForPointOfReference:(struct { double x1; double x2; })arg1 referenceHeading:(double)arg2 pointOfFocus:(struct { double x1; double x2; })arg3 pointsOfInterest:(id)arg4 viewStyle:(int)arg5 focusStyle:(int)arg6 animated:(BOOL)arg7;
- (id)viewportInfo;
- (id)visibleTileSets;
- (BOOL)writeVisibleTrafficTilesToDirectory:(id)arg1 error:(id*)arg2;
- (double)yaw;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint { float x1; float x2; })arg2 completionHandler:(id)arg3;

@end
