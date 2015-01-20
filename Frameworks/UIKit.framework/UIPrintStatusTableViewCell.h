/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIActivityIndicatorView, UILabel;

@interface UIPrintStatusTableViewCell : UITableViewCell {
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_hostLabel;
    UILabel *_titleLabel;
}

@property(retain) UILabel * hostLabel;
@property bool showActive;
@property(retain) UILabel * titleLabel;

- (void)dealloc;
- (id)hostLabel;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (void)setHostLabel:(id)arg1;
- (void)setShowActive:(bool)arg1;
- (void)setTitleLabel:(id)arg1;
- (bool)showActive;
- (id)titleLabel;

@end
