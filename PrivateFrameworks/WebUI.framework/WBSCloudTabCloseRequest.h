/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@class NSDate, NSDictionary, NSURL, NSUUID;

@interface WBSCloudTabCloseRequest : NSObject <NSCopying> {
    NSUUID *_destinationDeviceUUID;
    NSDate *_lastModified;
    NSUUID *_requestUUID;
    NSUUID *_sourceDeviceUUID;
    NSUUID *_tabUUID;
    NSURL *_url;
}

@property(readonly) NSUUID * destinationDeviceUUID;
@property(readonly) NSDictionary * dictionaryRepresentation;
@property(readonly) NSDate * lastModified;
@property(readonly) NSUUID * requestUUID;
@property(readonly) NSUUID * sourceDeviceUUID;
@property(readonly) NSUUID * tabUUID;
@property(readonly) NSURL * url;

+ (id)_dictionaryWithURL:(id)arg1 tabUUID:(id)arg2 lastModified:(id)arg3 sourceDeviceUUID:(id)arg4 destinationDeviceUUID:(id)arg5;
+ (id)destinationDeviceUUIDInDictionary:(id)arg1;
+ (bool)isCloudTabCloseRequestDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destinationDeviceUUID;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1 requestUUID:(id)arg2;
- (id)initWithURL:(id)arg1 tabUUID:(id)arg2 lastModified:(id)arg3 sourceDeviceUUID:(id)arg4 destinationDeviceUUID:(id)arg5 requestUUID:(id)arg6;
- (id)lastModified;
- (bool)matchesCloudTab:(id)arg1;
- (id)requestUUID;
- (id)sourceDeviceUUID;
- (id)tabUUID;
- (id)url;

@end
