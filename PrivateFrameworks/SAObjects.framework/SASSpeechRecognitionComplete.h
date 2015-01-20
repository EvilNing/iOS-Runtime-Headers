/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SASSpeechRecognitionComplete : SABaseClientBoundCommand {
}

@property(copy) NSString * sessionId;

+ (id)speechRecognitionComplete;
+ (id)speechRecognitionCompleteWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (id)sessionId;
- (void)setSessionId:(id)arg1;

@end
