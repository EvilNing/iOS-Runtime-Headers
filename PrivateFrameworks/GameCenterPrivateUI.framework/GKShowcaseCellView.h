/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class GKHairlineView, UICollectionViewCell;

@interface GKShowcaseCellView : UICollectionReusableView {
    UICollectionViewCell *_cell;
    SEL _touchedShowcaseCellAction;
    GKHairlineView *_underlineView;
}

@property(retain) UICollectionViewCell * cell;
@property SEL touchedShowcaseCellAction;
@property(retain) GKHairlineView * underlineView;

+ (bool)requiresConstraintBasedLayout;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentRectForText;
- (id)cell;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)setCell:(id)arg1;
- (void)setTouchedShowcaseCellAction:(SEL)arg1;
- (void)setUnderlineView:(id)arg1;
- (SEL)touchedShowcaseCellAction;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)underlineView;

@end
