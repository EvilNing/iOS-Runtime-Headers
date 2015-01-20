/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSUImage;

@interface TSCH3DTileImage : TSCH3DTile {
    TSUImage *mImage;
}

@property(readonly) struct CGImage { }* CGImage;

+ (id)imageWithTSUImage:(id)arg1 bounds:(const struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; } x1; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_2_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_2_1_2; } x2; }*)arg2;

- (struct CGImage { }*)CGImage;
- (void)dealloc;
- (id)description;
- (id)initWithTSUImage:(id)arg1 bounds:(const struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; } x1; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_2_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_2_1_2; } x2; }*)arg2;
- (bool)renderIntoContext:(struct CGContext { }*)arg1;

@end
