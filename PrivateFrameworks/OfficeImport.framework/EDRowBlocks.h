/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDCollection, EDWorksheet, NSMutableArray, NSRecursiveLock, NSString;

@interface EDRowBlocks : NSObject <TSUFlushable> {
    NSString *mFileName;
    EDCollection *mFormulas;
    int mLockCount;
    unsigned int mMaxPopulatedColumn;
    unsigned int mMaxPopulatedRow;
    NSMutableArray *mRowBlocks;
    NSRecursiveLock *mSaveLoadLock;
    EDWorksheet *mWorksheet;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (struct EDCellHeader { unsigned int x1; unsigned int x2; }*)cellWithRowNumber:(unsigned int)arg1 columnNumber:(int)arg2;
- (Class)classForFormulaType:(unsigned char)arg1;
- (void)dealloc;
- (unsigned long long)expectedIndexOfRowBlockForRowNumber:(unsigned int)arg1;
- (id)fileNameForPersistingRowBlocks;
- (void)flush;
- (unsigned char)formulaTypeForFormula:(id)arg1;
- (id)formulas;
- (unsigned long long)indexOfRowBlockForRowNumber:(unsigned int)arg1;
- (id)initWithWorksheet:(id)arg1;
- (void)load;
- (void)lock;
- (unsigned int)maxPopulatedColumn;
- (unsigned int)maxPopulatedRow;
- (void)removeRowBlockAtIndex:(unsigned long long)arg1;
- (id)rowBlockAtIndex:(unsigned long long)arg1;
- (unsigned long long)rowBlockCount;
- (id)rowBlockForRowNumber:(unsigned int)arg1 currentRowBlock:(id)arg2 createIfNil:(bool)arg3;
- (id)rowBlockForRowNumber:(unsigned int)arg1 currentRowBlock:(id)arg2;
- (void)save;
- (bool)spaceForRowNumber:(unsigned int)arg1 rowBlock:(id)arg2;
- (void)unlock;
- (void)updateMaxPopulatedRow:(unsigned int)arg1 column:(unsigned int)arg2;

@end
