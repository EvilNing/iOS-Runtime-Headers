/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class ICCameraFile, NSDictionary, NSString;

@interface PLCameraImportItemRepresentation : NSObject {
    ICCameraFile *_cameraFile;
    NSDictionary *_metadata;
    NSString *_path;
    bool_canRequestMetadata;
    bool_canRequestThumbnail;
    bool_inDatabase;
}

@property(retain) ICCameraFile * cameraFile;
@property bool canRequestMetadata;
@property bool canRequestThumbnail;
@property bool inDatabase;
@property(retain) NSDictionary * metadata;
@property(copy) NSString * path;

- (id)cameraFile;
- (bool)canRequestMetadata;
- (bool)canRequestThumbnail;
- (void)dealloc;
- (id)description;
- (id)fileExtension;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (bool)inDatabase;
- (id)initWithCameraFile:(id)arg1;
- (bool)isAudio;
- (bool)isInDatabaseForce:(bool)arg1;
- (bool)isJPEG;
- (bool)isMovie;
- (bool)isRaw;
- (id)metadata;
- (id)path;
- (void)setCameraFile:(id)arg1;
- (void)setCanRequestMetadata:(bool)arg1;
- (void)setCanRequestThumbnail:(bool)arg1;
- (void)setInDatabase:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)setPath:(id)arg1;

@end
