/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, SACalendar;

@interface SAMPPlaybackInfo : AceObject <SAAceSerializable> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) SACalendar * lastPlayedDate;
@property long long playbackPositionMillis;
@property long long plays;
@property bool rememberPlaybackPosition;
@property(readonly) Class superclass;

+ (id)playbackInfo;
+ (id)playbackInfoWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)lastPlayedDate;
- (long long)playbackPositionMillis;
- (long long)plays;
- (bool)rememberPlaybackPosition;
- (void)setLastPlayedDate:(id)arg1;
- (void)setPlaybackPositionMillis:(long long)arg1;
- (void)setPlays:(long long)arg1;
- (void)setRememberPlaybackPosition:(bool)arg1;

@end
