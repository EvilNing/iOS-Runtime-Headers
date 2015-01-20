/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@class <TKVibrationPickerTableViewCellDelegate>, NSString, UIColor, UIFont, UITextField;

@interface TKVibrationPickerTableViewCell : TKPickerTableViewCell <UITextFieldDelegate> {
    <TKVibrationPickerTableViewCellDelegate> *_delegate;
    UIColor *_regularTextColor;
    UITextField *_removableTextField;
    bool_editable;
}

@property(getter=_isDisplayingRemovableTextField,readonly) bool _displayingRemovableTextField;
@property(setter=_setRemovableTextField:,retain) UITextField * _removableTextField;
@property(getter=isChecked) bool checked;
@property(copy,readonly) NSString * debugDescription;
@property <TKVibrationPickerTableViewCellDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(getter=isEditable) bool editable;
@property(readonly) unsigned long long hash;
@property(retain) UIColor * highlightedTextColor;
@property(retain) NSString * labelText;
@property(retain) NSString * placeholderText;
@property(retain) UIColor * regularTextColor;
@property(retain) UIFont * regularTextFont;
@property(readonly) Class superclass;

- (bool)_isDisplayingRemovableTextField;
- (void)_layoutRemovableTextField;
- (void)_makeRemovableTextFieldEditable:(bool)arg1;
- (id)_removableTextField;
- (void)_setRemovableTextField:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didTransitionToState:(unsigned long long)arg1;
- (id)highlightedTextColor;
- (id)initWithReuseIdentifier:(id)arg1;
- (bool)isChecked;
- (bool)isEditable;
- (id)labelText;
- (void)layoutSubviews;
- (void)makeTextFieldResignFirstResponderIfNeeded;
- (id)placeholderText;
- (id)regularTextColor;
- (id)regularTextFont;
- (void)setChecked:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditable:(bool)arg1;
- (void)setHighlightedTextColor:(id)arg1;
- (void)setLabelText:(id)arg1;
- (void)setPlaceholderText:(id)arg1;
- (void)setRegularTextColor:(id)arg1;
- (void)setRegularTextFont:(id)arg1;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)willTransitionToState:(unsigned long long)arg1;

@end
