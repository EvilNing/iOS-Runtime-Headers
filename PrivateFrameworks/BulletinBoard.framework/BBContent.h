/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class NSString;

@interface BBContent : NSObject <NSCopying, NSSecureCoding> {
    NSString *_message;
    NSString *_subtitle;
    NSString *_title;
}

@property(copy) NSString * message;
@property(copy) NSString * subtitle;
@property(copy) NSString * title;

+ (id)contentWithTitle:(id)arg1 subtitle:(id)arg2 message:(id)arg3;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqualToContent:(id)arg1;
- (id)message;
- (void)setMessage:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
