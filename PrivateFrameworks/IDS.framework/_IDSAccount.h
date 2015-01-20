/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@class IDSDevice, NSArray, NSData, NSDate, NSDictionary, NSMapTable, NSMutableArray, NSString;

@interface _IDSAccount : NSObject <IDSDaemonListenerProtocol> {
    NSDictionary *_accountConfig;
    id _delegateContext;
    NSMapTable *_delegateToInfo;
    NSMutableArray *_devices;
    IDSDevice *_localDevice;
    NSMapTable *_registrationDelegateToInfo;
    NSString *_service;
    NSString *_serviceToken;
    NSString *_uniqueID;
    bool_devicesLoaded;
    bool_isEnabled;
}

@property(setter=_setIsEnabled:) bool _isEnabled;
@property(retain) NSDictionary * accountInfo;
@property(readonly) int accountType;
@property(retain,readonly) NSArray * aliasStrings;
@property(retain,readonly) NSArray * aliases;
@property(readonly) bool canSend;
@property(readonly) NSDate * dateRegistered;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain,readonly) NSArray * devices;
@property(retain,readonly) NSString * displayName;
@property(readonly) unsigned long long hash;
@property(readonly) bool isActive;
@property(retain) NSString * loginID;
@property(retain,readonly) NSArray * nearbyDevices;
@property(readonly) NSDate * nextRegistrationDate;
@property(retain,readonly) NSString * primaryServiceName;
@property(readonly) NSString * profileID;
@property(retain,readonly) NSDictionary * profileInfo;
@property(readonly) NSData * pushToken;
@property(retain,readonly) NSString * pushTopic;
@property(readonly) NSString * regionBasePhoneNumber;
@property(readonly) NSString * regionID;
@property(readonly) NSDictionary * regionServerContext;
@property(readonly) NSArray * registeredURIs;
@property(readonly) NSData * registrationCertificate;
@property(readonly) int registrationStatus;
@property(retain,readonly) NSString * serviceName;
@property(readonly) Class superclass;
@property(retain,readonly) NSString * uniqueID;
@property(retain,readonly) NSArray * vettedAliases;

- (void)_callDelegatesWithBlock:(id)arg1 group:(id)arg2;
- (void)_callDelegatesWithBlock:(id)arg1;
- (void)_callDevicesChanged;
- (void)_callNearbyDevicesChanged;
- (void)_callRegistrationDelegatesWithBlock:(id)arg1;
- (void)_connect;
- (bool)_isEnabled;
- (bool)_isiCloudPairingService;
- (id)_keychainRegistration;
- (void)_loadCachedDevices;
- (id)_objectForKey:(id)arg1;
- (id)_registeredURIs;
- (void)_reregisterAndReidentify:(bool)arg1;
- (void)_setIsEnabled:(bool)arg1;
- (void)_setObject:(id)arg1 forKey:(id)arg2;
- (void)_updateDependentDevicesWithDevicesInfo:(id)arg1;
- (void)account:(id)arg1 aliasesChanged:(id)arg2;
- (void)account:(id)arg1 dependentDevicesUpdated:(id)arg2;
- (void)account:(id)arg1 displayNameChanged:(id)arg2;
- (void)account:(id)arg1 localDeviceAdded:(id)arg2;
- (void)account:(id)arg1 localDeviceRemoved:(id)arg2;
- (void)account:(id)arg1 loginChanged:(id)arg2;
- (void)account:(id)arg1 profileChanged:(id)arg2;
- (void)account:(id)arg1 registrationStatusInfoChanged:(id)arg2;
- (void)account:(id)arg1 vettedAliasesChanged:(id)arg2;
- (id)accountInfo;
- (int)accountType;
- (void)activeDevicesUpdatedForAccount:(id)arg1;
- (void)addAliases:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)addRegistrationDelegate:(id)arg1 queue:(id)arg2;
- (id)aliasStrings;
- (id)aliases;
- (void)authenticateAccount;
- (bool)canSend;
- (id)dateRegistered;
- (void)deactivateAndPurgeIdentify;
- (void)dealloc;
- (id)description;
- (void)device:(id)arg1 nsuuidChanged:(id)arg2;
- (id)devices;
- (id)displayName;
- (id)init;
- (id)initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 delegateContext:(id)arg4;
- (id)initWithLoginID:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 delegateContext:(id)arg4;
- (bool)isActive;
- (id)loginID;
- (id)nearbyDevices;
- (id)nextRegistrationDate;
- (void)passwordUpdated;
- (id)primaryServiceName;
- (id)profileID;
- (id)profileInfo;
- (id)pushToken;
- (id)pushTopic;
- (void)refreshRegistrationForAccount:(id)arg1;
- (id)regionBasePhoneNumber;
- (id)regionID;
- (id)regionServerContext;
- (void)registerAccount;
- (id)registeredURIs;
- (id)registrationCertificate;
- (id)registrationInfo;
- (int)registrationStatus;
- (void)removeAliases:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)removeRegistrationDelegate:(id)arg1;
- (id)serviceName;
- (void)setAccountInfo:(id)arg1;
- (void)setAuthToken:(id)arg1;
- (void)setLoginID:(id)arg1;
- (void)setPassword:(id)arg1;
- (id)uniqueID;
- (void)unregisterAccount;
- (void)unvalidateAliases:(id)arg1;
- (void)updateAccountWithAccountInfo:(id)arg1;
- (void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2;
- (void)validateAliases:(id)arg1;
- (void)validateProfile;
- (id)vettedAliases;

@end
