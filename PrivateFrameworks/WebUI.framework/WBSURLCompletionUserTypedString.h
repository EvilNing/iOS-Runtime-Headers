/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@class NSString;

@interface WBSURLCompletionUserTypedString : NSObject {
    const char *_chars;
    int _length;
    NSString *_string;
    const unsigned short *_unichars;
    bool_containsAnySpaces;
    bool_ownsChars;
    bool_ownsUnichars;
}

@property(readonly) NSString * normalizedString;

+ (void)initialize;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithString:(id)arg1;
- (id)normalizedString;

@end
