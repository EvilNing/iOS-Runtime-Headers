/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSMapTable, NSMutableArray;

@interface VMUVMRegionIdentifier : NSObject {
    NSMapTable *_mallocZoneStatisticsMap;
    NSMutableArray *_regions;
}

- (void)dealloc;
- (id)descriptionForMallocZoneTotalsWithOptions:(unsigned long long)arg1;
- (id)descriptionForRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2;
- (id)descriptionForRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)descriptionForRegionTotalsWithOptions:(unsigned long long)arg1;
- (id)initWithTask:(unsigned int)arg1 options:(unsigned long long)arg2;
- (id)initWithTask:(unsigned int)arg1;
- (id)regions;

@end
