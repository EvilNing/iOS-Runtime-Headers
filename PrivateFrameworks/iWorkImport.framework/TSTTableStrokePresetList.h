/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSTTableStrokePresetData;

@interface TSTTableStrokePresetList : NSObject {
    unsigned long long mCount;
    TSTTableStrokePresetData *mPresets[15];
}

+ (id)init;
+ (id)instanceWithArchive:(const struct StrokePresetListArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct RepeatedPtrField<TST::Deprecated_StrokePresetDataArchive> { void **x_3_1_1; int x_3_1_2; int x_3_1_3; int x_3_1_4; } x3; struct RepeatedPtrField<TST::StrokePresetDataArchive> { void **x_4_1_1; int x_4_1_2; int x_4_1_3; int x_4_1_4; } x4; int x5; int x6; unsigned int x7[1]; }*)arg1 unarchiver:(id)arg2;
+ (id)strokePresetListForDefaultPropertyMapForTablePresetID:(unsigned long long)arg1 colors:(id)arg2;
+ (id)strokePresetListForDefaultPropertyMapWithFatStroke:(id)arg1 andThinStroke:(id)arg2;
+ (id)strokePresetListForDefaultPropertyMapWithHorizontalStroke:(id)arg1 verticalStroke:(id)arg2 exteriorStroke:(id)arg3;

- (unsigned long long)count;
- (void)dealloc;
- (id)exteriorStrokeForStrokePreset:(unsigned long long)arg1;
- (id)horizontalStrokeForStrokePreset:(unsigned long long)arg1;
- (id)initWithArchive:(const struct StrokePresetListArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct RepeatedPtrField<TST::Deprecated_StrokePresetDataArchive> { void **x_3_1_1; int x_3_1_2; int x_3_1_3; int x_3_1_4; } x3; struct RepeatedPtrField<TST::StrokePresetDataArchive> { void **x_4_1_1; int x_4_1_2; int x_4_1_3; int x_4_1_4; } x4; int x5; int x6; unsigned int x7[1]; }*)arg1 unarchiver:(id)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned int)maskForStrokePreset:(unsigned long long)arg1;
- (unsigned int)maskForStrokePresets:(id)arg1;
- (id)presetAtIndex:(unsigned long long)arg1;
- (void)saveToArchive:(struct StrokePresetListArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct RepeatedPtrField<TST::Deprecated_StrokePresetDataArchive> { void **x_3_1_1; int x_3_1_2; int x_3_1_3; int x_3_1_4; } x3; struct RepeatedPtrField<TST::StrokePresetDataArchive> { void **x_4_1_1; int x_4_1_2; int x_4_1_3; int x_4_1_4; } x4; int x5; int x6; unsigned int x7[1]; }*)arg1 archiver:(id)arg2;
- (void)setStroke:(id)arg1 forPresetIndex:(unsigned long long)arg2;
- (void)setStrokePreset:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)verticalStrokeForStrokePreset:(unsigned long long)arg1;

@end
