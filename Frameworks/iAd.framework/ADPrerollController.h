/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class ADPlayer, ADPrerollView, AVPlayerViewController, MPMoviePlayerController, NSString;

@interface ADPrerollController : NSObject <ADPrerollViewDelegate, ADPlayerDelegate> {
    ADPlayer *_adPlayer;
    AVPlayerViewController *_avPlayerViewController;
    id _completionHandler;
    MPMoviePlayerController *_moviePlayerController;
    unsigned long long _type;
    ADPrerollView *_view;
    bool_isObservingThirdPartyAVPlayer;
    bool_setupInProgress;
}

@property(retain) ADPlayer * adPlayer;
@property AVPlayerViewController * avPlayerViewController;
@property(copy) id completionHandler;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property bool isObservingThirdPartyAVPlayer;
@property MPMoviePlayerController * moviePlayerController;
@property bool setupInProgress;
@property(readonly) Class superclass;
@property(readonly) unsigned long long type;
@property(retain) ADPrerollView * view;

- (id)_advertisementView;
- (void)_appWillResignActive;
- (bool)_beginPlayback;
- (void)_handlePlaybackCompletion:(bool)arg1;
- (bool)_isEmbedded;
- (void)actionButtonPressed;
- (void)adPlayer:(id)arg1 didChangePlaybackState:(unsigned long long)arg2;
- (void)adPlayer:(id)arg1 elapsedTime:(double)arg2 totalTime:(double)arg3;
- (void)adPlayer:(id)arg1 readyForPlaybackWithAVPlayer:(id)arg2 impressionProperties:(id)arg3;
- (id)adPlayer;
- (void)adPlayerDidBeginAction:(id)arg1;
- (void)adPlayerDidFinishPlayback:(id)arg1;
- (void)adPlayerDidTimeout:(id)arg1;
- (void)adPlayerFailedToLoadAsset:(id)arg1;
- (void)adPlayerFailedToPlayWithUnknownError:(id)arg1;
- (id)avPlayerViewController;
- (void)cancel;
- (id)completionHandler;
- (void)dealloc;
- (void)doneButtonPressed;
- (id)init;
- (id)initWithAVPlayerViewController:(id)arg1;
- (id)initWithMoviePlayerController:(id)arg1;
- (bool)isObservingThirdPartyAVPlayer;
- (id)moviePlayerController;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pauseButtonPressed;
- (void)playButtonPressed;
- (void)playPrerollAdWithCompletion:(id)arg1;
- (bool)prerollViewRequestsEmbeddedStatus;
- (void)setAdPlayer:(id)arg1;
- (void)setAvPlayerViewController:(id)arg1;
- (void)setCompletionHandler:(id)arg1;
- (void)setIsObservingThirdPartyAVPlayer:(bool)arg1;
- (void)setMoviePlayerController:(id)arg1;
- (void)setSetupInProgress:(bool)arg1;
- (void)setView:(id)arg1;
- (bool)setupInProgress;
- (void)shutdown;
- (void)skipButtonPressed;
- (unsigned long long)type;
- (id)view;
- (id)viewControllerForActionFromAdPlayer:(id)arg1;

@end
