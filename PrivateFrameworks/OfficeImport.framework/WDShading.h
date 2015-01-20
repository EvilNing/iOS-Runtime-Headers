/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OITSUColor;

@interface WDShading : NSObject <NSCopying> {
    OITSUColor *mBackgroundColor;
    OITSUColor *mForegroundColor;
    int mStyle;
}

+ (id)autoBackgroundColor;
+ (id)autoForegroundColor;
+ (id)nullShading;

- (id)background;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)foreground;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToShading:(id)arg1;
- (void)setBackground:(id)arg1;
- (void)setForeground:(id)arg1;
- (void)setShading:(id)arg1;
- (void)setStyle:(int)arg1;
- (int)style;

@end
