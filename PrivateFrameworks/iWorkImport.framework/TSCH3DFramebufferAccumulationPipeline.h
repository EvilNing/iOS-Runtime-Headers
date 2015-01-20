/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCH3DFramebufferTransformPipeline<TSCH3DFramebufferAccumulator>, TSCH3DFramebufferTransformPipeline<TSCH3DFramebufferResolver>;

@interface TSCH3DFramebufferAccumulationPipeline : TSCH3DFramebufferTransformPipeline {
    float mAccumulated;
    TSCH3DFramebufferTransformPipeline<TSCH3DFramebufferAccumulator> *mAccumulator;
    float mFactor;
    TSCH3DFramebufferTransformPipeline<TSCH3DFramebufferResolver> *mResolver;
}

@property float accumulated;
@property float factor;

- (bool)accumulate;
- (float)accumulated;
- (void)dealloc;
- (float)factor;
- (void)reset;
- (bool)resolve;
- (bool)run;
- (void)setAccumulated:(float)arg1;
- (void)setFactor:(float)arg1;
- (void)setSource:(id)arg1;
- (void)setTarget:(id)arg1;

@end
