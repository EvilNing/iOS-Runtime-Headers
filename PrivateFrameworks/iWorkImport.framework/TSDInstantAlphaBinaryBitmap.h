/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDInstantAlphaBinaryBitmap : NSObject {
    char *mData;
    long long mHeight;
    long long mRowBytes;
    long long mWidth;
}

@property(readonly) char * data;
@property(readonly) long long height;
@property(readonly) long long rowBytes;
@property(readonly) long long width;

- (char *)data;
- (void)dealloc;
- (long long)height;
- (id)initWithWidth:(long long)arg1 height:(long long)arg2 rowBytes:(long long)arg3;
- (id)initWithWidth:(long long)arg1 height:(long long)arg2;
- (id)medianBitmap;
- (long long)rowBytes;
- (void)unionWithBitmap:(id)arg1;
- (long long)width;

@end
