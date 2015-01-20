/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@class NSDictionary, NSString;

@interface IMDHandle : NSObject {
    NSString *_countryCode;
    NSString *_id;
    NSString *_unformattedID;
}

@property(retain) NSString * ID;
@property(retain) NSString * countryCode;
@property(retain,readonly) NSDictionary * handleInfo;
@property(retain) NSString * unformattedID;

- (id)ID;
- (long long)compareIDs:(id)arg1;
- (id)countryCode;
- (void)dealloc;
- (id)description;
- (id)handleInfo;
- (unsigned long long)hash;
- (id)initWithID:(id)arg1 unformattedID:(id)arg2 countryCode:(id)arg3;
- (bool)isBetterDefinedThan:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setID:(id)arg1;
- (void)setUnformattedID:(id)arg1;
- (id)unformattedID;

@end
