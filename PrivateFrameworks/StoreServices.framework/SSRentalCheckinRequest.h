/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSNumber;

@interface SSRentalCheckinRequest : SSRequest {
    NSNumber *_accountIdentifier;
    NSNumber *_rentalKeyIdentifier;
}

@property(readonly) NSNumber * accountIdentifier;
@property(readonly) NSNumber * rentalKeyIdentifier;

- (id)accountIdentifier;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)init;
- (id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2;
- (id)initWithXPCEncoding:(id)arg1;
- (id)rentalKeyIdentifier;
- (void)startWithCompletionBlock:(id)arg1;
- (void)startWithConnectionResponseBlock:(id)arg1;

@end
