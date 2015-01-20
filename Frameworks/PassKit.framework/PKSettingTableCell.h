/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class UISwitch;

@interface PKSettingTableCell : UITableViewCell {
    SEL _action;
    UISwitch *_settingSwitch;
    id _target;
}

@property(readonly) SEL action;
@property(getter=isOn) bool on;
@property(readonly) id target;

- (SEL)action;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (bool)isOn;
- (void)layoutSubviews;
- (void)setOn:(bool)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (id)target;

@end
