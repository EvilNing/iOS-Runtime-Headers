/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class PHImageRequestOptions;

@interface PHImageRequest : PHImageManagerRequest {
    struct CGSize { 
        double width; 
        double height; 
    int _bestFormat;
    long long _contentMode;
    int _degradedFormat;
    PHImageRequestOptions *_options;
    id _resultHandler;
    } _targetSize;
}

@property int bestFormat;
@property(readonly) long long contentMode;
@property int degradedFormat;
@property(readonly) PHImageRequestOptions * options;
@property(copy,readonly) id resultHandler;
@property(readonly) struct CGSize { double x1; double x2; } targetSize;

+ (id)descriptionWithContentMode:(long long)arg1;
+ (id)imageRequestWithAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 domain:(id)arg5 resultHandler:(id)arg6;

- (void).cxx_destruct;
- (int)bestFormat;
- (void)clearResultHandler;
- (void)cloneIDAndResultHandlerFromRequest:(id)arg1;
- (long long)contentMode;
- (int)degradedFormat;
- (id)description;
- (id)initImageRequestWithAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 domain:(id)arg5 resultHandler:(id)arg6;
- (id)options;
- (id)resultHandler;
- (void)setBestFormat:(int)arg1;
- (void)setDegradedFormat:(int)arg1;
- (struct CGSize { double x1; double x2; })targetSize;

@end
