/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@class ISLoadURLBagOperation, NSDictionary, NSNumber, NSString, SSMetricsController;

@interface IKJSITunesStore : IKJSObject <IKJSITunesStore> {
    int _bagOperationLock;
    NSString *_cookieURL;
    NSNumber *_lastAccountDSID;
    SSMetricsController *_metricsController;
    ISLoadURLBagOperation *_pendingBagOperation;
}

@property(readonly) NSString * DSID;
@property(readonly) NSDictionary * accountInfo;
@property(retain) id cookie;
@property(retain) NSString * cookieURL;
@property(readonly) NSString * networkConnectionType;
@property ISLoadURLBagOperation * pendingBagOperation;
@property(retain) NSString * storefront;
@property(readonly) NSString * userAgent;

+ (id)_URLBagContext;
+ (void)setHeadersForURL:(id)arg1 inRequestProperties:(id)arg2;
+ (void)setITunesStoreHeaders:(id)arg1;

- (void).cxx_destruct;
- (id)DSID;
- (void)_accountStoreChanged;
- (void)_bagDidLoadNotification:(id)arg1;
- (void)_updateBag:(bool)arg1;
- (void)_updateWithBag:(id)arg1;
- (id)accountInfo;
- (void)authenticate:(id)arg1 :(id)arg2;
- (void)clearCookies;
- (id)cookie;
- (id)cookieURL;
- (void)dealloc;
- (void)evaluateScripts:(id)arg1 :(id)arg2;
- (void)flushUnreportedEvents;
- (id)getBag;
- (id)initWithAppContext:(id)arg1;
- (void)invalidateBag;
- (void)loadStoreContent:(id)arg1 :(id)arg2;
- (id)makeStoreXMLHttpRequest;
- (id)networkConnectionType;
- (id)pendingBagOperation;
- (void)recordEvent:(id)arg1 :(id)arg2;
- (void)setCookie:(id)arg1;
- (void)setCookieURL:(id)arg1;
- (void)setPendingBagOperation:(id)arg1;
- (void)setStorefront:(id)arg1;
- (void)signOut;
- (id)storefront;
- (id)userAgent;

@end
