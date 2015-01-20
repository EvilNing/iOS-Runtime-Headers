/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CNFRegAlias, NSArray, PSSpecifier;

@interface CNFRegAliasDetailController : CNFRegListController {
    id _alertHandler;
    CNFRegAlias *_alias;
    PSSpecifier *_removeButtonSpecifier;
    PSSpecifier *_removeGroupSpecifier;
    NSArray *_resendValidationSpecifierGroup;
}

@property(copy) id alertHandler;
@property(retain) CNFRegAlias * alias;

- (void)_buildSpecifierCache:(id)arg1;
- (void)_setupEventHandlers;
- (void)_showAliasValidationError:(id)arg1;
- (void)_showResendGroup:(bool)arg1 animated:(bool)arg2;
- (void)_updateUIAnimated:(bool)arg1;
- (id)alertHandler;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (id)alias;
- (id)bundle;
- (void)dealloc;
- (void)forgetAliasTapped:(id)arg1;
- (id)initWithRegController:(id)arg1 alias:(id)arg2;
- (void)resendValidationEmailTapped:(id)arg1;
- (void)setAlertHandler:(id)arg1;
- (void)setAlias:(id)arg1;
- (void)setRemoveAliasEnabled:(bool)arg1 animated:(bool)arg2;
- (void)showRemoveAliasConfirmation;
- (id)specifierList;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationWillEnterForeground;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
