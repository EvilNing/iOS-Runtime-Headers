/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSMutableArray, PKPassFieldTemplate;

@interface PKPassFaceTemplate : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    } _barcodeMaxSize;
    double _barcodeVerticalInset;
    NSMutableArray *_bucketTemplates;
    PKPassFieldTemplate *_defaultFieldTemplate;
}

@property double barcodeBottomInset;
@property struct CGSize { double x1; double x2; } barcodeMaxSize;
@property(retain) NSMutableArray * bucketTemplates;
@property(retain) PKPassFieldTemplate * defaultFieldTemplate;

- (void)addBucketTemplate:(id)arg1;
- (double)barcodeBottomInset;
- (struct CGSize { double x1; double x2; })barcodeMaxSize;
- (id)bucketTemplates;
- (void)dealloc;
- (id)defaultFieldTemplate;
- (void)setBarcodeBottomInset:(double)arg1;
- (void)setBarcodeMaxSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setBucketTemplates:(id)arg1;
- (void)setDefaultFieldTemplate:(id)arg1;
- (id)templateForBucketAtIndex:(unsigned long long)arg1;

@end
