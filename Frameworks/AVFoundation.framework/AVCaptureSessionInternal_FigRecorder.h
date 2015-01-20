/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureFigAudioDevice_FigRecorder, AVCaptureFigVideoDevice_FigRecorder, AVCaptureVideoPreviewLayer_FigRecorder, AVRunLoopCondition, AVWeakReference, NSError, NSMutableArray, NSMutableDictionary, NSString;

@interface AVCaptureSessionInternal_FigRecorder : NSObject {
    AVCaptureFigAudioDevice_FigRecorder *audioDevice;
    int beginConfigRefCount;
    booladjustingDeviceActiveFormat;
    boolautomaticallyConfiguresApplicationAudioSession;
    boolinterrupted;
    boolrecording;
    boolrunning;
    boolusesApplicationAudioSession;
    boolwaitingForRecorderDidStartPreviewing;
    boolwaitingForRecorderDidStartRecording;
    boolwaitingForRecorderDidStopPreviewing;
    boolwaitingForRecorderDidStopRecording;
    boolwaitingForRecorderDidStopSource;
    NSMutableDictionary *captureOptions;
    NSMutableArray *connections;
    NSMutableDictionary *figRecorderOptions;
    NSMutableArray *inputs;
    NSMutableArray *liveConnections;
    struct OpaqueCMClock { } *masterClock;
    NSMutableArray *outputs;
    struct OpaqueFigRecorder { } *recorder;
    int resolvedSessionPresetChangeSeed;
    int resolvedVideoDeviceChangeSeed;
    AVRunLoopCondition *runLoopCondition;
    NSString *sessionPreset;
    int sessionPresetChangeSeed;
    NSError *stopError;
    AVCaptureFigVideoDevice_FigRecorder *videoDevice;
    int videoDeviceChangeSeed;
    AVCaptureVideoPreviewLayer_FigRecorder *videoPreviewLayer;
    AVWeakReference *weakReference;
}

- (void)dealloc;
- (id)init;

@end
