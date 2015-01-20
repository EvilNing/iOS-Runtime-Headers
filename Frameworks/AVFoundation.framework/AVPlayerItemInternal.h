/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <AVPlayerItemDelegate>, AVAsset, AVAudioMix, AVCustomVideoCompositorSession, AVPlayerConnection, AVPlayerItem, AVPropertyStorage, AVVideoComposition, AVWeakReference, NSArray, NSDate, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface AVPlayerItemInternal : NSObject {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    unsigned int RTCReportingFlags;
    NSURL *URL;
    AVAsset *asset;
    AVAsset *assetWithFigPlaybackItem;
    NSDictionary *audibleDRMInfo;
    AVAudioMix *audioMix;
    NSArray *automaticallyLoadedAssetKeys;
    boolallowProgressiveSwitchUp;
    boolallowsExtendedReadAhead;
    booldidBecomeReadyForBasicInspection;
    booldidBecomeReadyForInspectionOfDuration;
    booldidBecomeReadyForInspectionOfMediaSelectionOptions;
    booldidBecomeReadyForInspectionOfPresentationSize;
    booldidBecomeReadyForInspectionOfTracks;
    booldidFireKVOForAssetForNonStreamingItem;
    booldidInformObserversAboutAvailabilityOfTracks;
    booldidSetAssetToAssetWithFigPlaybackItem;
    boolexternalProtectionRequested;
    boolexternalSubtitlesEnabled;
    boolhaveCPEProtector;
    boolhaveInitialSamples;
    boolinitialAlwaysMonitorsPlayability;
    boolinitialContinuesPlayingDuringPrerollForRateChange;
    boolinitialContinuesPlayingDuringPrerollForSeek;
    boolinitialLimitReadAhead;
    boolinitialWillNeverSeekBackwardsHint;
    boolisCurrentPlayerItem;
    boolminimumIntervalForIFrameOnlyPlaybackWasSet;
    boolneedTimedMetadataNotification;
    boolnetworkUsuallyExceedsMaxBitRate;
    boolnonForcedSubtitlesEnabled;
    boolrequiresAccessLog;
    boolsavesDownloadedDataToDiskWhenDone;
    boolseekingWaitsForVideoCompositionRendering;
    boolspeedThresholdForIFrameOnlyPlaybackWasSet;
    boolsuppressesVideoLayers;
    boolusesIFrameOnlyPlaybackForHighRateScaledEdits;
    boolusesIFrameOnlyPlaybackForHighRateScaledEditsWasSet;
    boolwasInitializedWithURL;
    NSArray *cachedTracks;
    AVWeakReference *clientsOriginalVideoComposition;
    AVCustomVideoCompositorSession *customVideoCompositorSession;
    NSString *dataYouTubeID;
    <AVPlayerItemDelegate> *delegate;
    int eqPreset;
    NSError *error;
    struct OpaqueFigCPEProtector { } *figCPEProtector;
    NSObject<OS_dispatch_queue> *figConfigurationQueue;
    struct OpaqueFigPlaybackItem { } *figPlaybackItem;
    struct OpaqueCMTimebase { } *figTimebase;
    void *figVideoCompositor;
    } forwardPlaybackEndTime;
    NSDictionary *gaplessInfo;
    NSMutableArray *handlersToCallWhenReadyForEnqueueing;
    NSDate *initialDate;
    NSDate *initialEstimatedDate;
    struct __CFString { } *initialFigTimePitchAlgorithm;
    long long initialPlaybackLikelyToKeepUpTrigger;
    } initialTime;
    } initialToleranceAfter;
    } initialToleranceBefore;
    long long initialVariantIndex;
    NSMutableDictionary *itemLegibleOutputsForKeys;
    NSMutableDictionary *itemMetadataOutputsForKeys;
    NSArray *itemOutputs;
    NSMutableArray *itemVideoOutputs;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    } maximumTrailingBufferDuration;
    NSString *mediaKind;
    NSMutableDictionary *mediaOptionsSelectedByClient;
    } minimumIntervalForIFrameOnlyPlayback;
    AVPlayerItem *nextItem;
    unsigned int nextSeekIDToGenerate;
    int pendingSeekID;
    struct OpaqueVTPixelBufferAttributesMediator { } *pixelBufferAttributeMediator;
    AVPlayerConnection *playerConnection;
    AVWeakReference *playerReference;
    double preferredPeakBitRate;
    AVPlayerItem *previousItem;
    AVPropertyStorage *propertyStorage;
    struct OpaqueCMTimebase { } *proxyTimebase;
    NSDictionary *rampInOutInfo;
    unsigned long long restrictions;
    } reversePlaybackEndTime;
    id seekCompletionHandler;
    struct OpaqueFigSimpleMutex { } *seekIDMutex;
    NSString *serviceIdentifier;
    float soundCheckVolumeNormalization;
    float speedThresholdForIFrameOnlyPlayback;
    NSObject<OS_dispatch_queue> *stateDispatchQueue;
    long long status;
    NSMutableArray *syncLayers;
    NSArray *textStyleRules;
    NSArray *timedMetadata;
    NSArray *trackIDsForAssetWithFigPlaybackItem;
    AVVideoComposition *videoComposition;
    float volumeAdjustment;
    AVWeakReference *weakReference;
}

@end
