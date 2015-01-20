/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@class NSArray;

@interface AVAudioSessionRouteDescription : NSObject {
    void *_impl;
}

@property(readonly) NSArray * inputs;
@property(readonly) NSArray * outputs;

+ (id)privateCreateOrConfigure:(id)arg1 withRawDescription:(id)arg2;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)inputs;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRoute:(id)arg1;
- (bool)matchesRawDescription:(id)arg1;
- (id)outputs;
- (struct RouteDescriptionImpl { id x1; id x2; }*)privateGetImplementation;

@end
