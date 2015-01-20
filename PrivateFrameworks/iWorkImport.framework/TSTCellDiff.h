/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSSPropertyMap;

@interface TSTCellDiff : TSPObject <NSCopying> {
    TSSPropertyMap *_propertyMapToReset;
    TSSPropertyMap *_propertyMapToSet;
    TSSPropertyMap *mPropertyMapToReset;
    TSSPropertyMap *mPropertyMapToSet;
}

@property(readonly) TSSPropertyMap * propertyMapToReset;
@property(readonly) TSSPropertyMap * propertyMapToSet;

+ (id)cellDiff;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)objectApplyingDiffToObject:(id)arg1 andUpdateInverse:(id)arg2;
- (id)propertyMapToReset;
- (id)propertyMapToSet;
- (void)resetFloatValue:(float)arg1 forProperty:(int)arg2;
- (void)resetIntValue:(int)arg1 forProperty:(int)arg2;
- (void)resetObject:(id)arg1 forProperty:(int)arg2;
- (bool)resetsProperty:(int)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)setFloatValue:(float)arg1 forProperty:(int)arg2;
- (void)setIntValue:(int)arg1 forProperty:(int)arg2;
- (void)setObject:(id)arg1 forProperty:(int)arg2;
- (void)setPropertiesFromMap:(id)arg1;
- (bool)setsProperty:(int)arg1;

@end
