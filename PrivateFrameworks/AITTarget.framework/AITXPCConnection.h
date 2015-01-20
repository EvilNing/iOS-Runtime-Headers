/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AITTarget.framework/AITTarget
 */

@class <AITXPCConnectionDelegate>, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, NSString;

@interface AITXPCConnection : NSObject {
    NSString *_bundleId;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_xpc_object> *_currentMessage;
    <AITXPCConnectionDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    int _pid;
}

@property(readonly) bool available;
@property(copy) NSString * bundleId;
@property NSObject<OS_xpc_object> * connection;
@property NSObject<OS_xpc_object> * currentMessage;
@property <AITXPCConnectionDelegate> * delegate;
@property NSObject<OS_dispatch_queue> * dispatchQueue;
@property NSObject<OS_dispatch_queue> * internalQueue;
@property(readonly) int pid;

- (id)_deserializeMessage:(id)arg1;
- (void)_handleEvent:(id)arg1;
- (bool)available;
- (void)barrierWithCompletionHandler:(id)arg1;
- (id)bundleId;
- (void)closeConnection;
- (id)connection;
- (id)currentMessage;
- (void)dealloc;
- (id)delegate;
- (id)dispatchQueue;
- (id)initWithConnection:(id)arg1 delegate:(id)arg2 dispatchQueue:(id)arg3;
- (id)initWithConnection:(id)arg1 delegate:(id)arg2;
- (id)internalQueue;
- (int)pid;
- (void)sendMessage:(id)arg1 userInfo:(id)arg2 replyHandler:(id)arg3;
- (void)sendMessage:(id)arg1 userInfo:(id)arg2;
- (void)setBundleId:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setCurrentMessage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInternalQueue:(id)arg1;

@end
