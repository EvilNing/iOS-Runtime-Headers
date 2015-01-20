/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@class BKSEventFocusDeferralProperties;

@interface BKSEventFocusDeferral : NSObject <NSSecureCoding> {
    BKSEventFocusDeferralProperties *_deferredProperties;
    BKSEventFocusDeferralProperties *_properties;
}

@property(readonly) BKSEventFocusDeferralProperties * deferredProperties;
@property(readonly) BKSEventFocusDeferralProperties * properties;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (id)deferredProperties;
- (id)deferredPropertiesForProperties:(id)arg1;
- (bool)defersProperties:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProperties:(id)arg1 deferredProperties:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)properties;

@end
