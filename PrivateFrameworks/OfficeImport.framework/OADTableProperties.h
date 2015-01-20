/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSArray, NSString, OADTableStyle;

@interface OADTableProperties : OADDrawableProperties <OADEffectsParent> {
    boolmBandColumn;
    boolmBandRow;
    boolmFirstColumn;
    boolmFirstRow;
    boolmLastColumn;
    boolmLastRow;
    boolmRightToLeft;
    NSArray *mEffects;
    OADTableStyle *mStyle;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (id)defaultProperties;

- (bool)bandColumn;
- (bool)bandRow;
- (void)dealloc;
- (id)effects;
- (bool)firstColumn;
- (bool)firstRow;
- (bool)hasBandsNormalToDir:(int)arg1;
- (bool)hasEffects;
- (bool)hasVectorNormalToDir:(int)arg1 atExtremePos:(int)arg2;
- (id)initWithDefaults;
- (bool)lastColumn;
- (bool)lastRow;
- (bool)rightToLeft;
- (void)setBandColumn:(bool)arg1;
- (void)setBandRow:(bool)arg1;
- (void)setEffects:(id)arg1;
- (void)setFirstColumn:(bool)arg1;
- (void)setFirstRow:(bool)arg1;
- (void)setLastColumn:(bool)arg1;
- (void)setLastRow:(bool)arg1;
- (void)setRightToLeft:(bool)arg1;
- (void)setStyle:(id)arg1;
- (id)style;

@end
