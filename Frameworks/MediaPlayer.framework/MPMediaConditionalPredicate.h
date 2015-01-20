/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaPredicate, NSString;

@interface MPMediaConditionalPredicate : MPMediaPredicate <MPPProtobufferCoding> {
    MPMediaPredicate *_conditionPredicate;
    MPMediaPredicate *_elsePredicate;
    MPMediaPredicate *_thenPredicate;
}

@property(copy,readonly) MPMediaPredicate * conditionPredicate;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy,readonly) MPMediaPredicate * elsePredicate;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) MPMediaPredicate * thenPredicate;

+ (id)predicateWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3;

- (void).cxx_destruct;
- (id)ML3PredicateForContainer;
- (id)ML3PredicateForTrack;
- (id)_ML3PredicateForEntityTypeSelector:(SEL)arg1;
- (id)conditionPredicate;
- (id)elsePredicate;
- (id)initWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3;
- (id)initWithProtobufferDecodableObject:(id)arg1;
- (id)protobufferEncodableObject;
- (id)thenPredicate;

@end
