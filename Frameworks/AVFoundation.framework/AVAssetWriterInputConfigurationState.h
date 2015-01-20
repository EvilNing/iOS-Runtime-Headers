/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVOutputSettings, NSArray, NSDictionary, NSString, NSURL;

@interface AVAssetWriterInputConfigurationState : NSObject {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    struct CGSize { 
        double width; 
        double height; 
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    short _alternateGroupID;
    long long _chunkAlignment;
    } _chunkDuration;
    long long _chunkSize;
    NSString *_extendedLanguageTag;
    NSString *_languageCode;
    long long _layer;
    int _mediaTimeScale;
    NSString *_mediaType;
    NSArray *_metadataItems;
    } _naturalSize;
    AVOutputSettings *_outputSettings;
    float _preferredVolume;
    NSURL *_sampleReferenceBaseURL;
    struct opaqueCMFormatDescription { } *_sourceFormatHint;
    NSDictionary *_sourcePixelBufferAttributes;
    NSDictionary *_trackReferences;
    } _transform;
    bool_attachedToPixelBufferAdaptor;
    bool_expectsMediaDataInRealTime;
    bool_marksOutputTrackAsEnabled;
    bool_performsMultiPassEncodingIfSupported;
}

@property short alternateGroupID;
@property bool attachedToPixelBufferAdaptor;
@property bool expectsMediaDataInRealTime;
@property(copy) NSString * extendedLanguageTag;
@property(copy) NSString * languageCode;
@property long long layer;
@property bool marksOutputTrackAsEnabled;
@property int mediaTimeScale;
@property(copy) NSString * mediaType;
@property(copy) NSArray * metadataItems;
@property struct CGSize { double x1; double x2; } naturalSize;
@property(copy) AVOutputSettings * outputSettings;
@property bool performsMultiPassEncodingIfSupported;
@property long long preferredMediaChunkAlignment;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } preferredMediaChunkDuration;
@property long long preferredMediaChunkSize;
@property float preferredVolume;
@property(copy) NSURL * sampleReferenceBaseURL;
@property(retain) struct opaqueCMFormatDescription { }* sourceFormatHint;
@property(copy) NSDictionary * sourcePixelBufferAttributes;
@property(copy) NSDictionary * trackReferences;
@property struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;

- (short)alternateGroupID;
- (bool)attachedToPixelBufferAdaptor;
- (void)dealloc;
- (bool)expectsMediaDataInRealTime;
- (id)extendedLanguageTag;
- (id)languageCode;
- (long long)layer;
- (bool)marksOutputTrackAsEnabled;
- (int)mediaTimeScale;
- (id)mediaType;
- (id)metadataItems;
- (struct CGSize { double x1; double x2; })naturalSize;
- (id)outputSettings;
- (bool)performsMultiPassEncodingIfSupported;
- (long long)preferredMediaChunkAlignment;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })preferredMediaChunkDuration;
- (long long)preferredMediaChunkSize;
- (float)preferredVolume;
- (id)sampleReferenceBaseURL;
- (void)setAlternateGroupID:(short)arg1;
- (void)setAttachedToPixelBufferAdaptor:(bool)arg1;
- (void)setExpectsMediaDataInRealTime:(bool)arg1;
- (void)setExtendedLanguageTag:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setLayer:(long long)arg1;
- (void)setMarksOutputTrackAsEnabled:(bool)arg1;
- (void)setMediaTimeScale:(int)arg1;
- (void)setMediaType:(id)arg1;
- (void)setMetadataItems:(id)arg1;
- (void)setNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setOutputSettings:(id)arg1;
- (void)setPerformsMultiPassEncodingIfSupported:(bool)arg1;
- (void)setPreferredMediaChunkAlignment:(long long)arg1;
- (void)setPreferredMediaChunkDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPreferredMediaChunkSize:(long long)arg1;
- (void)setPreferredVolume:(float)arg1;
- (void)setSampleReferenceBaseURL:(id)arg1;
- (void)setSourceFormatHint:(struct opaqueCMFormatDescription { }*)arg1;
- (void)setSourcePixelBufferAttributes:(id)arg1;
- (void)setTrackReferences:(id)arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (struct opaqueCMFormatDescription { }*)sourceFormatHint;
- (id)sourcePixelBufferAttributes;
- (id)trackReferences;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;

@end
