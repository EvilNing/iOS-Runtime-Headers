/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPSkipTrackCommandEvent : MPRemoteCommandEvent {
    bool_requestingDefermentToPlaybackQueuePosition;
}

@property(getter=isRequestingDefermentToPlaybackQueuePosition,readonly) bool requestingDefermentToPlaybackQueuePosition;

- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (bool)isRequestingDefermentToPlaybackQueuePosition;

@end
