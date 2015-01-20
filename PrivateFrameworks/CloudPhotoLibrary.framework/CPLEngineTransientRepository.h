/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class CPLPlatformObject, NSMutableArray, NSString;

@interface CPLEngineTransientRepository : CPLEngineStorage <CPLAbstractObject> {
    unsigned long long _maximumCountOfRecordsInBatches;
    unsigned long long _popState;
    NSMutableArray *_remainingClassesToBePopped;
    unsigned long long _state;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property unsigned long long maximumCountOfRecordsInBatches;
@property(readonly) CPLPlatformObject * platformObject;
@property(readonly) Class superclass;

+ (id)orderedClassesForChanges;
+ (id)orderedClassesForDelete;

- (void).cxx_destruct;
- (bool)_appendBatchToStorage:(id)arg1 alreadyMingled:(bool)arg2 error:(id*)arg3;
- (id)_changeWithIdentifier:(id)arg1;
- (bool)_popChangeBatchOfChangedRecords:(id*)arg1 maximumCount:(unsigned long long)arg2 error:(id*)arg3;
- (bool)_popChangeBatchOfDeletedRecords:(id*)arg1 maximumCount:(unsigned long long)arg2 error:(id*)arg3;
- (bool)appendBatch:(id)arg1 alreadyMingled:(bool)arg2 error:(id*)arg3;
- (bool)beginTransientRepositoryWithError:(id*)arg1;
- (bool)deleteMingledRecordsWithError:(id*)arg1;
- (bool)endTransientRepositoryWithError:(id*)arg1;
- (bool)hasRecordWithIdentifier:(id)arg1;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;
- (unsigned long long)maximumCountOfRecordsInBatches;
- (bool)openWithError:(id*)arg1;
- (bool)popChangeBatch:(id*)arg1 error:(id*)arg2;
- (bool)prepareForMinglingWithError:(id*)arg1;
- (bool)resetMingledRecordsWithError:(id*)arg1;
- (bool)resetTransientRepositoryWithError:(id*)arg1;
- (void)setMaximumCountOfRecordsInBatches:(unsigned long long)arg1;
- (bool)storeTransientSyncAnchor:(id)arg1 error:(id*)arg2;
- (id)transientSyncAnchor;

@end
