/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class NSArray, NSString;

@interface RadioHistoryCategory : NSObject <NSCopying, NSMutableCopying> {
    NSString *_categoryDescription;
    NSArray *_items;
    NSString *_name;
    NSString *_stationHash;
    long long _stationID;
    long long _type;
}

@property(copy,readonly) NSString * categoryDescription;
@property(copy,readonly) NSArray * items;
@property(copy,readonly) NSString * name;
@property(copy,readonly) NSString * stationHash;
@property(readonly) long long stationID;
@property(readonly) long long type;

- (void).cxx_destruct;
- (id)categoryDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)items;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (id)stationHash;
- (long long)stationID;
- (long long)type;

@end
