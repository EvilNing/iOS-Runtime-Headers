/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, SASettingEntity;

@interface SASettingSetValueResponse : SASettingResponse <SASettingSupplier> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) SASettingEntity * setting;
@property(readonly) Class superclass;

+ (id)setValueResponse;
+ (id)setValueResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
