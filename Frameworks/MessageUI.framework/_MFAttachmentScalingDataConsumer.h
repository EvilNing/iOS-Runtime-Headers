/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFConditionLock, MFGenericAttachmentStore;

@interface _MFAttachmentScalingDataConsumer : MFCountingDataConsumer {
    MFConditionLock *_lock;
    MFGenericAttachmentStore *_store;
}

@property MFConditionLock * lock;
@property MFGenericAttachmentStore * store;

- (long long)appendData:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (void)setStore:(id)arg1;
- (id)store;

@end
