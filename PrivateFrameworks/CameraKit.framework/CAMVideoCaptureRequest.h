/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMVideoCaptureRequest : CAMCaptureRequest <NSCopying, NSMutableCopying> {
    long long _captureDevice;
    long long _deviceOrientation;
    long long _torchMode;
}

@property(readonly) long long captureDevice;
@property(readonly) long long deviceOrientation;
@property(readonly) long long torchMode;

- (long long)captureDevice;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)deviceOrientation;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)torchMode;

@end
