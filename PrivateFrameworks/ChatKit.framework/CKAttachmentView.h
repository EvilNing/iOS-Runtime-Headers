/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSString, UIImage, UIImageView, UILabel;

@interface CKAttachmentView : UIView {
    UILabel *_actionLabel;
    UIImageView *_iconImageView;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
}

@property(copy) NSString * action;
@property(retain) UILabel * actionLabel;
@property(copy) UIImage * icon;
@property(retain) UIImageView * iconImageView;
@property(copy) NSString * subtitle;
@property(retain) UILabel * subtitleLabel;
@property(copy) NSString * title;
@property(retain) UILabel * titleLabel;

- (id)action;
- (id)actionLabel;
- (void)dealloc;
- (id)icon;
- (id)iconImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAction:(id)arg1;
- (void)setActionLabel:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitle;
- (id)subtitleLabel;
- (id)title;
- (id)titleLabel;

@end
