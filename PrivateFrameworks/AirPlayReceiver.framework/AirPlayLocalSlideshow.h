/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

@class CALayer, MPDocument, MRMarimbaLayer, MediaControlServer, NSData, NSDictionary, NSLock, NSMutableDictionary, NSString;

@interface AirPlayLocalSlideshow : NSObject <MPAssetKeyDelegate> {
    NSMutableDictionary *_assets;
    NSData *_firstImageData;
    double _lastRemoveTime;
    double _lastRequestTime;
    NSLock *_lock;
    MPDocument *_marimbaDocument;
    MRMarimbaLayer *_marimbaLayer;
    unsigned int _nextAssetIndex;
    int _outstandingCount;
    CALayer *_presentationLayer;
    MediaControlServer *_server;
    unsigned int _serverSessionID;
    unsigned char _sessionUUID[16];
    NSDictionary *_settings;
    double _startTime;
    int _state;
    bool_endPending;
    bool_hasMoreAssets;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (id)slideshowFeaturesWithLanguage:(id)arg1;

- (id)_assetForAssetKey:(id)arg1;
- (unsigned int)_bufferedAssetCount;
- (id)_copyImageForAssetKey:(id)arg1 decode:(bool)arg2;
- (id)_oldestAsset;
- (void)_playbackConsumedAssetKey:(id)arg1;
- (void)_playbackEnded:(id)arg1;
- (void)_playbackPrefetch;
- (void)_playbackPrefetchDone;
- (void)_playbackProducedAssetData:(id)arg1 withAssetInfo:(id)arg2;
- (void)_playbackRunStateMachine;
- (void)_playbackSlideChanged:(id)arg1;
- (void)_playbackStart;
- (void)_playbackStop;
- (void)_playbackUserNext:(id)arg1;
- (void)_playbackUserPlayPause:(id)arg1;
- (void)_playbackUserPrevious:(id)arg1;
- (void)_playbackUserStop:(id)arg1;
- (void)_postProgressEvent:(id)arg1;
- (void)_pruneAssets;
- (id)absolutePathForAssetKey:(id)arg1 andSize:(struct CGSize { double x1; double x2; })arg2;
- (id)absolutePathForAssetKey:(id)arg1;
- (id)absolutePathForStillAssetAtPath:(id)arg1 andSize:(struct CGSize { double x1; double x2; })arg2;
- (void)dealloc;
- (id)imageDataForAssetKey:(id)arg1 andSize:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithServer:(id)arg1;
- (struct CGSize { double x1; double x2; })resolutionForAssetKey:(id)arg1;
- (void)setPresentationLayer:(id)arg1;
- (void)setServerSessionID:(unsigned int)arg1;
- (id)slideshowInfo;
- (id)startSlideshowWithInfo:(id)arg1 error:(id*)arg2;
- (id)stopSlideshowWithInfo:(id)arg1 error:(id*)arg2;

@end
