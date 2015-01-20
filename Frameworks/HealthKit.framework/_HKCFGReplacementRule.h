/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSString;

@interface _HKCFGReplacementRule : NSObject {
    NSString *_description;
    unsigned long long _lengthIncrease;
    id _nodeEvaluator;
    NSArray *_rightHandSide;
}

@property(readonly) unsigned long long lengthIncrease;
@property(copy,readonly) id nodeEvaluator;
@property(copy,readonly) NSArray * rightHandSide;

+ (id)ruleWithLHS:(id)arg1 RHS:(id)arg2 nodeEvaluator:(id)arg3;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)lengthIncrease;
- (id)nodeEvaluator;
- (id)rightHandSide;

@end
