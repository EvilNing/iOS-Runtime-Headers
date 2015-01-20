/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@class NSString;

@interface SCRCMathFencedExpression : SCRCMathRowExpression {
    NSString *_closeString;
    NSString *_openString;
}

@property(copy) NSString * closeString;
@property(copy) NSString * openString;

- (id)_binomialCoefficientContent;
- (bool)_isBinomialCoefficient;
- (id)_treePositionForBinomialCoefficientContentWithOuterTreePosition:(id)arg1;
- (id)closeString;
- (void)dealloc;
- (id)description;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;
- (unsigned long long)fractionLevel;
- (id)initWithDictionary:(id)arg1;
- (id)latexDescriptionInMathMode:(bool)arg1;
- (id)mathMLAttributes;
- (id)mathMLTag;
- (id)openString;
- (void)setCloseString:(id)arg1;
- (void)setOpenString:(id)arg1;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(bool)arg2;
- (id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;

@end
