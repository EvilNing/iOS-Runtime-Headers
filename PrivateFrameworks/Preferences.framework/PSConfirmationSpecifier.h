/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSString;

@interface PSConfirmationSpecifier : PSSpecifier {
    NSString *_cancelButton;
    NSString *_okButton;
    NSString *_prompt;
    NSString *_title;
}

@property(retain) NSString * cancelButton;
@property(retain) NSString * okButton;
@property(retain) NSString * prompt;
@property(retain) NSString * title;

+ (id)preferenceSpecifierNamed:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 detail:(Class)arg5 cell:(long long)arg6 edit:(Class)arg7;
+ (id)specifierWithSpecifier:(id)arg1;

- (id)cancelButton;
- (void)dealloc;
- (bool)isDestructive;
- (bool)isEqualToSpecifier:(id)arg1;
- (id)okButton;
- (id)prompt;
- (void)setCancelButton:(id)arg1;
- (void)setOkButton:(id)arg1;
- (void)setPrompt:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setupWithDictionary:(id)arg1;
- (id)title;

@end
