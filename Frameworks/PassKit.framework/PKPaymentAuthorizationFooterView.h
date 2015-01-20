/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSLayoutConstraint, NSString, PKGlyphView, PKPaymentAuthorizationLayout, UIButton, UILabel, UIView;

@interface PKPaymentAuthorizationFooterView : UIView {
    PKGlyphView *_glyphView;
    UILabel *_labelView;
    PKPaymentAuthorizationLayout *_layout;
    NSLayoutConstraint *_overallHeightConstraint;
    UILabel *_passbookPaymentDetailsView;
    UIButton *_payWithPasscodeButton;
    NSLayoutConstraint *_payWithPasscodeCenterYConstraint;
    NSLayoutConstraint *_separatorLeftConstraint;
    UIView *_separatorView;
    long long _state;
    NSString *_title;
}

@property PKPaymentAuthorizationLayout * layout;
@property(readonly) UIButton * payWithPasscodeButton;
@property long long state;

- (void)_createSubviews;
- (void)_prepareConstraints;
- (id)_titleLabelAttributedString:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layout;
- (id)payWithPasscodeButton;
- (void)setLayout:(id)arg1;
- (void)setState:(long long)arg1 string:(id)arg2 animated:(bool)arg3;
- (void)setState:(long long)arg1;
- (long long)state;
- (void)updateConstraints;

@end
