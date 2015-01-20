/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@class NSDate, NSMutableArray, NSMutableDictionary;

@interface PLTimeReferenceDynamic : PLTimeReference {
    double _accumulatedError;
    NSDate *_lastQueryTime;
    NSMutableArray *_offsetHistory;
    NSMutableDictionary *_timeChangeBlocks;
    double _tooFarInFutureDistance;
    double _tooFarInPastDistance;
}

@property double accumulatedError;
@property(retain) NSDate * lastQueryTime;
@property(retain) NSMutableArray * offsetHistory;
@property(retain) NSMutableDictionary * timeChangeBlocks;
@property double tooFarInFutureDistance;
@property double tooFarInPastDistance;

+ (double)nearestDistanceFromDate:(id)arg1 toRegionWithStartDate:(id)arg2 andEndDate:(id)arg3;

- (void).cxx_destruct;
- (double)accumulatedError;
- (void)checkForTimeChangeWithCurrentTime:(id)arg1;
- (void)cleanupOffsetHistory;
- (id)initWithTimeManager:(id)arg1 entryDefinitionKey:(id)arg2 timeReferenceType:(long long)arg3;
- (void)initializeOffsetWithEntry:(id)arg1;
- (id)lastQueryTime;
- (id)newOffsetEntry;
- (void)notifyTimeChange:(double)arg1;
- (id)offsetHistory;
- (void)registerForTimeChangedCallbackWithIdentifier:(id)arg1 usingBlock:(id)arg2;
- (void)registerForTimeChangedNotification;
- (id)removeTimeOffsetFromReferenceTime:(id)arg1;
- (void)setAccumulatedError:(double)arg1;
- (void)setLastQueryTime:(id)arg1;
- (void)setOffset:(double)arg1;
- (void)setOffsetHistory:(id)arg1;
- (void)setTimeChangeBlocks:(id)arg1;
- (void)setTooFarInFutureDistance:(double)arg1;
- (void)setTooFarInPastDistance:(double)arg1;
- (bool)shouldQueryCurrentTime;
- (id)timeChangeBlocks;
- (double)tooFarInFutureDistance;
- (double)tooFarInPastDistance;
- (void)unregisterForTimeChangedCallbackWithIdentifier:(id)arg1;

@end
