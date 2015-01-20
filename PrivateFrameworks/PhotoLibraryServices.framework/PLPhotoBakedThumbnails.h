/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSData, NSMutableArray, NSMutableDictionary;

@interface PLPhotoBakedThumbnails : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    unsigned long long _count;
    int _format;
    NSMutableDictionary *_options;
    NSData *_optionsData;
    int _singleThumbnailImageLength;
    } _size;
    NSData *_thumbnailData;
    NSMutableArray *_thumbnailImages;
    bool_dataIsMutable;
    bool_missingHeader;
    bool_optionsAccessed;
}

@property(readonly) unsigned int bitmapInfo;
@property(readonly) int bitsPerComponent;
@property(readonly) int bytesPerPixel;
@property(readonly) int format;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } imageRect;
@property(retain,readonly) NSMutableDictionary * options;
@property(retain,readonly) NSData * optionsData;
@property(readonly) struct CGSize { double x1; double x2; } size;

+ (bool)saveBakedThumbnailsOfImages:(id)arg1 toFile:(id)arg2 format:(int)arg3 orientation:(int*)arg4 options:(id)arg5 delegate:(id)arg6;
+ (id)thumbnailsWithContentsOfFile:(id)arg1 format:(int)arg2;

- (id)_thumbnailData;
- (unsigned int)bitmapInfo;
- (int)bitsPerComponent;
- (int)bytesPerPixel;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (int)format;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageRect;
- (id)initWithContentsOfFile:(id)arg1 format:(int)arg2 readOnly:(bool)arg3;
- (id)initWithContentsOfFile:(id)arg1 format:(int)arg2;
- (id)initWithData:(id)arg1 format:(int)arg2 readOnly:(bool)arg3;
- (id)initWithData:(id)arg1 format:(int)arg2;
- (id)initWithImages:(id)arg1 format:(int)arg2 orientation:(int*)arg3 options:(id)arg4 delegate:(id)arg5;
- (id)options;
- (id)optionsData;
- (bool)saveToFile:(id)arg1;
- (id)serializedData;
- (struct CGSize { double x1; double x2; })size;
- (char *)thumbnailBytesAtIndex:(long long)arg1;
- (id)thumbnailDataAtIndex:(long long)arg1;
- (struct CGImage { }*)thumbnailImageAtIndex:(long long)arg1;
- (unsigned long long)thumbnailLength;
- (bool)writeBorderedThumbnailOfImage:(struct CGImage { }*)arg1 toBuffer:(void*)arg2 orientation:(int*)arg3 format:(int)arg4 formatInfo:(const struct { int x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; unsigned int x5; int x6; int x7; double x8[4]; double x9[4]; unsigned int x10; }*)arg5 delegate:(id)arg6;

@end
