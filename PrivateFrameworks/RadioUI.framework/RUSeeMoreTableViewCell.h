/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class SKUICircleProgressIndicator, UILabel;

@interface RUSeeMoreTableViewCell : RUTableViewCell {
    SKUICircleProgressIndicator *_activityIndicator;
    UILabel *_detailLabel;
    long long _seeMoreState;
}

@property long long seeMoreState;

+ (id)_detailLabelFontForSeeMoreState:(long long)arg1;
+ (double)defaultHeightForTraitCollection:(id)arg1;

- (void).cxx_destruct;
- (void)_updateForChangedState;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (long long)seeMoreState;
- (void)setSeeMoreState:(long long)arg1;
- (void)tintColorDidChange;

@end
