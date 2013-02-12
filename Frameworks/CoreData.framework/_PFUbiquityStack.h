/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSManagedObjectContext, NSString, PFUbiquityLocation, PFUbiquityMetadataFactoryEntry;

@interface _PFUbiquityStack : NSObject {
    NSString *_localPeerID;
    PFUbiquityMetadataFactoryEntry *_metadataEntry;
    NSManagedObjectContext *_metadataMOC;
    PFUbiquityLocation *_metadataStoreFileLocation;
    PFUbiquityLocation *_ubiquityRootURL;
}

@property(readonly) NSString * localPeerID;
@property(readonly) PFUbiquityMetadataFactoryEntry * metadataEntry;
@property(readonly) NSManagedObjectContext * metadataMOC;
@property(readonly) PFUbiquityLocation * metadataStoreFileLocation;
@property(readonly) PFUbiquityLocation * ubiquityRootURL;

+ (id)defaultUbiquityLocationForBundleIdentifier:(id)arg1 createIfMissing:(BOOL)arg2;
+ (id)defaultUbiquityLocationForPeerID:(id)arg1 andBundleIdentifier:(id)arg2 createIfMissing:(BOOL)arg3;
+ (id)defaultUbiquityRootLocation;
+ (BOOL)shouldRecoverStackMetadataForStore:(id)arg1 withLocalPeerID:(id)arg2;

- (id)allPeers;
- (id)createMetadataStoreKnowledgeVector:(id*)arg1;
- (void)dealloc;
- (id)description;
- (id)importStateForStoreName:(id)arg1 andPeerID:(id)arg2;
- (id)importStatesMatchingStoreName:(id)arg1;
- (id)init;
- (id)initWithMetadataEntry:(id)arg1;
- (id)localPeerID;
- (id)metadataEntry;
- (id)metadataMOC;
- (id)metadataStoreFileLocation;
- (id)peerForPeerID:(id)arg1 createIfMissing:(BOOL)arg2;
- (BOOL)purgeAndInitializeMetadataStoreFileWithError:(id*)arg1;
- (BOOL)purgeMetadataForStoreMetadata:(id)arg1 withError:(id*)arg2;
- (id)ubiquityRootURL;

@end
