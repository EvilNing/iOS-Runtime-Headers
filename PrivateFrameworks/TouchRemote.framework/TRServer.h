/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@class <TRServerDelegate>, NSNetService, NSObject<OS_dispatch_queue>, NSObject<OS_tcp_listener>, NSString, TRAdvertisingInfo;

@interface TRServer : NSObject <NSNetServiceDelegate> {
    TRAdvertisingInfo *_advertisingInfo;
    <TRServerDelegate> *_delegate;
    NSObject<OS_tcp_listener> *_listener;
    NSObject<OS_dispatch_queue> *_listenerQueue;
    NSString *_name;
    NSNetService *_netService;
    unsigned short _port;
}

@property(copy) TRAdvertisingInfo * advertisingInfo;
@property(copy,readonly) NSString * debugDescription;
@property <TRServerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) NSString * name;
@property(readonly) unsigned short port;
@property(readonly) Class superclass;

+ (id)newServerWithName:(id)arg1 port:(unsigned short)arg2;
+ (id)newServerWithName:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithName:(id)arg1 port:(unsigned short)arg2;
- (id)advertisingInfo;
- (void)dealloc;
- (id)delegate;
- (id)name;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)netServiceDidPublish:(id)arg1;
- (void)netServiceWillPublish:(id)arg1;
- (unsigned short)port;
- (void)setAdvertisingInfo:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)start;
- (void)stop;

@end
