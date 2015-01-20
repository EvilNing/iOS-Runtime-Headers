/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSString, PSLanguageSelector;

@interface PSInternationalLanguageSetupController : PSSetupController <UIActionSheetDelegate, UIAlertViewDelegate> {
    PSLanguageSelector *_languageSelector;
    NSString *_languageToSet;
    bool_notOfficialLanguage;
    bool_useOfficialLanguages;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) PSLanguageSelector * languageSelector;
@property(readonly) Class superclass;

- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)changeLanguageWithIndex:(unsigned long long)arg1 tag:(unsigned long long)arg2;
- (void)commit;
- (void)dealloc;
- (void)didFinishCommit;
- (bool)disablesAutomaticKeyboardDismissal;
- (id)init;
- (id)initWithOfficialLanguages;
- (id)language:(id)arg1;
- (id)languageSelector;
- (void)saveLanguage:(bool)arg1;
- (void)setLanguage:(id)arg1 specifier:(id)arg2;
- (void)setLanguageSelector:(id)arg1;
- (void)setNotOfficialLanguage:(bool)arg1;
- (void)setupController;
- (void)showBlackViewWithLabel:(id)arg1 moveLanguageToTop:(bool)arg2 withLanguageIdentifier:(id)arg3;
- (bool)useOfficialLanguages;

@end
