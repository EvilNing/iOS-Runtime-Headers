/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSData, NSDictionary, NSSet, NSString, NSURL, PFUbiquityLocation;

@interface PFUbiquityStoreMetadata : NSManagedObject {
}

@property(retain) NSString * modelVersionHashString;
@property(retain) NSSet * peerStates;
@property(retain) NSSet * primaryKeyRanges;
@property(retain) NSString * storeIdentifier;
@property(retain) NSDictionary * storeOptions;
@property(retain) NSData * storeOptionsBinaryPlistData;
@property(retain) NSString * storeType;
@property(retain) NSString * storeURLString;
@property(retain) NSSet * transactionEntries;
@property(retain) NSString * ubiquityName;
@property(retain) NSString * ubiquityRelativePath;
@property(readonly) PFUbiquityLocation * ubiquityRootLocation;
@property(readonly) NSURL * ubiquityRootURL;
@property(retain) NSString * ubiquityRootURLString;

+ (id)addMetadataForPersistentStore:(id)arg1 withLocalPeerID:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)allStoreMetadataInManagedObjectContext:(id)arg1;
+ (id)baselineGCModelURLForUbiquityName:(id)arg1 andUbiquityLogURL:(id)arg2;
+ (id)baselineMetaFileURLForUbiquityName:(id)arg1 andUbiquityLogURL:(id)arg2;
+ (id)baselineModelURLForUbiquityName:(id)arg1 andUbiquityLogURL:(id)arg2;
+ (id)baselineRootDirectoryForUbiquityName:(id)arg1 andUbiquityLogURL:(id)arg2;
+ (id)baselineStoreURLForUbiquityName:(id)arg1 andUbiquityLogURL:(id)arg2;
+ (BOOL)isBaselineRootURL:(id)arg1;
+ (id)metadataForStoreWithName:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)storeMetadatasWithName:(id)arg1 inManagedObjectContext:(id)arg2;

- (id)createPeerRangesForBaselineWithLocalPeerID:(id)arg1;
- (id)initWithUbiquityName:(id)arg1 andUbiquityRootLocation:(id)arg2 insertIntoManagedObjectContext:(id)arg3;
- (void)loadFromBaselineMetadata:(id)arg1 withLocalPeerID:(id)arg2;
- (id)peerStateForPeerID:(id)arg1;
- (id)peerStoreURLForPeerIdentifier:(id)arg1;
- (id)peerURLForPeerIdentifier:(id)arg1;
- (void)setStoreOptions:(id)arg1;
- (id)storeOptions;
- (id)ubiquityRootLocation;
- (id)ubiquityRootURL;
- (void)updatePeerStatesToMatchKnowledgeVector:(id)arg1;
- (void)updateWithStore:(id)arg1;

@end
