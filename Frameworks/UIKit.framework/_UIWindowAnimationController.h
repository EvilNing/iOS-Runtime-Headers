/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIWindow;

@interface _UIWindowAnimationController : NSObject <UIViewControllerAnimatedTransitioning> {
    UIWindow *_window;
    bool_shouldCrossfade;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property bool shouldCrossfade;
@property(readonly) Class superclass;
@property UIWindow * window;

+ (id)animationControllerWithWindow:(id)arg1;

- (void)_performCrossfadeAnimationWithContext:(id)arg1 windowGeometryUpdatingBlock:(id)arg2;
- (void)_performLayoutAnimationWithContext:(id)arg1 windowGeometryUpdatingBlock:(id)arg2;
- (void)animateTransition:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (void)setShouldCrossfade:(bool)arg1;
- (void)setWindow:(id)arg1;
- (bool)shouldCrossfade;
- (double)transitionDuration:(id)arg1;
- (id)window;

@end
