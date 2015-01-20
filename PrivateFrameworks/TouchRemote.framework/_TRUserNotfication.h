/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface _TRUserNotfication : NSObject {
    int _response;
    unsigned long long _responseFlags;
    struct __CFUserNotification { } *_userNotification;
}

@property(readonly) struct __CFUserNotification { }* CFUserNotification;
@property(readonly) int response;
@property(readonly) unsigned long long responseFlags;

- (struct __CFUserNotification { }*)CFUserNotification;
- (void)cancel;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1 options:(unsigned long long)arg2 error:(int*)arg3;
- (int)response;
- (unsigned long long)responseFlags;
- (void)show;

@end
