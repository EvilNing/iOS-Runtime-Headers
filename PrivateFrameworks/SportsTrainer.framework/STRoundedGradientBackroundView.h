/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsTrainer.framework/SportsTrainer
 */

@class UIColor, UIGradient;

@interface STRoundedGradientBackroundView : UIView {
    UIColor *_borderColor;
    UIColor *_bottomColor;
    UIGradient *_gradient;
    UIColor *_topColor;
}

@property(retain) UIColor * borderColor;
@property(retain) UIColor * bottomColor;
@property(retain) UIColor * topColor;

- (id)_gradient;
- (void)_invalidateGradient;
- (id)borderColor;
- (id)bottomColor;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBorderColor:(id)arg1;
- (void)setBottomColor:(id)arg1;
- (void)setTopColor:(id)arg1;
- (id)topColor;

@end
