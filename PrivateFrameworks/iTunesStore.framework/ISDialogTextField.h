/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSString;

@interface ISDialogTextField : NSObject <SSXPCCoding> {
    long long _keyboardType;
    NSString *_title;
    NSString *_value;
    bool_secure;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property long long keyboardType;
@property(getter=isSecure) bool secure;
@property(readonly) Class superclass;
@property(retain) NSString * title;
@property(retain) NSString * value;

+ (id)textFieldWithTitle:(id)arg1;

- (id)copyXPCEncoding;
- (void)dealloc;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isSecure;
- (long long)keyboardType;
- (void)setKeyboardType:(long long)arg1;
- (void)setSecure:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setValue:(id)arg1;
- (id)title;
- (id)value;

@end
