/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class GEOMapRegion, NSMutableSet, NSSet, NSString, VKPolylineOverlay;

@interface VKPolylineGroupOverlay : NSObject <VKOverlay> {
    GEOMapRegion *_boundingMapRegion;
    struct __CFSet { } *_observers;
    NSMutableSet *_polylines;
    VKPolylineOverlay *_selectedPolyline;
}

@property(readonly) GEOMapRegion * boundingMapRegion;
@property(readonly) struct { double x1; double x2; } coordinate;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) NSSet * polylines;
@property(retain) VKPolylineOverlay * selectedPolyline;
@property(readonly) Class superclass;

- (void)_updateBoundingMapRegion;
- (void)addObserver:(id)arg1;
- (void)addPolyline:(id)arg1;
- (id)boundingMapRegion;
- (struct { double x1; double x2; })coordinate;
- (void)dealloc;
- (id)polylines;
- (void)removeObserver:(id)arg1;
- (void)removePolyline:(id)arg1;
- (id)selectedPolyline;
- (void)setSelectedPolyline:(id)arg1;

@end
