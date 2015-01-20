/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class MPAVController, MPMediaItem, MPNowPlayingObserver, MusicAVPlayer, NSString;

@interface MusicPlayerServerDelegate : NSObject <MPMusicPlayerControllerServerDelegate> {
    MusicAVPlayer *_applicationPlayer;
    MPMediaItem *_firstItem;
    MPNowPlayingObserver *_nowPlayingObserver;
    long long _playbackShuffleMode;
    id _repeatChangeHandler;
    MPAVController *_repeatChangeHandlerPlayer;
    long long _repeatMode;
    id _shuffleChangeHandler;
    MPAVController *_shuffleChangeHandlerPlayer;
    long long _shuffleMode;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_appDefaultsChanged:(id)arg1;
- (id)currentMediaQueryForMusicPlayerServer:(id)arg1;
- (id)currentRadioStationForMusicPlayerServer:(id)arg1;
- (void)dealloc;
- (unsigned long long)indexOfNowPlayingItemForMusicPlayerServer:(id)arg1;
- (id)init;
- (bool)isNowPlayingItemFromGeniusMixForMusicPlayerServer:(id)arg1;
- (void)musicPlayerServer:(id)arg1 prepareQueueWithGeniusMixPlaylist:(id)arg2;
- (void)musicPlayerServer:(id)arg1 prepareQueueWithQuery:(id)arg2;
- (void)musicPlayerServer:(id)arg1 prepareQueueWithRadioStation:(id)arg2;
- (void)musicPlayerServer:(id)arg1 registerForRepeatModeChangesWithChangeHandler:(id)arg2;
- (void)musicPlayerServer:(id)arg1 registerForShuffleModeChangesWithChangeHandler:(id)arg2;
- (void)musicPlayerServer:(id)arg1 setFirstItem:(id)arg2;
- (void)musicPlayerServer:(id)arg1 setNowPlayingItem:(id)arg2;
- (void)musicPlayerServer:(id)arg1 setPlaybackSpeed:(long long)arg2;
- (void)musicPlayerServer:(id)arg1 setShuffleMode:(long long)arg2;
- (id)nowPlayingItemForMusicPlayerServer:(id)arg1;
- (long long)playbackSpeedForMusicPlayerServer:(id)arg1;
- (id)playerForMusicPlayerServer:(id)arg1 usingApplicationSpecificQueue:(bool)arg2;
- (unsigned long long)unshuffledIndexOfNowPlayingItemForMusicPlayerServer:(id)arg1;

@end
