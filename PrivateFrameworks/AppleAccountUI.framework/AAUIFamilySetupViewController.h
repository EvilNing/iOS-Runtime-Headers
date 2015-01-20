/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@class <AAUIFamilySetupDelegate>, AAGrandSlamSigner, ACAccount, ACAccountStore, NSMutableURLRequest, NSString, RemoteUIController, UIActivityIndicatorView, UIBarButtonItem, UINavigationItem;

@interface AAUIFamilySetupViewController : AAUIBleachedNavigationController <AAUIFamilySetupPageDelegate, RemoteUIControllerDelegate> {
    ACAccount *_account;
    ACAccountStore *_accountStore;
    NSMutableURLRequest *_currentRemoteUIRequest;
    AAGrandSlamSigner *_grandSlamSigner;
    UINavigationItem *_navigationItemShowingSpinner;
    UIBarButtonItem *_originalRightBarButtonItem;
    RemoteUIController *_remoteUIController;
    UIActivityIndicatorView *_spinnerView;
    NSMutableURLRequest *_startRemoteUIRequest;
    bool_isShowingSpinner;
}

@property(copy,readonly) NSString * debugDescription;
@property <AAUIFamilySetupDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_closeButtonWasTapped:(id)arg1;
- (id)_createCloseButton;
- (void)_hideActivitySpinnerInNavigationBar;
- (id)_initWithGrandSlamSigner:(id)arg1 rootViewController:(id)arg2;
- (bool)_isRunningInSettings;
- (void)_loadRemoteUIPages;
- (void)_remoteUIDidCancel;
- (void)_sendUserToiTunesSettings;
- (void)_showActivitySpinnerInNavigationBar;
- (id)_urlForLaunchingSettings;
- (void)dealloc;
- (void)familySetupPage:(id)arg1 didCompleteWithSuccess:(bool)arg2;
- (id)initTrimmedFlowWithGrandSlamSigner:(id)arg1;
- (id)initWithAccount:(id)arg1 store:(id)arg2;
- (id)initWithGrandSlamSigner:(id)arg1 familyEligibilityResponse:(id)arg2;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)remoteUIController:(id)arg1 willLoadRequest:(id)arg2;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(bool)arg3;
- (void)remoteUIControllerDidDismiss:(id)arg1;
- (bool)shouldAutorotate;
- (void)viewDidLoad;

@end
