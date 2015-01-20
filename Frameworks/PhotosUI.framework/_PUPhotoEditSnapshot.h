/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSData, PHAdjustmentData;

@interface _PUPhotoEditSnapshot : NSObject {
    PHAdjustmentData *_adjustmentData;
    NSData *_baseImageData;
    NSData *_imageData;
    long long _workImageVersion;
}

@property(retain) PHAdjustmentData * adjustmentData;
@property(retain) NSData * baseImageData;
@property(retain) NSData * imageData;
@property long long workImageVersion;

- (void).cxx_destruct;
- (id)_copyData:(id)arg1;
- (id)adjustmentData;
- (id)baseImageData;
- (id)imageData;
- (void)setAdjustmentData:(id)arg1;
- (void)setBaseImageData:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setWorkImageVersion:(long long)arg1;
- (long long)workImageVersion;

@end
