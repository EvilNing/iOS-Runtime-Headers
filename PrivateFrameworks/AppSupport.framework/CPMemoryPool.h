/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class NSMutableArray;

@interface CPMemoryPool : NSObject {
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    NSMutableArray *_files;
    char *_label;
    } _lock;
    unsigned long long _slotLength;
}

@property(readonly) unsigned long long slotLength;

- (void)dealloc;
- (id)initWithLabel:(const char *)arg1 slotLength:(unsigned long long)arg2;
- (id)nextSlotWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (unsigned long long)slotLength;

@end
