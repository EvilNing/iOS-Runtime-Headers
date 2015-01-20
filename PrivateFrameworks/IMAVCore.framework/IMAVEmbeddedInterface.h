/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@interface IMAVEmbeddedInterface : IMAVConferenceInterface {
}

+ (void)updateCriticalState;

- (id)_chatForAudioPropertiesIgnoringChat:(id)arg1;
- (long long)_checkNetworkForChat:(id)arg1 requiresWifi:(bool)arg2;
- (void)_conferenceEnded:(id)arg1;
- (void)_conferenceWillStart:(id)arg1;
- (long long)_runPingTestForChat:(id)arg1;
- (void)_setAudioSessionPropertiesForChat:(id)arg1;
- (void)chatStateUpdated;
- (void)endInterruptionForChat:(id)arg1;
- (void)startInterruptionForChat:(id)arg1;

@end
