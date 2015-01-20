/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSArray, NSData, NSString;

@interface MCProfileServiceProfile : MCProfile {
    NSString *_URLString;
    NSArray *_bogusPayloads;
    id _challenge;
    NSArray *_deviceAttributes;
    NSData *_enrollmentIdentityPersistentID;
    bool_confirmInstallation;
}

@property(retain) NSString * URLString;
@property(retain,readonly) id challenge;
@property(readonly) bool confirmInstallation;
@property(retain,readonly) NSArray * deviceAttributes;
@property(retain) NSData * enrollmentIdentityPersistentID;

- (void).cxx_destruct;
- (id)URLString;
- (id)_badDataTypeErrorWithFieldName:(id)arg1;
- (id)_unsupportedValueErrorWithFieldName:(id)arg1 value:(id)arg2;
- (id)challenge;
- (bool)confirmInstallation;
- (id)description;
- (id)deviceAttributes;
- (id)enrollmentIdentityPersistentID;
- (id)initWithDictionary:(id)arg1 allowEmptyPayload:(bool)arg2 outError:(id*)arg3;
- (id)localizedManagedPayloadSummaryByType;
- (id)localizedPayloadSummaryByType;
- (id)managedPayloads;
- (id)payloads;
- (void)setEnrollmentIdentityPersistentID:(id)arg1;
- (void)setURLString:(id)arg1;
- (id)stubDictionary;

@end
