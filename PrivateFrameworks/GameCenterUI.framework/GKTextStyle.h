/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKColorPalette, NSString, UIColor;

@interface GKTextStyle : NSObject {
    double _UIKitFontLeading;
    NSString *_UIKitFontTextStyleName;
    UIColor *_color;
    NSString *_fontName;
    SEL _fontNameRebaseSelector;
    double _fontSize;
    SEL _fontSizeRebaseSelector;
    long long _lineBreakMode;
    double _m34;
    double _minimumLineHeight;
    GKColorPalette *_palette;
    long long _textAlignment;
    double _zPosition;
    bool_needsParagraphStyle;
    bool_overrideUIKitFontSize;
}

@property(readonly) NSString * UIKitFontTextStyleName;
@property(retain) UIColor * color;
@property(readonly) NSString * fontName;
@property SEL fontNameRebaseSelector;
@property(readonly) double fontSize;
@property SEL fontSizeRebaseSelector;
@property long long lineBreakMode;
@property double m34;
@property double minimumLineHeight;
@property bool needsParagraphStyle;
@property bool overrideUIKitFontSize;
@property(retain) GKColorPalette * palette;
@property long long textAlignment;
@property double zPosition;

+ (id)attributedString:(id)arg1 byReplayingFromBaseStyle:(id)arg2 systemContentSizeDidChange:(bool)arg3;
+ (double)bubbleTextScale;
+ (double)scaledValueFromHISpecLeading:(double)arg1 forFontTextStyle:(id)arg2;
+ (double)standardFontSize;
+ (double)standardLeadingForFontTextStyle:(id)arg1;
+ (id)textStyle;

- (id)UIKitFontTextStyleName;
- (id)achievementLeaderboardPointsText;
- (id)achievementLeaderboardRank;
- (id)achievementValueText;
- (id)alignment:(long long)arg1 lineBreakMode:(long long)arg2;
- (void)applyScaleForMesh;
- (void)applyToEditField:(id)arg1;
- (void)applyToLabel:(id)arg1;
- (id)attributes;
- (id)bannerMessage;
- (id)bannerTitle;
- (id)baseFontRebaseSelector;
- (id)body;
- (id)bold;
- (id)bubbleCaption;
- (id)bubbleCaptionSmall;
- (id)bubbleHeadline;
- (id)bubbleText;
- (id)bubbleTextSmall;
- (id)bubbleValue;
- (id)bubbleValueSmall;
- (id)buttonTitle;
- (id)buyButtonTitle;
- (id)caption1;
- (id)caption2;
- (id)caption;
- (id)cellActionItem;
- (id)centered;
- (id)challengeBubbleValue;
- (id)color;
- (id)composeFields;
- (id)composeMessage;
- (id)copy;
- (id)copyWithBaseClass:(Class)arg1;
- (void)dealloc;
- (id)description;
- (id)detailSecondaryHeaderText;
- (id)emphasized;
- (id)emphasizedOnDarkBackground;
- (id)fontName;
- (SEL)fontNameRebaseSelector;
- (double)fontSize;
- (SEL)fontSizeRebaseSelector;
- (id)footnote;
- (id)friendCaptionColor;
- (id)friendColor;
- (id)gameDetailNameText;
- (unsigned long long)hash;
- (id)header0;
- (id)header1;
- (id)header2;
- (id)header3;
- (id)header4;
- (id)headerViewSubText1;
- (id)headline;
- (id)info;
- (id)init;
- (id)initEmpty;
- (bool)isEqual:(id)arg1;
- (id)leaderboardRankLarge;
- (id)leaderboardRankMedium;
- (id)leaderboardRankSmall;
- (id)light;
- (id)lineBreakMode:(long long)arg1;
- (long long)lineBreakMode;
- (id)lineHeight:(double)arg1;
- (id)localPlayerColor;
- (double)m34;
- (id)meBubbleCaption;
- (id)meBubbleValue;
- (id)medium;
- (double)minimumLineHeight;
- (id)multiplayerAddText;
- (id)multiplayerFooterText;
- (id)multiplayerHeaderText;
- (id)multiplayerNameText;
- (id)multiplayerStatusText;
- (bool)needsParagraphStyle;
- (bool)overrideUIKitFontSize;
- (id)palette;
- (id)regular;
- (id)remoteUIDetailLabel:(int)arg1;
- (id)remoteUIEditField:(int)arg1;
- (id)remoteUIEditLabel:(int)arg1;
- (id)remoteUILabel:(int)arg1;
- (id)remoteUINickNameField:(int)arg1;
- (id)remoteUINickNameLabel:(int)arg1;
- (id)remoteUISectionFooter:(int)arg1;
- (id)remoteUISectionHeader:(int)arg1;
- (id)remoteUISelectField:(int)arg1;
- (id)remoteUISelectLabel:(int)arg1;
- (id)remoteUITableFooterButton:(int)arg1;
- (id)remoteUITableHeaderButton:(int)arg1;
- (id)remoteUITableHeaderLabel:(int)arg1;
- (id)remoteUITableHeaderSubLabel:(int)arg1;
- (id)removeButtonTitle;
- (id)replayOnBaseStyle:(id)arg1 systemContentSizeDidChange:(bool)arg2;
- (id)resolveFontAndLineSpacing:(double*)arg1;
- (id)roundButtonTitle;
- (id)scaled:(double)arg1;
- (id)scaledForM34:(double)arg1 zPosition:(double)arg2;
- (id)sectionCaption;
- (id)sectionCaptionSmall;
- (id)sectionHeader;
- (id)segmentBubbleCaption;
- (id)segmentBubbleValue;
- (id)selectedBuyButtonTitle;
- (void)setColor:(id)arg1;
- (void)setFontName:(id)arg1 kitTextStyleName:(id)arg2 leadingOverrideFromHISpec:(double)arg3 shouldOverrideSize:(bool)arg4 rebaseSelector:(SEL)arg5;
- (void)setFontName:(id)arg1 kitTextStyleName:(id)arg2 shouldOverrideSize:(bool)arg3 rebaseSelector:(SEL)arg4;
- (void)setFontName:(id)arg1 rebaseSelector:(SEL)arg2;
- (void)setFontNameRebaseSelector:(SEL)arg1;
- (void)setFontSize:(double)arg1 rebaseSelector:(SEL)arg2;
- (void)setFontSizeRebaseSelector:(SEL)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setM34:(double)arg1;
- (void)setMinimumLineHeight:(double)arg1;
- (void)setNeedsParagraphStyle:(bool)arg1;
- (void)setOverrideUIKitFontSize:(bool)arg1;
- (void)setPalette:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setZPosition:(double)arg1;
- (id)settingsBoldButton;
- (id)settingsButton;
- (id)settingsFooter;
- (id)settingsHeader;
- (id)settingsLabel;
- (id)settingsLinkText;
- (id)signInField;
- (id)signInFieldLabel;
- (id)signInLink;
- (id)signInSubtitle;
- (id)signInTitle;
- (id)small;
- (id)smallInfo;
- (id)strong;
- (id)styleWithName:(id)arg1 fallback:(id)arg2 layoutMode:(int)arg3;
- (id)tabIconCaption;
- (id)tableCellSubtitle;
- (id)tableCellTitle;
- (id)tableFooterStyle;
- (long long)textAlignment;
- (id)thin;
- (id)thinNumberText;
- (id)viewBackground;
- (double)zPosition;

@end
