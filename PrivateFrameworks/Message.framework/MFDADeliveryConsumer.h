/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFError;

@interface MFDADeliveryConsumer : MFDAMailAccountConsumer <DAMessageSendConsumer> {
    unsigned long long _bytesRead;
    unsigned long long _bytesWritten;
    MFError *_error;
    int _status;
}

@property(readonly) unsigned long long bytesRead;
@property(readonly) unsigned long long bytesWritten;
@property(retain) MFError * error;
@property(readonly) int status;

- (void)actionFailed:(long long)arg1 forTask:(id)arg2 error:(id)arg3;
- (unsigned long long)bytesRead;
- (unsigned long long)bytesWritten;
- (void)dealloc;
- (id)error;
- (void)messageDidSendWithContext:(id)arg1 sentBytesCount:(unsigned long long)arg2 receivedBytesCount:(unsigned long long)arg3;
- (void)setError:(id)arg1;
- (int)status;

@end
