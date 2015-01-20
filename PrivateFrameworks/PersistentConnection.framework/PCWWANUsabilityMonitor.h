/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@class <PCInterfaceUsabilityMonitorDelegate>, CUTWeakReference, NSObject<OS_dispatch_queue>, NSString, PCInterfaceUsabilityMonitor;

@interface PCWWANUsabilityMonitor : NSObject <PCInterfaceUsabilityMonitorProtocol, PCInterfaceUsabilityMonitorDelegate> {
    NSObject<OS_dispatch_queue> *_ctServerQueue;
    struct __CFString { } *_currentRAT;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    CUTWeakReference *_delegateReference;
    PCInterfaceUsabilityMonitor *_interfaceMonitor;
    NSString *_interfaceName;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_queue> *_monitorDelegateQueue;
    int _powerlogCDRXToken;
    struct __CTServerConnection { } *_telephonyServer;
    unsigned long long _thresholdOffTransitionCount;
    double _trackedTimeInterval;
    int _wwanContextID;
    bool_isInCall;
    bool_isInHighPowerState;
    bool_trackUsability;
}

@property(readonly) struct __CFString { }* currentRAT;
@property(copy,readonly) NSString * debugDescription;
@property <PCInterfaceUsabilityMonitorDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) long long interfaceIdentifier;
@property(readonly) bool isBadLinkQuality;
@property(readonly) bool isInterfaceHistoricallyUsable;
@property(readonly) bool isInterfaceUsable;
@property(readonly) bool isInternetReachable;
@property(readonly) bool isLTEWithCDRX;
@property(readonly) bool isPoorLinkQuality;
@property(readonly) bool isRadioHot;
@property(readonly) int linkQuality;
@property(retain,readonly) NSString * linkQualityString;
@property(readonly) Class superclass;
@property(readonly) struct __CFString { }* wwanInterfaceName;

- (void)_adjustInterfaceNameForWWANContextID:(int)arg1;
- (void)_callDelegateOnIvarQueueWithBlock:(id)arg1;
- (void)_forwardConfigurationOnIvarQueue;
- (void)_handleTelephonyNotificationWithName:(struct __CFString { }*)arg1 userInfo:(struct __CFDictionary { }*)arg2;
- (void)_setupWWANMonitor;
- (struct __CFString { }*)currentRAT;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegateQueue:(id)arg1;
- (long long)interfaceIdentifier;
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;
- (void)interfaceReachabilityChanged:(id)arg1;
- (bool)isBadLinkQuality;
- (bool)isInterfaceHistoricallyUsable;
- (bool)isInterfaceUsable;
- (bool)isInternetReachable;
- (bool)isLTEWithCDRX;
- (bool)isPoorLinkQuality;
- (bool)isRadioHot;
- (int)linkQuality;
- (id)linkQualityString;
- (void)setDelegate:(id)arg1;
- (void)setThresholdOffTransitionCount:(unsigned long long)arg1;
- (void)setTrackUsability:(bool)arg1;
- (void)setTrackedTimeInterval:(double)arg1;
- (struct __CFString { }*)wwanInterfaceName;

@end
