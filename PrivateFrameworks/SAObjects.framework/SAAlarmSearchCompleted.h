/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString;

@interface SAAlarmSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(copy) NSString * refId;
@property(copy) NSArray * results;
@property(readonly) Class superclass;

+ (id)searchCompleted;
+ (id)searchCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)searchCompletedWithResults:(id)arg1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)initWithResults:(id)arg1;
- (id)results;
- (void)setResults:(id)arg1;

@end
