/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class CIColor, UIColor;

@interface UICIColor : UIColor {
    CIColor *_ciColor;
    UIColor *_rgbColor;
}

- (struct CGColor { }*)CGColor;
- (id)CIColor;
- (id)_rgbColor;
- (id)colorWithAlphaComponent:(double)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (bool)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4;
- (bool)getWhite:(double*)arg1 alpha:(double*)arg2;
- (unsigned long long)hash;
- (id)initWithCIColor:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)set;
- (void)setFill;
- (void)setStroke;

@end
