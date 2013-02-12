/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class BKSApplicationStateMonitor, NSArray, NSDictionary, NSMutableArray, NSString;

@interface MPAudioDeviceController : NSObject <UIAlertViewDelegate> {
    BKSApplicationStateMonitor *_applicationMonitor;
    NSString *_category;
    id _delegate;
    BOOL _determiningPickableRoutes;
    BOOL _fakeRouteAvailable;
    NSArray *_pickableRoutes;
    NSMutableArray *_pickableRoutesCompletionHandlers;
    NSDictionary *_pickedRoute;
    BOOL _pickedRouteHasVolumeControl;
    BOOL _pickedRouteHasVolumeControlIsValid;
    int _retainCount;
}

@property id delegate;
@property BOOL routeDiscoveryEnabled;

+ (BOOL)routeDiscoveryEnabled;
+ (void)setRouteDiscoveryEnabled:(BOOL)arg1;

- (void)_activeAudioRouteDidChange:(id)arg1;
- (BOOL)_isDeallocating;
- (void)_mediaServerDied;
- (BOOL)_pickRoute:(id)arg1 withPassword:(id)arg2;
- (BOOL)_pickRoute:(id)arg1;
- (id)_pickableRoutes;
- (void)_pickableRoutesChangedNotification:(id)arg1;
- (id)_pickedRoute;
- (void)_portStatusDidChangeNotification:(id)arg1;
- (void)_registerForAVControllerNotifications;
- (void)_routeDiscoveryDidEndNotification:(id)arg1;
- (BOOL)_routeIsDisplayPort:(id)arg1;
- (BOOL)_routeIsHandset:(id)arg1;
- (BOOL)_routeIsHeadphones:(id)arg1;
- (BOOL)_routeIsReceiver:(id)arg1;
- (BOOL)_routeIsSpeaker:(id)arg1;
- (BOOL)_routeIsWireless:(id)arg1;
- (void)_scheduleSendDelegateAudioRoutesChanged;
- (void)_sendDelegateAudioRoutesChanged;
- (void)_sendFakeRouteChange;
- (BOOL)_tryRetain;
- (BOOL)airtunesRouteIsPicked;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)clearCachedRoutes;
- (void)dealloc;
- (id)delegate;
- (void)determinePickableRoutesWithCompletionHandler:(id)arg1;
- (BOOL)handsetRouteIsPicked;
- (int)indexOfPickedRoute;
- (id)init;
- (BOOL)isPickedRouteDistinctFromRoute:(id)arg1;
- (void)logCurrentRoutes;
- (id)nameOfPickedRoute;
- (unsigned int)numberOfAudioRoutes;
- (BOOL)pickBestDeviceRoute;
- (BOOL)pickHandsetRoute;
- (BOOL)pickRouteAtIndex:(unsigned int)arg1 withPassword:(id)arg2;
- (BOOL)pickRouteAtIndex:(unsigned int)arg1;
- (BOOL)pickSpeakerRoute;
- (id)pickedRouteDescription;
- (BOOL)receiverRouteIsPicked;
- (oneway void)release;
- (void)restorePickedRoute;
- (id)retain;
- (unsigned int)retainCount;
- (id)routeDescriptionAtIndex:(unsigned int)arg1;
- (BOOL)routeDiscoveryEnabled;
- (id)routeNameAtIndex:(unsigned int)arg1 isPicked:(BOOL*)arg2;
- (BOOL)routeOtherThanHandsetAndSpeakerIsAvailable;
- (BOOL)routeOtherThanHandsetIsAvailable;
- (BOOL)routeRequiresPasswordAtIndex:(unsigned int)arg1;
- (id)routeTypeAtIndex:(unsigned int)arg1;
- (void)setCategory:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRouteDiscoveryEnabled:(BOOL)arg1;
- (BOOL)speakerRouteIsPicked;
- (BOOL)volumeControlIsAvailable;
- (BOOL)wirelessRouteIsPicked;

@end
