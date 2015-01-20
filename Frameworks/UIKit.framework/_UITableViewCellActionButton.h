/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITableViewRowAction, UIVisualEffect;

@interface _UITableViewCellActionButton : UIButton {
    UITableViewRowAction *_action;
    UIVisualEffect *_backgroundEffect;
    unsigned long long _style;
}

@property(retain) UITableViewRowAction * action;
@property(copy) UIVisualEffect * backgroundEffect;
@property unsigned long long style;

+ (id)actionButtonWithStyle:(unsigned long long)arg1;

- (id)action;
- (id)backgroundEffect;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAction:(id)arg1;
- (void)setBackgroundEffect:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)style;

@end
