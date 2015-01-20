/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@class CNFRegShadowView, UIImage;

@interface CNFRegEditableTableCell : PSEditableTableCell {
    UIImage *_customCheckmarkImage;
    UIImage *_customCheckmarkImageSelected;
    SEL _didBeginEditingSelector;
    SEL _didEndEditingSelector;
    SEL _emptyStateSelector;
    UIImage *_shadowImage;
    CNFRegShadowView *_shadowView;
    id _textChangeObserver;
    bool_skipDelegateCallback;
    bool_textFieldIsEmpty;
}

@property(retain) UIImage * customCheckmarkImage;
@property(retain) UIImage * customCheckmarkImageSelected;
@property(retain) UIImage * shadowImage;
@property(retain) CNFRegShadowView * shadowView;
@property bool skipDelegateCallback;

- (void)_handleTextChanged;
- (void)_startListeningForTextChanges;
- (void)_stopListeningForTextChanges;
- (bool)_textFieldIsCurrentlyEmpty;
- (void)_updateTextFieldOffsetWithDict:(id)arg1;
- (id)customCheckmarkImage;
- (id)customCheckmarkImageSelected;
- (void)dealloc;
- (void)layoutSubviews;
- (void)notifyTextFieldDidBeginEditing;
- (void)notifyTextFieldDidEndEditing;
- (void)notifyTextFieldEmptyStateChanged:(bool)arg1;
- (void)setChecked:(bool)arg1;
- (void)setCustomCheckmarkImage:(id)arg1;
- (void)setCustomCheckmarkImageSelected:(id)arg1;
- (void)setShadowImage:(id)arg1;
- (void)setShadowView:(id)arg1;
- (void)setSkipDelegateCallback:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 specifier:(id)arg3;
- (id)shadowImage;
- (id)shadowView;
- (bool)skipDelegateCallback;
- (void)textFieldChangedExternally;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;

@end
