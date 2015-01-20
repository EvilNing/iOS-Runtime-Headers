/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class NSLock, NSString;

@interface _ReachabilityRequest : NSObject {
    unsigned int _flags;
    NSString *_hostname;
    NSLock *_lock;
    struct __CFDictionary { } *_observers;
    struct __SCNetworkReachability { } *_reachability;
    bool_isReachable;
    bool_receivedAtLeastOneCallback;
}

@property NSString * hostname;

- (void)addObserver:(id)arg1 selector:(SEL)arg2;
- (void)dealloc;
- (id)description;
- (bool)hasObservers;
- (id)hostname;
- (id)initWithHostname:(id)arg1;
- (void)reachabilityChangedWithFlags:(unsigned int)arg1;
- (void)removeObserver:(id)arg1;
- (void)setHostname:(id)arg1;

@end
