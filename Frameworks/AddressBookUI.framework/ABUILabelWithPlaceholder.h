/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSString, UIColor, UIFont, UILabel;

@interface ABUILabelWithPlaceholder : UIView {
    NSString *_actualText;
    UIColor *_actualTextColor;
    UILabel *_label;
    NSString *_placeholder;
    bool_isPlaceholderActive;
}

@property UIFont * font;
@property UIColor * highlightedTextColor;
@property(copy) NSString * placeholder;
@property UIColor * shadowColor;
@property struct CGSize { double x1; double x2; } shadowOffset;
@property(copy) NSString * text;
@property(retain) UIColor * textColor;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_labelFrameForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setActualText:(id)arg1;
- (void)_setActualTextColor:(id)arg1;
- (void)dealloc;
- (id)font;
- (id)highlightedTextColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (double)labelLeftEdgeInset;
- (void)layoutSubviews;
- (id)placeholder;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlightedTextColor:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (id)shadowColor;
- (struct CGSize { double x1; double x2; })shadowOffset;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)sizeToFit;
- (id)text;
- (id)textColor;

@end
