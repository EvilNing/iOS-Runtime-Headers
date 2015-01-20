/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SASportsMatchupLineScore : AceObject <SAAceSerializable> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(copy) NSString * period;
@property(copy) NSString * score;
@property(readonly) Class superclass;

+ (id)matchupLineScore;
+ (id)matchupLineScoreWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)period;
- (id)score;
- (void)setPeriod:(id)arg1;
- (void)setScore:(id)arg1;

@end
