/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class <PUMapAnnotationManagerDataSource>, MKMapView, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, PUMapAnnotationQuadtree;

@interface PUMapAnnotationManager : NSObject <PUMapAnnotationQuadtreeDataSource> {
    struct CGSize { 
        double width; 
        double height; 
    struct { 
        struct { 
            double latitude; 
            double longitude; 
        } center; 
        struct { 
            double latitudeDelta; 
            double longitudeDelta; 
        } span; 
    struct CGSize { 
        double width; 
        double height; 
    NSMutableDictionary *_activeAnnotationAddresses;
    NSMutableSet *_activeAnnotations;
    NSMutableSet *_animatedRemoves;
    } _annotationSize;
    } _currentCoordRegion;
    } _currentMapSize;
    unsigned int _currentTreeLevel;
    <PUMapAnnotationManagerDataSource> *_dataSource;
    NSMutableArray *_debugOverlays;
    NSMutableSet *_managedAnnotations;
    MKMapView *_mapView;
    NSMutableSet *_pendingRemoves;
    NSObject<OS_dispatch_queue> *_processingQueue;
    PUMapAnnotationQuadtree *_quadtree;
    int _updateId;
    bool_alwaysFadeRemoves;
    bool_showDebugOverlays;
}

@property bool alwaysFadeRemoves;
@property struct CGSize { double x1; double x2; } annotationSize;
@property(readonly) NSArray * annotations;
@property <PUMapAnnotationManagerDataSource> * dataSource;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) MKMapView * mapView;
@property(readonly) Class superclass;

+ (bool)coordinateRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 overlapsWithCoordinateRegion2:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (void)mergeOverlappingAnnotations:(id)arg1 withQuadtree:(id)arg2 treeLevel:(unsigned int)arg3 coordRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg4 mapSize:(struct CGSize { double x1; double x2; })arg5 annotationSize:(struct CGSize { double x1; double x2; })arg6;
+ (id)newAnnotationsFromQuadtree:(id)arg1 treeLevel:(unsigned int)arg2 coordRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg3 mapSize:(struct CGSize { double x1; double x2; })arg4 updateId:(int)arg5 referenceId:(int*)arg6 annotationSize:(struct CGSize { double x1; double x2; })arg7;

- (void).cxx_destruct;
- (bool)_addMappedAnimationInfoToInfoSet:(id)arg1 forRemoveAnnotation:(id)arg2 remainingRemoveAnnotationsToAnimate:(id)arg3 remainingAddedAnnotationsToAnimate:(id)arg4 addContainsRemoveMap:(id)arg5 removeContainsAddMap:(id)arg6 activeTreeLevel:(unsigned int)arg7 addAddressesToAnnotations:(id)arg8;
- (id)_animatableMapViewAnnotations;
- (void)_executeOnProcessingQueueWithBlock:(id)arg1;
- (long long)_fadeTypeWithIsEqual:(bool)arg1 removeAnnotation:(id)arg2 addAnnotation:(id)arg3 isRemove:(bool)arg4;
- (void)_internalUpdateAnnotationsTreeLevel:(unsigned int)arg1 coordRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2 mapSize:(struct CGSize { double x1; double x2; })arg3 updateId:(int)arg4;
- (id)_puAnnotationViewForAnnotation:(id)arg1;
- (void)_removeAnnotationFromMapView:(id)arg1 wasAnimated:(bool)arg2;
- (void)_updateAnnotationsForMapViewAdjustTreeLevel:(bool)arg1 forceUpdate:(bool)arg2;
- (void)_updateAnnotationsFromQuadtreeWithTreeLevel:(unsigned int)arg1 coordRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2 mapSize:(struct CGSize { double x1; double x2; })arg3 updateId:(int)arg4;
- (void)_updateAnnotationsWithIncomingAnnotationToAddress:(id)arg1;
- (bool)_updateMapParams;
- (bool)_updateTreeLevelFromMap;
- (void)_updateZPositionForAnnotations:(id)arg1 withAnimationInfoSet:(id)arg2;
- (void)addAnnotation:(id)arg1;
- (void)addAnnotations:(id)arg1;
- (bool)alwaysFadeRemoves;
- (struct CGSize { double x1; double x2; })annotationSize;
- (id)annotations;
- (id)dataSource;
- (id)init;
- (id)mapAnnotationQuadtree:(id)arg1 aggregateAnnotationForAnnotations:(id)arg2 averageCoordinate:(struct { double x1; double x2; })arg3;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (id)mapView;
- (void)removeAllMapAnnotations;
- (void)removeAnnotation:(id)arg1;
- (void)removeAnnotations:(id)arg1 thenAddAnnotations:(id)arg2;
- (void)removeAnnotations:(id)arg1;
- (void)setAlwaysFadeRemoves:(bool)arg1;
- (void)setAnnotationSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDataSource:(id)arg1;
- (void)setMapView:(id)arg1;
- (void)updateAnnotationsForMapViewAdjustTreeLevel:(bool)arg1;

@end
