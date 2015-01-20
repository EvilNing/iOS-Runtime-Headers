/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AOSNotification.framework/AOSNotification
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>, NSString, NSXPCConnection;

@interface AOSNotifySession : NSObject <AOSXPCClientProtocol> {
    id _fmfAppPushMsgHandler;
    id _fmfAppPushTokenHandler;
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_xpcConnectionCreationQueue;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy) id fmfAppPushMsgHandler;
@property(copy) id fmfAppPushTokenHandler;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain) NSXPCConnection * xpcConnection;
@property(retain) NSObject<OS_dispatch_queue> * xpcConnectionCreationQueue;

+ (id)copyStoreAccount;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_destroyXPCConnection;
- (id)addFMFAccount:(id)arg1;
- (id)currentXPCConnection;
- (void)dealloc;
- (void)didChangeFMFAccountInfo:(id)arg1;
- (void)didEnterFMFRegion:(id)arg1 atLocation:(id)arg2;
- (void)didExitFMFRegion:(id)arg1 atLocation:(id)arg2;
- (oneway void)didReceiveFMFAppPushMessage:(id)arg1;
- (oneway void)didReceiveFMFAppPushToken:(id)arg1;
- (id)fmfAppPushMsgHandler;
- (id)fmfAppPushTokenHandler;
- (id)fmfDeviceId;
- (id)fmipAccount;
- (id)fmipDeviceId;
- (id)iCloudAccount;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)locationAuthorizationForShareMyLocationWithCompletion:(id)arg1;
- (id)newErrorForCode:(int)arg1 message:(id)arg2;
- (bool)performMigration;
- (id)removeFMFAccountWithUsername:(id)arg1;
- (void)removeLegacyFMFAccountUsingCallback:(id)arg1;
- (void)renewFMFAccountCredentialsUsingCallback:(id)arg1;
- (id)retrieveAllAccounts:(id*)arg1;
- (id)retrieveFMFAccount:(id*)arg1;
- (void)retrieveFMFAccountUsingCallback:(id)arg1;
- (void)retrieveLegacyFMFAccountUsingCallback:(id)arg1;
- (void)setFmfAppPushMsgHandler:(id)arg1;
- (void)setFmfAppPushTokenHandler:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)setXpcConnectionCreationQueue:(id)arg1;
- (void)startListeningForFMFAppPushInEnvironment:(id)arg1 withMessageHandler:(id)arg2 tokenHandler:(id)arg3;
- (void)startListeningOnTopic:(id)arg1;
- (void)stopListeningForFMFAppPush;
- (void)stopListeningOnTopic:(id)arg1;
- (id)storeAccount;
- (void)willDeleteiCloudAccountWithCompletion:(id)arg1;
- (id)xpcConnection;
- (id)xpcConnectionCreationQueue;

@end
