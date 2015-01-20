/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class GEOPDFlyover, MKMapView, UITapGestureRecognizer;

@interface MKPlaceHeaderBackgroundView_Flyover : MKPlaceHeaderBackgroundView {
    GEOPDFlyover *_flyover;
    UITapGestureRecognizer *_interactionTapRecognizer;
    MKMapView *_mapView;
    bool_animationPaused;
}

- (void).cxx_destruct;
- (void)_pauseTour;
- (id)flyover;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 mapItem:(id)arg2;
- (id)mapView;
- (void)pause;
- (void)prepareForPresentation;
- (void)present;
- (void)reset;
- (void)resume;
- (void)setFlyover:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMapView:(id)arg1;

@end
