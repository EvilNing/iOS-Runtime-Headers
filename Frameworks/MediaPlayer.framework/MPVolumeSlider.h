/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAVController, NSString, NSTimer, UIImageView, UILabel, UIView;

@interface MPVolumeSlider : UISlider {
    float _EUVolumeLimit;
    NSTimer *_commitTimer;
    BOOL _isOffScreen;
    MPAVController *_player;
    UILabel *_routeNameLabel;
    int _style;
    UIImageView *_thumbImageView;
    UIImageView *_thumbMaskImageView;
    NSString *_volumeAudioCategory;
    BOOL _volumeWarningBlinking;
    BOOL _volumeWarningEnabled;
    int _volumeWarningState;
    UIView *_volumeWarningView;
}

@property(setter=_setIsOffScreen:) BOOL _isOffScreen;
@property(retain) MPAVController * player;
@property(readonly) int style;
@property(copy) NSString * volumeAudioCategory;

- (void)_EUVolumeLimitDidChange:(id)arg1;
- (void)_EUVolumeLimitEnforcedDidChange:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_availableRoutesDidChangeNotification:(id)arg1;
- (void)_beginBlinkingWarningView;
- (void)_blinkWarningView;
- (void)_commitVolumeChange;
- (void)_endBlinkingWarningView;
- (void)_endTracking;
- (void)_isExternalPlaybackActiveDidChangeNotification:(id)arg1;
- (BOOL)_isOffScreen;
- (BOOL)_isPlayerInValidState;
- (void)_layoutForAvailableRoutes;
- (void)_layoutMaskForThumb;
- (void)_layoutVolumeWarningView;
- (id)_maxTrackImageForStyle:(int)arg1;
- (id)_minTrackImageForStyle:(int)arg1;
- (void)_routeNameLabelAnimationDidEnd;
- (void)_setIsOffScreen:(BOOL)arg1;
- (void)_systemMuteDidChange:(id)arg1;
- (void)_systemVolumeDidChange:(id)arg1;
- (id)_thumbImageForStyle:(int)arg1;
- (void)_updateVolumeFromAVController;
- (void)_volumeDidChange:(id)arg1;
- (float)_volumeFromAVController;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (id)createThumbView;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (float)maximumValue;
- (float)minimumValue;
- (id)player;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setAlpha:(float)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setPlayer:(id)arg1;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (void)setValue:(float)arg1 animated:(BOOL)arg2;
- (void)setVolumeAudioCategory:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (int)style;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })thumbRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 trackRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 value:(float)arg3;
- (id)volumeAudioCategory;

@end
