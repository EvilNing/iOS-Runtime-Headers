/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class UIFont;

@interface TopoNumberBadge : CALayer {
    struct CGSize { 
        double width; 
        double height; 
    struct CGSize { 
        double width; 
        double height; 
    long long _count;
    UIFont *_font;
    } _imageSize;
    id _owningView;
    } _textSize;
}

@property long long count;
@property id owningView;

+ (void)deallocImageCache;
+ (id)imageBadgeForCount:(long long)arg1;
+ (int)initImageCache;

- (void)calculateBadgeMetrics;
- (long long)count;
- (void)dealloc;
- (id)initWithOwningView:(id)arg1;
- (void)layoutSublayers;
- (struct CGImage { }*)newNumberBadge;
- (id)owningView;
- (struct CGSize { double x1; double x2; })preferredFrameSize;
- (void)setCount:(long long)arg1;
- (void)setOwningView:(id)arg1;

@end
