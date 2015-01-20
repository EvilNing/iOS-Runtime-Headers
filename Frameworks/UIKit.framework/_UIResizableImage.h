/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIResizableImage : UIImage {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _capInsets;
    } _subimageInsets;
    bool_alwaysStretches;
    bool_isSubimage;
}

+ (bool)supportsSecureCoding;

- (void)_configureImage:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentInsetsInPixels:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 emptySizeFallback:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentRectInPixels;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentStretchInPixels;
- (bool)_isResizable;
- (bool)_isSubimage;
- (bool)_isTiledWhenStretchedToSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_resizableImageWithCapMask:(int)arg1;
- (void)_setAlwaysStretches:(bool)arg1;
- (void)_setCapInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setSubimageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)_suppressesAccessibilityHairlineThickening;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })capInsets;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1 capInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (bool)isEqual:(id)arg1;
- (long long)resizingMode;

@end
