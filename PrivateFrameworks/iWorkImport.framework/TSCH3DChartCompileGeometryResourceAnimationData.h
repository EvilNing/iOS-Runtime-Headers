/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCH3DChartAnimationDataGeometryResource;

@interface TSCH3DChartCompileGeometryResourceAnimationData : TSCH3DChartCompileAnimationData {
    TSCH3DChartAnimationDataGeometryResource *mCurrentData;
}

+ (id)geometryResourceAnimationDataForScene:(id)arg1 seriesIndex:(unsigned long long)arg2;
+ (void)submitToProcessor:(id)arg1 portion:(int)arg2 scene:(id)arg3 seriesIndex:(unsigned long long)arg4;

- (void)addAreaGeometryCapAttributes;
- (bool)compileEntireBuffer;
- (id)compiledGeometry;
- (void)dealloc;
- (void)didProcessElementArraysForElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3 compiler:(id)arg4;
- (struct GeometryArrays { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })p_cullBackfaces;
- (id)p_makeWholeBufferWithClass:(Class)arg1;
- (void)processElementArrays;
- (bool)transformBuffers;

@end
