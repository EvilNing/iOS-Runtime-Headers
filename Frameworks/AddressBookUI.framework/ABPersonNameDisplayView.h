/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABNamePropertyGroup, ABStyleProvider, NSString, UIFont, UILabel, UIView;

@interface ABPersonNameDisplayView : ABPasteboardControl {
    NSString *_customHeadline;
    NSString *_customMessage;
    NSString *_customMessageDetail;
    UIView *_customMessageView;
    NSString *_customTagLine;
    UILabel *_headlineLabel;
    UIFont *_messageDetailFont;
    UILabel *_messageDetailLabel;
    UIFont *_messageFont;
    UILabel *_messageLabel;
    double _minimumHeight;
    ABNamePropertyGroup *_namePropertyGroup;
    int _primaryProperty;
    NSString *_primaryPropertyFormattingCountryCode;
    ABStyleProvider *_styleProvider;
    UILabel *_tagLineLabel;
    bool_alignOnBottom;
}

@property bool alignOnBottom;
@property(retain) UIView * customMessageView;
@property(copy) NSString * headline;
@property(copy) NSString * message;
@property(copy) NSString * messageDetail;
@property(retain) UIFont * messageDetailFont;
@property(retain) UIFont * messageFont;
@property double minimumHeight;
@property(retain) ABNamePropertyGroup * namePropertyGroup;
@property int primaryProperty;
@property(copy) NSString * primaryPropertyFormattingCountryCode;
@property(retain) ABStyleProvider * styleProvider;
@property(copy) NSString * tagLine;

- (void)_adjustLabelTextColorForPasteboardSelection:(bool)arg1;
- (void)_appendString:(id)arg1 withFormatKey:(id)arg2 toTagLine:(id)arg3;
- (id)_copyPrimaryValue;
- (id)_copyTagLine;
- (double)_heightForLabelsForWidth:(double)arg1;
- (id)_newLabelWithFont:(id)arg1 numberOfLines:(unsigned long long)arg2;
- (void)_setFont:(id)arg1 isDetail:(bool)arg2;
- (void)_setLabel:(id)arg1 highlighted:(bool)arg2 animated:(bool)arg3;
- (void)_setMessageText:(id)arg1 isDetail:(bool)arg2;
- (void)_setSubviewsHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)_updateHeadlineText;
- (void)_updateTagLineText;
- (void)abMenuControllerWillHide;
- (void)abMenuControllerWillShow:(id)arg1;
- (bool)abShouldShowMenu;
- (bool)alignOnBottom;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)copy:(id)arg1;
- (id)customMessageView;
- (void)dealloc;
- (id)headline;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)initializeHeadlineAndTaglineIfNeeded;
- (void)layoutSubviews;
- (id)message;
- (id)messageDetail;
- (id)messageDetailFont;
- (id)messageFont;
- (double)minimumHeight;
- (struct CGSize { double x1; double x2; })multilineLabel:(id)arg1 sizeThatFits:(struct CGSize { double x1; double x2; })arg2;
- (id)namePropertyGroup;
- (int)primaryProperty;
- (id)primaryPropertyFormattingCountryCode;
- (void)reloadNameDataAnimated:(bool)arg1;
- (void)setAlignOnBottom:(bool)arg1;
- (void)setCustomMessageView:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHeadline:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageDetail:(id)arg1;
- (void)setMessageDetailFont:(id)arg1;
- (void)setMessageFont:(id)arg1;
- (void)setMinimumHeight:(double)arg1;
- (void)setNamePropertyGroup:(id)arg1;
- (void)setPrimaryProperty:(int)arg1;
- (void)setPrimaryPropertyFormattingCountryCode:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setTagLine:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)styleProvider;
- (id)tagLine;

@end
