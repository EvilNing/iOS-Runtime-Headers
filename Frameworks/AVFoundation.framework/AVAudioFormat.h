/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@class AVAudioChannelLayout, NSDictionary;

@interface AVAudioFormat : NSObject {
    struct AudioStreamBasicDescription { 
        double mSampleRate; 
        unsigned int mFormatID; 
        unsigned int mFormatFlags; 
        unsigned int mBytesPerPacket; 
        unsigned int mFramesPerPacket; 
        unsigned int mBytesPerFrame; 
        unsigned int mChannelsPerFrame; 
        unsigned int mBitsPerChannel; 
        unsigned int mReserved; 
    } _asbd;
    unsigned long long _commonFormat;
    AVAudioChannelLayout *_layout;
    void *_reserved;
}

@property(readonly) unsigned int channelCount;
@property(readonly) AVAudioChannelLayout * channelLayout;
@property(readonly) unsigned long long commonFormat;
@property(getter=isInterleaved,readonly) bool interleaved;
@property(readonly) double sampleRate;
@property(readonly) NSDictionary * settings;
@property(getter=isStandard,readonly) bool standard;
@property(readonly) const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }* streamDescription;

+ (id)settingsFromASBD:(const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1 channelLayout:(id)arg2;

- (id).cxx_construct;
- (unsigned int)channelCount;
- (id)channelLayout;
- (unsigned long long)commonFormat;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initStandardFormatWithSampleRate:(double)arg1 channelLayout:(id)arg2;
- (id)initStandardFormatWithSampleRate:(double)arg1 channels:(unsigned int)arg2;
- (id)initWithCommonFormat:(unsigned long long)arg1 sampleRate:(double)arg2 channels:(unsigned int)arg3 interleaved:(bool)arg4;
- (id)initWithCommonFormat:(unsigned long long)arg1 sampleRate:(double)arg2 interleaved:(bool)arg3 channelLayout:(id)arg4;
- (id)initWithSettings:(id)arg1;
- (id)initWithStreamDescription:(const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1 channelLayout:(id)arg2;
- (id)initWithStreamDescription:(const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isInterleaved;
- (bool)isStandard;
- (double)sampleRate;
- (id)settings;
- (const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)streamDescription;

@end
