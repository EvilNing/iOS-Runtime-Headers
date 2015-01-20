/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class <AVAudioSessionDelegateMediaPlayerOnly>, AVAudioSessionMediaPlayerOnlyInternal, NSString;

@interface AVAudioSessionMediaPlayerOnly : NSObject {
    AVAudioSessionMediaPlayerOnlyInternal *_audioSession;
}

@property(readonly) NSString * category;
@property(readonly) long long currentHardwareInputNumberOfChannels;
@property(readonly) long long currentHardwareOutputNumberOfChannels;
@property(readonly) double currentHardwareSampleRate;
@property <AVAudioSessionDelegateMediaPlayerOnly> * delegate;
@property(readonly) bool inputIsAvailable;
@property(readonly) NSString * mode;
@property(readonly) double preferredHardwareSampleRate;
@property(readonly) double preferredIOBufferDuration;

+ (void)initialize;

- (void)_addFPListeners;
- (void)_removeFPListeners;
- (void)_setFigPlayer:(struct OpaqueFigPlayer { }*)arg1;
- (id)_weakReference;
- (id)category;
- (long long)currentHardwareInputNumberOfChannels;
- (long long)currentHardwareOutputNumberOfChannels;
- (double)currentHardwareSampleRate;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)inputIsAvailable;
- (bool)isApplicationAudioSession;
- (id)mode;
- (double)preferredHardwareSampleRate;
- (double)preferredIOBufferDuration;
- (bool)setActive:(bool)arg1 error:(id*)arg2;
- (bool)setActive:(bool)arg1 withFlags:(long long)arg2 error:(id*)arg3;
- (void)setApplicationAudioSession:(bool)arg1;
- (bool)setCategory:(id)arg1 error:(id*)arg2;
- (void)setDelegate:(id)arg1;
- (bool)setMode:(id)arg1 error:(id*)arg2;
- (bool)setPreferredHardwareSampleRate:(double)arg1 error:(id*)arg2;
- (bool)setPreferredIOBufferDuration:(double)arg1 error:(id*)arg2;

@end
