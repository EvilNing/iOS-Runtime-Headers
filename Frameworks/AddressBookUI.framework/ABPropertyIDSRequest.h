/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSString;

@interface ABPropertyIDSRequest : NSObject <IDSIDQueryControllerDelegate> {
    id _idQueryResultHandler;
    NSString *_listenerID;
    NSArray *_propertyItems;
    id _requestResultBlock;
    NSString *_service;
    bool_cancelled;
}

@property bool cancelled;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(copy) id idQueryResultHandler;
@property(retain) NSString * listenerID;
@property(retain) NSArray * propertyItems;
@property(copy) id requestResultBlock;
@property(retain) NSString * service;
@property(readonly) Class superclass;

- (void)_requestStatusOnMainQueue:(bool)arg1;
- (void)cancel;
- (bool)cancelled;
- (void)dealloc;
- (id)idQueryResultHandler;
- (void)idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2;
- (id)initWithPropertyItems:(id)arg1 service:(id)arg2 postToMainQueue:(bool)arg3 resultBlock:(id)arg4;
- (id)listenerID;
- (id)propertyItems;
- (id)requestResultBlock;
- (id)service;
- (void)setCancelled:(bool)arg1;
- (void)setIdQueryResultHandler:(id)arg1;
- (void)setListenerID:(id)arg1;
- (void)setPropertyItems:(id)arg1;
- (void)setRequestResultBlock:(id)arg1;
- (void)setService:(id)arg1;

@end
