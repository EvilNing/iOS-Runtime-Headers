/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class BWNodeInput, FigCaptureRecordingSettings, NSArray;

@interface BWFileCoordinatorNode : BWNode {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    long long _currSettingsID;
    struct OpaqueCMBlockBuffer { } *_emptyMetadataSampleData;
    const struct opaqueCMFormatDescription {} **_formatDescriptionsForInputs;
    } _inputOffset;
    } _largestMetadataPTS;
    } _largestStagedSupportingAudioVideoStagedPTS;
    } _lastMasterDuration;
    } _lastMasterEndingPTS;
    } _lastMasterPTS;
    BWNodeInput *_masterInput;
    unsigned long long _masterInputIndex;
    } _masterStartingPTS;
    } _masterStoppingPTS;
    unsigned long long _numActionOnlyOutputs;
    unsigned long long _numAudioInputs;
    unsigned long long _numInputs;
    unsigned long long _numMetadataInputs;
    unsigned long long _numOutputs;
    unsigned long long _numVideoInputs;
    int _recordingState;
    FigCaptureRecordingSettings *_settings;
    NSArray *_stagingQueues;
    struct OpaqueFigSimpleMutex { } *_stateMutex;
    bool_firstAudioHasBeenProcessed;
    bool_haveSeenAudioWhenStarting;
    bool_lowLatencyCanTossExtraVideoWhenStopping;
    bool_lowLatencyCanTransitionEarlyToRecording;
    bool_lowLatencyModeEnabled;
}

+ (void)initialize;

- (struct opaqueCMSampleBuffer { }*)_copyFirstValidLowLatencyAudioBuffer:(struct opaqueCMSampleBuffer { }*)arg1 inputIndex:(unsigned long long)arg2 sbufPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (struct opaqueCMSampleBuffer { }*)_createEmptyMetadataSBufWithPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forInputIndex:(unsigned long long)arg2;
- (void)_doStartingToRecordWithSBuf:(struct opaqueCMSampleBuffer { }*)arg1 inputIndex:(unsigned long long)arg2 sbufPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)_doStoppingOrPausingWithSBuf:(struct opaqueCMSampleBuffer { }*)arg1 inputIndex:(unsigned long long)arg2 sbufPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)_emitMarkerBufferForFileWriterAction:(struct __CFString { }*)arg1 withPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 actionOutputsOnly:(bool)arg3;
- (void)_emitSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2 toOutput:(id)arg3;
- (void)_emitStagedBufferForIndex:(unsigned long long)arg1;
- (void)_finishStoppingOrPausing:(bool)arg1;
- (void)_prepareToPauseOrStopRecording;
- (void)_prepareToResumeRecording;
- (void)_prepareToStartRecordingWithSettings:(id)arg1;
- (void)_printStagingEvent:(struct opaqueCMSampleBuffer { }*)arg1 forNodeInputIndex:(unsigned long long)arg2;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (id)init;
- (id)initWithNumberOfVideoInputs:(unsigned long long)arg1 numberOfAudioInputs:(unsigned long long)arg2 numberOfMetadataInputs:(unsigned long long)arg3 numberOfActionOnlyOutputs:(unsigned long long)arg4 allowLowLatencyWhenPossible:(bool)arg5;
- (id)nodeSubType;
- (id)nodeType;
- (void)pauseRecording:(id*)arg1;
- (void)recordingTerminated:(unsigned long long)arg1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)resumeRecording:(id*)arg1;
- (void)startRecordingWithSettings:(id)arg1 error:(id*)arg2;
- (void)stopRecording:(id*)arg1;

@end
