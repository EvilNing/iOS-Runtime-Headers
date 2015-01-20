/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISURLBag, NSString, SSURLBagContext;

@interface ISLoadURLBagOperation : ISOperation <ISStoreURLOperationDelegate> {
    SSURLBagContext *_context;
    ISURLBag *_outputBag;
}

@property(readonly) ISURLBag * URLBag;
@property(readonly) SSURLBagContext * context;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (id)URLBag;
- (void)_addHeadersToRequestProperties:(id)arg1;
- (void)_postBagDidLoadNotificationWithURLBag:(id)arg1;
- (void)_sendPingsForURLBag:(id)arg1;
- (void)_setOutputURLBag:(id)arg1;
- (bool)_setURLBagWithDictionary:(id)arg1 response:(id)arg2 error:(id*)arg3;
- (id)context;
- (void)dealloc;
- (id)init;
- (id)initWithBagContext:(id)arg1;
- (bool)operation:(id)arg1 shouldSetStoreFrontID:(id)arg2;
- (void)operation:(id)arg1 willSendRequest:(id)arg2;
- (void)run;
- (id)uniqueKey;

@end
