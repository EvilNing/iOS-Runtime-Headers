/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSObject<OS_xpc_object>;

@interface SPXPCServer : NSObject {
    NSObject<OS_xpc_object> *_conn;
    NSMutableSet *_connections;
    NSObject<OS_dispatch_queue> *_connectionsQueue;
    id _defaultMessageHandler;
    id _disconnectHandler;
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSMutableDictionary *_handlerMap;
    double _idleTimerInterval;
    NSObject<OS_dispatch_source> *_idleTimerSource;
    id _shutdownHandler;
    NSObject<OS_dispatch_queue> *_timerQueue;
    bool_timeoutPending;
    bool_timerHasFiredSinceLastMessage;
}

@property(copy) id defaultMessageHandler;
@property(copy) id disconnectHandler;
@property(copy) id shutdownHandler;

- (bool)_doingWork;
- (void)_handleNewConnection:(id)arg1;
- (id)_handlerForMessageName:(id)arg1;
- (id)_highAvailabilityQueue;
- (void)_rescheduleIdleTimer;
- (void)_resetMessageFlag;
- (bool)_runShutdownHandler;
- (bool)connectionsAreActive;
- (void)dealloc;
- (id)defaultMessageHandler;
- (id)disconnectHandler;
- (id)initListenerWithServiceName:(id)arg1 onQueue:(id)arg2;
- (id)initListenerWithServiceName:(id)arg1;
- (void)setDefaultMessageHandler:(id)arg1;
- (void)setDisconnectHandler:(id)arg1;
- (void)setHandlerForMessageName:(id)arg1 handler:(id)arg2;
- (void)setIdleTimerInterval:(double)arg1;
- (void)setShutdownHandler:(id)arg1;
- (id)shutdownHandler;
- (void)startListening;

@end
