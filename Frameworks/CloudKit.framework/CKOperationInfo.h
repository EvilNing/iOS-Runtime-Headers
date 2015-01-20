/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class CKContainerSetupInfo, NSString;

@interface CKOperationInfo : NSObject <NSSecureCoding> {
    NSString *_deviceIdentifier;
    NSString *_operationID;
    id _parentOperation;
    NSString *_parentSectionID;
    long long _qualityOfService;
    CKContainerSetupInfo *_setupInfo;
    NSString *_sourceApplicationBundleIdentifier;
    NSString *_sourceApplicationSecondaryIdentifier;
    long long _usesBackgroundSessionOverride;
    bool_allowsCellularAccess;
}

@property bool allowsCellularAccess;
@property(retain) NSString * deviceIdentifier;
@property(retain) NSString * operationID;
@property id parentOperation;
@property(retain) NSString * parentSectionID;
@property long long qualityOfService;
@property(retain) CKContainerSetupInfo * setupInfo;
@property(retain) NSString * sourceApplicationBundleIdentifier;
@property(retain) NSString * sourceApplicationSecondaryIdentifier;
@property long long usesBackgroundSessionOverride;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsCellularAccess;
- (id)deviceIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)operationID;
- (id)parentOperation;
- (id)parentSectionID;
- (long long)qualityOfService;
- (void)setAllowsCellularAccess:(bool)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setOperationID:(id)arg1;
- (void)setParentOperation:(id)arg1;
- (void)setParentSectionID:(id)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setSetupInfo:(id)arg1;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (void)setSourceApplicationSecondaryIdentifier:(id)arg1;
- (void)setUsesBackgroundSessionOverride:(long long)arg1;
- (id)setupInfo;
- (id)sourceApplicationBundleIdentifier;
- (id)sourceApplicationSecondaryIdentifier;
- (long long)usesBackgroundSessionOverride;

@end
