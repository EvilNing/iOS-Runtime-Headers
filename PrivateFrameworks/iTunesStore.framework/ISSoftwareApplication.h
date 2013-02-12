/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSArray, NSNumber, NSString, SSItemContentRating;

@interface ISSoftwareApplication : NSObject <SSXPCCoding> {
    NSNumber *_accountDSID;
    NSString *_accountIdentifier;
    NSString *_bundleIdentifier;
    NSString *_bundleShortVersionString;
    NSString *_bundleVersion;
    NSString *_containerPath;
    SSItemContentRating *_contentRating;
    NSNumber *_itemIdentifier;
    NSString *_itemName;
    BOOL _profileValidated;
    NSString *_softwareType;
    NSNumber *_storeFrontIdentifier;
    NSNumber *_versionIdentifier;
    NSArray *_versionOrdering;
}

@property(retain) NSNumber * accountDSID;
@property(copy) NSString * accountIdentifier;
@property(copy) NSString * bundleIdentifier;
@property(copy) NSString * bundleShortVersionString;
@property(copy) NSString * bundleVersion;
@property(copy) NSString * containerPath;
@property(copy) SSItemContentRating * contentRating;
@property(retain) NSNumber * itemIdentifier;
@property(copy) NSString * itemName;
@property(getter=isProfileValidated) BOOL profileValidated;
@property(copy) NSString * softwareType;
@property(retain) NSNumber * storeFrontIdentifier;
@property(retain) NSNumber * versionIdentifier;
@property(copy) NSArray * versionOrdering;

+ (id)lookupAttributeKeys;

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
- (id)initWithMobileInstallationDictionary:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)isProfileValidated;
- (id)itemIdentifier;
- (id)itemName;
- (void)setAccountDSID:(id)arg1;
- (void)setAccountIdentifier:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundleShortVersionString:(id)arg1;
- (void)setBundleVersion:(id)arg1;
- (void)setContainerPath:(id)arg1;
- (void)setContentRating:(id)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setItemName:(id)arg1;
- (void)setProfileValidated:(BOOL)arg1;
- (void)setSoftwareType:(id)arg1;
- (void)setStoreFrontIdentifier:(id)arg1;
- (void)setVersionIdentifier:(id)arg1;
- (void)setVersionOrdering:(id)arg1;
- (id)softwareType;
- (id)storeFrontIdentifier;
- (id)versionIdentifier;
- (id)versionOrdering;

@end
