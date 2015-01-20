/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class ISSoftwareApplication, NSNumber, NSString;

@interface SUScriptSoftwareApplication : SUScriptObject {
    ISSoftwareApplication *_application;
}

@property(readonly) NSNumber * adamID;
@property(readonly) NSString * bundleID;
@property(readonly) NSString * bundleShortVersionString;
@property(readonly) NSString * bundleVersion;
@property(readonly) NSNumber * dsID;
@property(readonly) NSString * environmentProduction;
@property(readonly) NSString * environmentSandbox;
@property(readonly) long long launchResultApplicationDisabled;
@property(readonly) long long launchResultApplicationNotFound;
@property(readonly) long long launchResultInvalidArgument;
@property(readonly) long long launchResultLaunchOrSuspendInProgress;
@property(readonly) long long launchResultLocked;
@property(readonly) long long launchResultLockedOut;
@property(readonly) long long launchResultSecurityPolicy;
@property(readonly) long long launchResultSpringBoardUnavailable;
@property(readonly) long long launchResultSuccess;
@property(readonly) long long launchResultSyncing;
@property(readonly) NSNumber * ratingRank;
@property(readonly) NSString * ratingSystem;
@property(readonly) NSString * softwareType;
@property(readonly) NSString * softwareTypeNewsstand;
@property(readonly) NSString * storeFrontID;
@property(readonly) NSNumber * versionID;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)adamID;
- (id)attributeKeys;
- (id)bundleID;
- (id)bundleShortVersionString;
- (id)bundleVersion;
- (void)checkInAppPurchaseQueueWithAccountID:(id)arg1 environment:(id)arg2;
- (void)dealloc;
- (id)dsID;
- (id)environmentProduction;
- (id)environmentSandbox;
- (id)initWithApplication:(id)arg1;
- (long long)launchResultApplicationDisabled;
- (long long)launchResultApplicationNotFound;
- (long long)launchResultInvalidArgument;
- (long long)launchResultLaunchOrSuspendInProgress;
- (long long)launchResultLocked;
- (long long)launchResultLockedOut;
- (long long)launchResultSecurityPolicy;
- (long long)launchResultSpringBoardUnavailable;
- (long long)launchResultSuccess;
- (long long)launchResultSyncing;
- (long long)launchWithURL:(id)arg1 options:(id)arg2 suspended:(id)arg3;
- (id)ratingRank;
- (id)ratingSystem;
- (id)scriptAttributeKeys;
- (id)softwareType;
- (id)softwareTypeNewsstand;
- (id)storeFrontID;
- (id)versionID;

@end
