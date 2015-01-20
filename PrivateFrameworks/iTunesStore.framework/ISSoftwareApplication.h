/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSArray, NSDate, NSNumber, NSString, SSItemContentRating;

@interface ISSoftwareApplication : NSObject <SSXPCCoding> {
    NSNumber *_accountDSID;
    NSString *_accountIdentifier;
    NSString *_bundleIdentifier;
    NSString *_bundleShortVersionString;
    NSString *_bundleVersion;
    NSString *_containerPath;
    SSItemContentRating *_contentRating;
    NSString *_deviceIdentifierForVendor;
    NSNumber *_familyAccountIdentifier;
    NSNumber *_itemIdentifier;
    NSString *_itemName;
    NSDate *_receiptExpirationDate;
    NSString *_softwareType;
    NSNumber *_storeFrontIdentifier;
    NSString *_vendorName;
    NSNumber *_versionIdentifier;
    NSArray *_versionOrdering;
    unsigned long long _vppStateFlags;
    bool_beta;
    bool_placeholder;
    bool_profileValidated;
}

@property(retain) NSNumber * accountDSID;
@property(copy) NSString * accountIdentifier;
@property(getter=isBeta) bool beta;
@property(copy) NSString * bundleIdentifier;
@property(copy) NSString * bundleShortVersionString;
@property(copy) NSString * bundleVersion;
@property(copy) NSString * containerPath;
@property(copy) SSItemContentRating * contentRating;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy) NSString * deviceIdentifierForVendor;
@property(copy) NSNumber * familyAccountIdentifier;
@property(readonly) unsigned long long hash;
@property(retain) NSNumber * itemIdentifier;
@property(copy) NSString * itemName;
@property(getter=isPlaceholder) bool placeholder;
@property(getter=isProfileValidated) bool profileValidated;
@property(readonly) NSDate * receiptExpirationDate;
@property(copy) NSString * softwareType;
@property(retain) NSNumber * storeFrontIdentifier;
@property(readonly) Class superclass;
@property(copy) NSString * vendorName;
@property(retain) NSNumber * versionIdentifier;
@property(copy) NSArray * versionOrdering;
@property(readonly) unsigned long long vppStateFlags;

- (id)ITunesMetadataDictionary;
- (void)_loadMetadataFromContainer:(id)arg1;
- (id)accountDSID;
- (id)accountIdentifier;
- (id)bundleIdentifier;
- (id)bundleShortVersionString;
- (id)bundleVersion;
- (id)containerPath;
- (id)contentRating;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (id)deviceIdentifierForVendor;
- (id)familyAccountIdentifier;
- (id)initWithLaunchServicesApplication:(id)arg1 containerPath:(id)arg2;
- (id)initWithLaunchServicesApplication:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isBeta;
- (bool)isPlaceholder;
- (bool)isProfileValidated;
- (id)itemIdentifier;
- (id)itemName;
- (id)receiptExpirationDate;
- (void)resetVPPStateFlags;
- (void)setAccountDSID:(id)arg1;
- (void)setAccountIdentifier:(id)arg1;
- (void)setBeta:(bool)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundleShortVersionString:(id)arg1;
- (void)setBundleVersion:(id)arg1;
- (void)setContainerPath:(id)arg1;
- (void)setContentRating:(id)arg1;
- (void)setDeviceIdentifierForVendor:(id)arg1;
- (void)setFamilyAccountIdentifier:(id)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setItemName:(id)arg1;
- (void)setPlaceholder:(bool)arg1;
- (void)setProfileValidated:(bool)arg1;
- (void)setSoftwareType:(id)arg1;
- (void)setStoreFrontIdentifier:(id)arg1;
- (void)setVendorName:(id)arg1;
- (void)setVersionIdentifier:(id)arg1;
- (void)setVersionOrdering:(id)arg1;
- (id)softwareType;
- (id)storeFrontIdentifier;
- (id)vendorName;
- (id)versionIdentifier;
- (id)versionOrdering;
- (unsigned long long)vppStateFlags;

@end
