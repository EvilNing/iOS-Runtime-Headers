/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSString;

@interface CKDSaveUserPrivacySettingsURLRequest : CKDURLRequest {
    NSString *_bundleID;
    long long _discoverableTrinary;
}

@property(copy) NSString * bundleID;
@property long long discoverableTrinary;

- (void).cxx_destruct;
- (id)bundleID;
- (long long)discoverableTrinary;
- (id)init;
- (int)operationType;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)requestOperations;
- (void)setBundleID:(id)arg1;
- (void)setDiscoverable:(bool)arg1;
- (void)setDiscoverableTrinary:(long long)arg1;

@end
