/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@class AVLoadedTimeRangesView, NSArray, NSString, UIImageView;

@interface AVScrubber : UISlider {
    double _beginTouchLocationInViewY;
    NSArray *_loadedTimeRanges;
    AVLoadedTimeRangesView *_loadedTimeRangesMaxTrackView;
    long long _scrubbingSpeed;
    UIImageView *_thumbView;
    double _touchLocationOffsetFromThumbViewCenter;
}

@property(retain) NSArray * loadedTimeRanges;
@property(readonly) NSString * localizedScrubbingSpeedName;
@property(getter=isPreciseScrubbingFeasible,readonly) bool preciseScrubbingFeasible;
@property long long scrubbingSpeed;

+ (id)keyPathsForValuesAffectingLocalizedScrubbingSpeedName;
+ (id)keyPathsForValuesAffectingPreciseScrubbingFeasible;

- (void).cxx_destruct;
- (void)_initSubviews;
- (void)_layoutSubviewsForBoundsChange:(bool)arg1;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)createThumbView;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isPreciseScrubbingFeasible;
- (void)layoutSubviews;
- (id)loadedTimeRanges;
- (id)localizedScrubbingSpeedName;
- (long long)scrubbingSpeed;
- (void)setLoadedTimeRanges:(id)arg1;
- (void)setScrubbingSpeed:(long long)arg1;

@end
