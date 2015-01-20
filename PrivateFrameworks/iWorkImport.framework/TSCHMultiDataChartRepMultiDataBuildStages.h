/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCHMultiDataChartRep;

@interface TSCHMultiDataChartRepMultiDataBuildStages : NSObject <TSCHUnretainedParent> {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    unsigned long long mCurrentStage;
    double mDuration;
    TSCHMultiDataChartRep *mRep;
    } mStages;
    double mTotalDuration;
}

@property(readonly) unsigned long long currentStage;
@property(readonly) double duration;

+ (id)buildStagesWithRep:(id)arg1 stages:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 totalDuration:(double)arg3;
+ (unsigned long long)dataSetIndexForRep:(id)arg1 buildStage:(unsigned long long)arg2;
+ (unsigned long long)numberOfFadingBuildStages;

- (id).cxx_construct;
- (void)advanceStage;
- (id)chartLayout;
- (void)clearParent;
- (unsigned long long)currentStage;
- (unsigned long long)dataSetIndexForStage:(unsigned long long)arg1;
- (void)dealloc;
- (double)duration;
- (bool)hasStage;
- (id)initWithRep:(id)arg1 stages:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 totalDuration:(double)arg3;
- (bool)isBackgroundOnly;
- (bool)isBackgroundOnlyStage:(unsigned long long)arg1;
- (bool)isFadingInLayers;
- (bool)isLastStageBackgroundOnly;
- (void)setupLayoutDataSetIndexForCurrentStage;
- (void)setupLayoutDataSetIndexForNextStage;

@end
