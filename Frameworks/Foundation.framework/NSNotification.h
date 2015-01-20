/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSDictionary, NSString;

@interface NSNotification : NSObject <NSCopying, NSCoding> {
}

@property(copy,readonly) NSString * name;
@property(retain,readonly) id object;
@property(copy,readonly) NSDictionary * userInfo;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)notificationWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
+ (id)notificationWithName:(id)arg1 object:(id)arg2;

- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)object;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)userInfo;

@end
