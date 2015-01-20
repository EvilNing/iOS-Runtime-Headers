/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@class NSString, UIFont, UIImage;

@interface AXGradientLabel : UIView {
    UIFont *_font;
    UIImage *_gradient;
    struct CGColor { } *_patternColor;
    NSString *_text;
}

@property(retain) UIFont * font;
@property(retain) UIImage * gradient;
@property(retain) NSString * text;

- (struct CGColor { }*)_patternColor;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)font;
- (id)gradient;
- (void)setFont:(id)arg1;
- (void)setGradient:(id)arg1;
- (void)setText:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)text;

@end
