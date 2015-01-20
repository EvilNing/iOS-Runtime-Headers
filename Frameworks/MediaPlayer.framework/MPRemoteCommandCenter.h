/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPChangePlaybackRateCommand, MPChangeRepeatModeCommand, MPChangeShuffleModeCommand, MPFeedbackCommand, MPPurchaseCommand, MPRatingCommand, MPRemoteCommand, MPSkipIntervalCommand, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface MPRemoteCommandCenter : NSObject <MPRemoteCommandDelegate> {
    NSMutableArray *_activeCommands;
    MPRemoteCommand *_advanceRepeatModeCommand;
    MPRemoteCommand *_advanceShuffleModeCommand;
    MPFeedbackCommand *_bookmarkCommand;
    MPPurchaseCommand *_buyAlbumCommand;
    MPPurchaseCommand *_buyTrackCommand;
    MPPurchaseCommand *_cancelDownloadCommand;
    MPRemoteCommand *_changePlaybackPositionCommand;
    MPChangePlaybackRateCommand *_changePlaybackRateCommand;
    MPChangeRepeatModeCommand *_changeRepeatModeCommand;
    MPChangeShuffleModeCommand *_changeShuffleModeCommand;
    MPRemoteCommand *_createRadioStationCommand;
    MPFeedbackCommand *_dislikeCommand;
    MPFeedbackCommand *_likeCommand;
    void *_mediaRemoteCommandHandler;
    MPRemoteCommand *_nextTrackCommand;
    MPRemoteCommand *_pauseCommand;
    MPRemoteCommand *_playCommand;
    MPPurchaseCommand *_preOrderAlbumCommand;
    MPRemoteCommand *_previousTrackCommand;
    MPRatingCommand *_ratingCommand;
    MPRemoteCommand *_seekBackwardCommand;
    MPRemoteCommand *_seekForwardCommand;
    NSObject<OS_dispatch_queue> *_serialQueue;
    MPRemoteCommand *_setPlaybackQueueCommand;
    MPSkipIntervalCommand *_skipBackwardCommand;
    MPSkipIntervalCommand *_skipForwardCommand;
    MPRemoteCommand *_specialSeekBackwardCommand;
    MPRemoteCommand *_specialSeekForwardCommand;
    MPRemoteCommand *_stopCommand;
    MPRemoteCommand *_togglePlayPauseCommand;
    bool_canBeNowPlayingApplication;
    bool_scheduledSupportedCommandsChangedNotification;
}

@property(readonly) MPFeedbackCommand * bookmarkCommand;
@property(readonly) MPChangePlaybackRateCommand * changePlaybackRateCommand;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) MPFeedbackCommand * dislikeCommand;
@property(readonly) unsigned long long hash;
@property(readonly) MPFeedbackCommand * likeCommand;
@property(readonly) MPRemoteCommand * nextTrackCommand;
@property(readonly) MPRemoteCommand * pauseCommand;
@property(readonly) MPRemoteCommand * playCommand;
@property(readonly) MPRemoteCommand * previousTrackCommand;
@property(readonly) MPRatingCommand * ratingCommand;
@property(readonly) MPRemoteCommand * seekBackwardCommand;
@property(readonly) MPRemoteCommand * seekForwardCommand;
@property(readonly) MPSkipIntervalCommand * skipBackwardCommand;
@property(readonly) MPSkipIntervalCommand * skipForwardCommand;
@property(readonly) MPRemoteCommand * stopCommand;
@property(readonly) Class superclass;
@property(readonly) MPRemoteCommand * togglePlayPauseCommand;

+ (id)sharedCommandCenter;

- (void).cxx_destruct;
- (id)_activeCommands;
- (void)_commandTargetsDidChangeNotification:(id)arg1;
- (struct __CFArray { }*)_copySupportedCommands;
- (id)_createRemoteCommandWithConcreteClass:(Class)arg1 mediaRemoteType:(unsigned int)arg2;
- (void)_pushMediaRemoteCommand:(unsigned int)arg1 withOptions:(struct __CFDictionary { }*)arg2 completion:(id)arg3;
- (id)_pushMediaRemoteCommand:(unsigned int)arg1 withOptions:(struct __CFDictionary { }*)arg2;
- (void)_scheduleSupportedCommandsChangedNotify;
- (void)_setupMediaRemoteCommandHandler;
- (void)_setupMediaRemoteControlClient;
- (void)_setupNotifications;
- (void)_teardownMediaRemoteCommandHandler;
- (void)_teardownMediaRemoteControlClient;
- (void)_teardownNotifications;
- (id)advanceRepeatModeCommand;
- (id)advanceShuffleModeCommand;
- (id)bookmarkCommand;
- (id)buyAlbumCommand;
- (id)buyTrackCommand;
- (id)cancelDownloadCommand;
- (id)changePlaybackPositionCommand;
- (id)changePlaybackRateCommand;
- (id)changeRepeatModeCommand;
- (id)changeShuffleModeCommand;
- (id)createRadioStationCommand;
- (void)dealloc;
- (id)dislikeCommand;
- (id)init;
- (id)likeCommand;
- (id)nextTrackCommand;
- (id)pauseCommand;
- (id)playCommand;
- (id)preOrderAlbumCommand;
- (id)previousTrackCommand;
- (id)ratingCommand;
- (void)remoteCommandDidMutatePropagatableProperty:(id)arg1;
- (id)seekBackwardCommand;
- (id)seekForwardCommand;
- (id)setPlaybackQueueCommand;
- (id)skipBackwardCommand;
- (id)skipForwardCommand;
- (id)specialSeekBackwardCommand;
- (id)specialSeekForwardCommand;
- (id)stopCommand;
- (id)togglePlayPauseCommand;

@end
