/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSData, NSString;

@interface MCEmailAccountPayloadBase : MCPayload {
    NSData *_SMIMEEncryptionIdentityPersistentID;
    NSString *_SMIMEEncryptionIdentityUUID;
    NSData *_SMIMESigningIdentityPersistentID;
    NSString *_SMIMESigningIdentityUUID;
    bool_SMIMEEnabled;
    bool_SMIMEPerMessageSwitchEnabled;
    bool_isRecentsSyncingDisabled;
    bool_preventAppSheet;
    bool_preventMove;
}

@property bool SMIMEEnabled;
@property(retain) NSData * SMIMEEncryptionIdentityPersistentID;
@property(retain) NSString * SMIMEEncryptionIdentityUUID;
@property bool SMIMEPerMessageSwitchEnabled;
@property(retain) NSData * SMIMESigningIdentityPersistentID;
@property(retain) NSString * SMIMESigningIdentityUUID;
@property bool isRecentsSyncingDisabled;
@property bool preventAppSheet;
@property bool preventMove;

- (void).cxx_destruct;
- (bool)SMIMEEnabled;
- (id)SMIMEEncryptionIdentityPersistentID;
- (id)SMIMEEncryptionIdentityUUID;
- (bool)SMIMEPerMessageSwitchEnabled;
- (id)SMIMESigningIdentityPersistentID;
- (id)SMIMESigningIdentityUUID;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (bool)isRecentsSyncingDisabled;
- (id)payloadDescriptionKeyValueSections;
- (bool)preventAppSheet;
- (bool)preventMove;
- (void)setIsRecentsSyncingDisabled:(bool)arg1;
- (void)setPreventAppSheet:(bool)arg1;
- (void)setPreventMove:(bool)arg1;
- (void)setSMIMEEnabled:(bool)arg1;
- (void)setSMIMEEncryptionIdentityPersistentID:(id)arg1;
- (void)setSMIMEEncryptionIdentityUUID:(id)arg1;
- (void)setSMIMEPerMessageSwitchEnabled:(bool)arg1;
- (void)setSMIMESigningIdentityPersistentID:(id)arg1;
- (void)setSMIMESigningIdentityUUID:(id)arg1;
- (id)stubDictionary;

@end
