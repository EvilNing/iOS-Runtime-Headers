/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetWriterInputHelper, AVAssetWriterInputInternal, AVOutputSettings, AVWeakReference, NSArray, NSDictionary, NSString;

@interface AVAssetWriterInput : NSObject {
    AVAssetWriterInputInternal *_internal;
}

@property(getter=_alternateGroupID,setter=_setAlternateGroupID:) short alternateGroupID;
@property(getter=_isAttachedToMetadataAdaptor,readonly) bool attachedToMetadataAdaptor;
@property(getter=_isAttachedToPixelBufferAdaptor,setter=_setAttachedToPixelBufferAdaptor:) bool attachedToPixelBufferAdaptor;
@property bool expectsMediaDataInRealTime;
@property(getter=_helper,setter=_setHelper:,retain) AVAssetWriterInputHelper * helper;
@property(readonly) NSString * mediaType;
@property(copy) NSArray * metadata;
@property(readonly) long long numberOfAppendFailures;
@property(readonly) NSDictionary * outputSettings;
@property(getter=_outputSettingsObject,readonly) AVOutputSettings * outputSettingsObject;
@property(getter=_pixelBufferPool,readonly) struct __CVPixelBufferPool { }* pixelBufferPool;
@property(getter=isReadyForMoreMediaData,readonly) bool readyForMoreMediaData;
@property(readonly) struct opaqueCMFormatDescription { }* sourceFormatHint;
@property(getter=_sourcePixelBufferAttributes,setter=_setSourcePixelBufferAttributes:,copy) NSDictionary * sourcePixelBufferAttributes;
@property(getter=_status,readonly) long long status;
@property(getter=_trackID,readonly) int trackID;
@property(getter=_trackReferences,readonly) NSDictionary * trackReferences;
@property(getter=_weakReferenceToAssetWriter,setter=_setWeakReferenceToAssetWriter:,retain) AVWeakReference * weakReferenceToAssetWriter;

+ (id)assetWriterInputWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(struct opaqueCMFormatDescription { }*)arg3;
+ (id)assetWriterInputWithMediaType:(id)arg1 outputSettings:(id)arg2;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingCanPerformMultiplePasses;
+ (id)keyPathsForValuesAffectingCurrentPassDescription;
+ (id)keyPathsForValuesAffectingReadyForMoreMediaData;
+ (id)keyPathsForValuesAffectingStatus;

- (short)_alternateGroupID;
- (bool)_appendPixelBuffer:(struct __CVBuffer { }*)arg1 withPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)_attachToMetadataAdaptor:(id)arg1;
- (void)_didStartInitialSession;
- (id)_helper;
- (bool)_isAttachedToMetadataAdaptor;
- (bool)_isAttachedToPixelBufferAdaptor;
- (id)_outputSettingsObject;
- (struct __CVPixelBufferPool { }*)_pixelBufferPool;
- (bool)_prepareForWritingWithFigAssetWriter:(struct OpaqueFigAssetWriter { }*)arg1 mediaFileType:(id)arg2 error:(id*)arg3;
- (void)_prepareToEndSession;
- (bool)_prepareToFinishWritingReturningError:(id*)arg1;
- (void)_setAlternateGroupID:(short)arg1;
- (void)_setAttachedToPixelBufferAdaptor:(bool)arg1;
- (void)_setHelper:(id)arg1;
- (void)_setSourcePixelBufferAttributes:(id)arg1;
- (void)_setWeakReferenceToAssetWriter:(id)arg1;
- (id)_sourcePixelBufferAttributes;
- (long long)_status;
- (void)_tellAssetWriterToTransitionToFailedStatusWithError:(id)arg1;
- (int)_trackID;
- (id)_trackReferences;
- (void)_transitionToTerminalStatus:(long long)arg1;
- (id)_weakReferenceToAssetWriter;
- (void)addTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;
- (bool)appendSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)associatedInputsWithTrackAssociationType:(id)arg1;
- (id)availableTrackAssociationTypes;
- (bool)canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;
- (bool)canPerformMultiplePasses;
- (id)currentPassDescription;
- (void)dealloc;
- (id)description;
- (bool)expectsMediaDataInRealTime;
- (id)extendedLanguageTag;
- (void)finalize;
- (id)init;
- (id)initWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(struct opaqueCMFormatDescription { }*)arg3;
- (id)initWithMediaType:(id)arg1 outputSettings:(id)arg2;
- (bool)isReadyForMoreMediaData;
- (id)languageCode;
- (long long)layer;
- (void)markAsFinished;
- (void)markCurrentPassAsFinished;
- (bool)marksOutputTrackAsEnabled;
- (int)mediaTimeScale;
- (id)mediaType;
- (id)metadata;
- (struct CGSize { double x1; double x2; })naturalSize;
- (long long)numberOfAppendFailures;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)outputSettings;
- (bool)performsMultiPassEncodingIfSupported;
- (long long)preferredMediaChunkAlignment;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })preferredMediaChunkDuration;
- (long long)preferredMediaChunkSize;
- (float)preferredVolume;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(id)arg2;
- (void)respondToEachPassDescriptionOnQueue:(id)arg1 usingBlock:(id)arg2;
- (id)sampleReferenceBaseURL;
- (void)setExpectsMediaDataInRealTime:(bool)arg1;
- (void)setExtendedLanguageTag:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setLayer:(long long)arg1;
- (void)setMarksOutputTrackAsEnabled:(bool)arg1;
- (void)setMediaTimeScale:(int)arg1;
- (void)setMetadata:(id)arg1;
- (void)setNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPerformsMultiPassEncodingIfSupported:(bool)arg1;
- (void)setPreferredMediaChunkAlignment:(long long)arg1;
- (void)setPreferredMediaChunkDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPreferredMediaChunkSize:(long long)arg1;
- (void)setPreferredVolume:(float)arg1;
- (void)setSampleReferenceBaseURL:(id)arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (struct opaqueCMFormatDescription { }*)sourceFormatHint;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;

@end
