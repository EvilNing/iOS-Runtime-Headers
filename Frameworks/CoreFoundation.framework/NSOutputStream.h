/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSOutputStream : NSStream {
}

@property(readonly) bool hasSpaceAvailable;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)outputStreamToBuffer:(char *)arg1 capacity:(unsigned long long)arg2;
+ (id)outputStreamToFileAtPath:(id)arg1 append:(bool)arg2;
+ (id)outputStreamToMemory;
+ (id)outputStreamWithURL:(id)arg1 append:(bool)arg2;

- (struct { long long x1; int x2; })_cfStreamError;
- (unsigned long long)_cfTypeID;
- (bool)hasSpaceAvailable;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;

@end
