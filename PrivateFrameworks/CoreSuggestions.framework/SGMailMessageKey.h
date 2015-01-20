/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@class NSString;

@interface SGMailMessageKey : NSObject <NSCopying, NSSecureCoding> {
    NSString *_messageId;
    long long _messageIdHash;
    NSString *_source;
}

@property(readonly) NSString * messageId;
@property(readonly) long long messageIdHash;
@property(readonly) NSString * source;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSource:(id)arg1 messageId:(id)arg2;
- (id)initWithSource:(id)arg1 messageIdHash:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMailMessageKey:(id)arg1;
- (id)messageId;
- (long long)messageIdHash;
- (id)source;

@end
