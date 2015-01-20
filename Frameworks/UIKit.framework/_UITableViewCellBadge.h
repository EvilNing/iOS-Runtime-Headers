/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface _UITableViewCellBadge : UIView {
    struct CGSize { 
        double width; 
        double height; 
    NSString *_text;
    } _textSize;
    bool_isSelected;
}

@property(getter=isSelected) bool selected;
@property(copy) NSString * text;

- (void)_sizeToFit;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHighlighted;
- (bool)isSelected;
- (void)setHighlighted:(bool)arg1;
- (void)setIsSelected:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
