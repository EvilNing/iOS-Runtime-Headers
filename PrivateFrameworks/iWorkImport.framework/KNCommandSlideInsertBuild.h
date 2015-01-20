/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class KNBuild, KNSlideNode;

@interface KNCommandSlideInsertBuild : TSKCommand {
    boolmShouldCreateChunks;
    KNBuild *mBuild;
    unsigned long long mIndex;
    KNSlideNode *mSlideNode;
}

@property(readonly) KNBuild * build;
@property(readonly) unsigned long long index;
@property(readonly) KNSlideNode * slideNode;

- (id)build;
- (void)commit;
- (void)dealloc;
- (unsigned long long)index;
- (id)initWithSlideNode:(id)arg1 build:(id)arg2 atIndex:(unsigned long long)arg3 createChunks:(bool)arg4;
- (id)initWithSlideNode:(id)arg1 build:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)p_buildAtPriorIndex;
- (void)p_do;
- (unsigned long long)p_indexForInsertingChunks;
- (void)p_insertBuildChunks:(id)arg1;
- (bool)process;
- (void)redo;
- (id)slideNode;
- (void)undo;

@end
