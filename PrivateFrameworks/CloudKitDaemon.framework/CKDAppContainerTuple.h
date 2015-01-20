/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKContainerID, NSString;

@interface CKDAppContainerTuple : NSObject <NSCopying> {
    NSString *_applicationBundleID;
    CKContainerID *_containerID;
}

@property(retain) NSString * applicationBundleID;
@property(retain) CKContainerID * containerID;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)applicationBundleID;
- (id)containerID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithApplicationBundleID:(id)arg1 containerID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setApplicationBundleID:(id)arg1;
- (void)setContainerID:(id)arg1;

@end
