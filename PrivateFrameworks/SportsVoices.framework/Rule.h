/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
 */

@class NewProduction, SlotsInContext;

@interface Rule : GrammarPart {
    SlotsInContext *_leftHandSide;
    NewProduction *_rightHandSide;
    bool_repeat;
}

+ (id)instanceFromPlist:(id)arg1;
+ (id)ruleWithLeftHandSide:(id)arg1 rightHandSide:(id)arg2;
+ (id)test;

- (id)appliedTo:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initFromPlist:(id)arg1;
- (id)initWithLeftHandSide:(id)arg1 rightHandSide:(id)arg2;
- (id)initWithLeftHandSide:(id)arg1 rightHandSideOverlays:(id)arg2 rightHandSideBaseIndices:(id)arg3;

@end
