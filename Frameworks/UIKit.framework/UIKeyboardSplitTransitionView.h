/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <UIKeyboardKeyplaneTransitionDelegate>, <UIKeyboardSplitTransitionDataSource>, CADisplayLink, NSArray, UIKeyboardSliceSet;

@interface UIKeyboardSplitTransitionView : UIView {
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
    id _completionBlock;
    double _currentProgress;
    CADisplayLink *_displayLink;
    } _endFrame;
    double _finalTransitionStartTime;
    double _finishDuration;
    double _finishProgress;
    double _liftOffProgress;
    UIKeyboardSliceSet *_sliceSet;
    } _startFrame;
    <UIKeyboardSplitTransitionDataSource> *_transitionDataSource;
    <UIKeyboardKeyplaneTransitionDelegate> *_transitionDelegate;
    bool_centerFilled;
    bool_isRebuilding;
    bool_isSplitTranslation;
}

@property(readonly) NSArray * backgroundLayers;
@property(copy) id completionBlock;
@property(readonly) NSArray * shadowLayers;
@property <UIKeyboardSplitTransitionDataSource> * splitTransitionDataSource;
@property <UIKeyboardKeyplaneTransitionDelegate> * splitTransitionDelegate;

- (id)backgroundLayers;
- (id)bottomDropShadow;
- (bool)canDisplayTransition;
- (id)centerDropShadow;
- (id)colorsForBackgroundLayer:(int)arg1;
- (id)completionBlock;
- (void)dealloc;
- (struct CGImage { }*)defaultKeyboardImage;
- (void)didMoveToWindow;
- (void)finalizeTransition;
- (void)finishWithProgress:(double)arg1 completionBlock:(id)arg2;
- (void)initializeLayers;
- (struct CGImage { }*)keyImageWithToken:(id)arg1;
- (id)outerCenterDropShadow;
- (void)rebuildControlKeys:(int)arg1;
- (void)rebuildFromKeyplane:(id)arg1 toKeyplane:(id)arg2 keyboardType:(long long)arg3 orientation:(long long)arg4;
- (void)rebuildTransitionForSplitStyleChange:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectEnclosingKeyplane:(id)arg1;
- (void)setCompletionBlock:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSplitTransitionDataSource:(id)arg1;
- (void)setSplitTransitionDelegate:(id)arg1;
- (id)shadowLayers;
- (bool)shouldAllowRubberiness;
- (bool)showDictationKey;
- (bool)showIntlKey;
- (struct CGSize { double x1; double x2; })sizeForShadowLayer:(int)arg1;
- (struct CGImage { }*)splitKeyboardImage;
- (id)splitTransitionDataSource;
- (id)splitTransitionDelegate;
- (id)topDropShadow;
- (void)transformForProgress:(double)arg1;
- (bool)transitionIsVisible;
- (void)transitionToFinalState:(id)arg1;
- (void)updateWithProgress:(double)arg1;

@end
