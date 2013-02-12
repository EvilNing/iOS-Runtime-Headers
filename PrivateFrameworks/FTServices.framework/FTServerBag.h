/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class IMConnectionMonitor, IMRemoteURLConnection, NSData, NSDate, NSDictionary, NSMutableURLRequest, NSNumber, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface FTServerBag : NSObject {
    BOOL _allowSelfSignedCertificates;
    BOOL _allowUnsignedBags;
    NSString *_apsEnvironmentName;
    NSDictionary *_bag;
    NSObject<OS_dispatch_queue> *_bagQueue;
    NSURL *_bagURL;
    NSNumber *_cacheTime;
    NSDictionary *_cachedBag;
    NSString *_cachedHash;
    NSString *_cachedURLString;
    NSData *_certData;
    IMConnectionMonitor *_connectionMonitor;
    NSDate *_loadDate;
    IMRemoteURLConnection *_remoteURLConnection;
    int _trustStatus;
    NSMutableURLRequest *_urlRequest;
}

@property(setter=_setBag:,retain) NSDictionary * _bag;
@property NSObject<OS_dispatch_queue> * _bagQueue;
@property(retain) NSNumber * _cacheTime;
@property(setter=_setCachedBag:,retain) NSDictionary * _cachedBag;
@property(setter=_setCachedHash:,retain) NSString * _cachedHash;
@property(setter=_setCachedURLString:,retain) NSString * _cachedURLString;
@property(retain) NSData * _certData;
@property(retain) IMConnectionMonitor * _connectionMonitor;
@property(retain) NSDate * _loadDate;
@property IMRemoteURLConnection * _remoteURLConnection;
@property(setter=_setTrustStatus:) int _trustStatus;
@property(retain) NSMutableURLRequest * _urlRequest;
@property BOOL allowSelfSignedCertificates;
@property BOOL allowUnsignedBags;
@property(retain) NSString * apsEnvironmentName;
@property(retain) NSURL * bagURL;
@property(readonly) BOOL isInDebilitatedMode;
@property(readonly) BOOL isLoaded;
@property(readonly) BOOL isLoading;
@property(readonly) BOOL isServerAvailable;

+ (id)_bagCreationLock;
+ (id)_sharedInstance;
+ (id)_sharedInstanceForClass:(Class)arg1;
+ (id)sharedInstance;
+ (id)sharedInstanceForBagType:(int)arg1;

- (void)__saveCacheToPrefs;
- (BOOL)_allowInvalid;
- (id)_bag;
- (id)_bagDefaultsDomain;
- (void)_bagExternallyReloaded;
- (id)_bagQueue;
- (id)_cacheTime;
- (id)_cachedBag;
- (id)_cachedHash;
- (id)_cachedURLString;
- (void)_cancelCurrentLoad;
- (id)_certData;
- (void)_clearCache;
- (id)_connectionMonitor;
- (void)_generateURLRequest;
- (id)_initWithURL:(id)arg1 apsEnvironmentName:(id)arg2 allowSelfSignedCertificates:(BOOL)arg3 allowUnsignedBags:(BOOL)arg4;
- (void)_invalidate;
- (id)_loadDate;
- (void)_loadFromCache;
- (BOOL)_loadFromDictionary:(id)arg1 returningError:(id*)arg2;
- (BOOL)_loadFromSignedDictionary:(id)arg1 returningError:(id*)arg2;
- (void)_processBagResultData:(id)arg1 response:(id)arg2 inBackground:(BOOL)arg3;
- (id)_remoteURLConnection;
- (void)_saveCacheToPrefs;
- (void)_saveToCache;
- (void)_setBag:(id)arg1;
- (void)_setCachedBag:(id)arg1;
- (void)_setCachedHash:(id)arg1;
- (void)_setCachedURLString:(id)arg1;
- (void)_setTrustStatus:(int)arg1;
- (void)_startBagLoad:(BOOL)arg1;
- (int)_trustStatus;
- (id)_urlRequest;
- (BOOL)allowSelfSignedCertificates;
- (BOOL)allowUnsignedBags;
- (id)apsEnvironmentName;
- (id)bagURL;
- (void)connectionMonitorDidUpdate:(id)arg1;
- (void)dealloc;
- (void)forceBagLoad;
- (BOOL)isInDebilitatedMode;
- (BOOL)isLoaded;
- (BOOL)isLoading;
- (BOOL)isServerAvailable;
- (id)objectForKey:(id)arg1;
- (void)setAllowSelfSignedCertificates:(BOOL)arg1;
- (void)setAllowUnsignedBags:(BOOL)arg1;
- (void)setApsEnvironmentName:(id)arg1;
- (void)setBagURL:(id)arg1;
- (void)set_bagQueue:(id)arg1;
- (void)set_cacheTime:(id)arg1;
- (void)set_certData:(id)arg1;
- (void)set_connectionMonitor:(id)arg1;
- (void)set_loadDate:(id)arg1;
- (void)set_remoteURLConnection:(id)arg1;
- (void)set_urlRequest:(id)arg1;
- (void)startBagLoad;
- (id)urlWithKey:(id)arg1;

@end
