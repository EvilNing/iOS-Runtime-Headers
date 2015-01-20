/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class NSArray, NSSet;

@interface GKBubbleLayout : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    NSArray *_bubbleLocations;
    NSArray *_bubbleViews;
    } _center;
    double _radius;
    NSSet *_visibleBubbleSet;
}

@property(retain) NSArray * bubbleLocations;
@property(retain) NSArray * bubbleViews;
@property struct CGPoint { double x1; double x2; } center;
@property double radius;
@property(retain) NSSet * visibleBubbleSet;

- (id)bubbleLocations;
- (id)bubbleViews;
- (struct CGPoint { double x1; double x2; })center;
- (void)dealloc;
- (void)performLayout;
- (double)radius;
- (void)setBubbleLocations:(id)arg1;
- (void)setBubbleViews:(id)arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRadius:(double)arg1;
- (void)setVisibleBubbleSet:(id)arg1;
- (void)showBubble:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 atAngle:(double)arg3;
- (id)visibleBubbleSet;

@end
