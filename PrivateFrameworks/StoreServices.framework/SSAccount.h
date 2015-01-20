/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSData, NSLock, NSNumber, NSString;

@interface SSAccount : NSObject <SSXPCCoding, NSCopying> {
    long long _accountKind;
    NSString *_accountName;
    long long _accountScope;
    long long _accountSource;
    long long _availableServiceTypes;
    NSData *_bioToken;
    NSString *_creditsString;
    long long _enabledServiceTypes;
    NSString *_firstName;
    NSString *_itunesPassSerialNumber;
    NSString *_lastName;
    NSLock *_lock;
    NSString *_secureToken;
    NSString *_storeFrontID;
    NSNumber *_uniqueIdentifier;
    bool_active;
    bool_activeLockerAccount;
    bool_demo;
    bool_didFallbackToPassword;
    bool_newCustomer;
}

@property(copy) NSString * ITunesPassSerialNumber;
@property long long accountKind;
@property(copy) NSString * accountName;
@property long long accountScope;
@property long long accountSource;
@property(getter=isActive) bool active;
@property(getter=isActiveLockerAccount) bool activeLockerAccount;
@property(getter=isAuthenticated,readonly) bool authenticated;
@property long long availableServiceTypes;
@property(copy) NSString * creditsString;
@property(copy,readonly) NSString * debugDescription;
@property(getter=isDemoAccount) bool demoAccount;
@property(copy,readonly) NSString * description;
@property long long enabledServiceTypes;
@property(copy) NSString * firstName;
@property(readonly) unsigned long long hash;
@property(copy) NSString * lastName;
@property(getter=isNewCustomer) bool newCustomer;
@property(copy) NSString * secureToken;
@property(getter=isSocialEnabled) bool socialEnabled;
@property(copy) NSString * storeFrontIdentifier;
@property(readonly) Class superclass;
@property(retain) NSNumber * uniqueIdentifier;

- (id)ITunesPassSerialNumber;
- (void)_sendBlockingXPCMessage:(id)arg1;
- (void)acceptTermsAndConditions:(id)arg1 withCompletionBlock:(id)arg2;
- (long long)accountKind;
- (id)accountName;
- (long long)accountScope;
- (long long)accountSource;
- (void)addAvailableServiceTypes:(long long)arg1;
- (void)addEnabledServiceTypes:(long long)arg1;
- (long long)availableServiceTypes;
- (id)copyLockdownRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (id)creditsString;
- (void)dealloc;
- (id)description;
- (bool)didFallbackToPassword;
- (long long)enabledServiceTypes;
- (id)firstName;
- (void)getDownloadKindsEligibleForContentRestoreWithBlock:(id)arg1;
- (void)getITunesMatchStatusWithCompletionBlock:(id)arg1;
- (void)getKeybagSyncDataWithType:(long long)arg1 completionHandler:(id)arg2;
- (void)getPurchasedItemsForItems:(id)arg1 completionBlock:(id)arg2;
- (void)getTermsAndConditionsWithBlock:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initDemoAccount;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isActive;
- (bool)isActiveLockerAccount;
- (bool)isAuthenticated;
- (bool)isDemoAccount;
- (bool)isEqual:(id)arg1;
- (bool)isNewCustomer;
- (bool)isSocialEnabled;
- (id)lastName;
- (bool)mergeValuesFromAccount:(id)arg1;
- (id)popBiometricToken;
- (void)removeAvailableServiceTypes:(long long)arg1;
- (void)removeEnabledServiceTypes:(long long)arg1;
- (void)resetTransientData;
- (id)secureToken;
- (void)setAccountKind:(long long)arg1;
- (void)setAccountName:(id)arg1;
- (void)setAccountScope:(long long)arg1;
- (void)setAccountSource:(long long)arg1;
- (void)setActive:(bool)arg1;
- (void)setActiveLockerAccount:(bool)arg1;
- (void)setAvailableServiceTypes:(long long)arg1;
- (void)setBiometricToken:(id)arg1;
- (void)setCreditsString:(id)arg1;
- (void)setDemoAccount:(bool)arg1;
- (void)setDidFallbackToPassword:(bool)arg1;
- (void)setEnabledServiceTypes:(long long)arg1;
- (void)setFirstName:(id)arg1;
- (void)setITunesPassSerialNumber:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setLockdownDictionary:(id)arg1;
- (void)setNewCustomer:(bool)arg1;
- (void)setSecureToken:(id)arg1;
- (void)setSocialEnabled:(bool)arg1;
- (void)setStoreFrontIdentifier:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)storeFrontIdentifier;
- (id)uniqueIdentifier;

@end
