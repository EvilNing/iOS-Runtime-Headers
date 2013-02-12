/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CTCarrier, CTRadioAccessTechnology;

@interface CTTelephonyNetworkInfo : NSObject {
    void *_internal;
    CTRadioAccessTechnology *_radioAccessTechnology;
    CTCarrier *_subscriberCellularProvider;
    id _subscriberCellularProviderDidUpdateNotifier;
}

@property(retain) CTRadioAccessTechnology * radioAccessTechnology;
@property(retain) CTCarrier * subscriberCellularProvider;
@property(copy) id subscriberCellularProviderDidUpdateNotifier;

- (void)cleanUpServerConnection;
- (void)dealloc;
- (BOOL)getAllowsVOIP:(BOOL*)arg1 withCTError:(struct { int x1; int x2; }*)arg2;
- (BOOL)getCarrierName:(id)arg1 withCTError:(struct { int x1; int x2; }*)arg2;
- (BOOL)getMobileCountryCode:(id)arg1 andIsoCountryCode:(id)arg2 withCTError:(struct { int x1; int x2; }*)arg3;
- (BOOL)getMobileNetworkCode:(id)arg1 withCTError:(struct { int x1; int x2; }*)arg2;
- (void)handleNotificationFromConnection:(void*)arg1 ofType:(id)arg2 withInfo:(id)arg3;
- (id)init;
- (void)postUpdatesIfNecessary;
- (id)radioAccessTechnology;
- (void)setRadioAccessTechnology:(id)arg1;
- (void)setSubscriberCellularProvider:(id)arg1;
- (void)setSubscriberCellularProviderDidUpdateNotifier:(id)arg1;
- (BOOL)setUpServerConnection;
- (id)subscriberCellularProvider;
- (id)subscriberCellularProviderDidUpdateNotifier;
- (BOOL)updateNetworkInfoAndShouldNotifyClient:(BOOL*)arg1;

@end
