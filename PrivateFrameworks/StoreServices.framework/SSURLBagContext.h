/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface SSURLBagContext : NSObject <SSXPCCoding, NSCopying> {
    int _allowedRetryCount;
    BOOL _allowsExpiredBags;
    int _bagType;
    NSMutableDictionary *_httpHeaders;
    BOOL _ignoresDiskCache;
    NSNumber *_userIdentifier;
    BOOL _usesCachedBagsOnly;
}

@property(copy) NSDictionary * allHTTPHeaders;
@property int allowedRetryCount;
@property BOOL allowsExpiredBags;
@property int bagType;
@property(readonly) NSString * cacheKey;
@property(readonly) struct __CFString { }* diskCacheExpirationTimeKey;
@property(readonly) NSString * diskCacheKey;
@property(readonly) NSString * diskCachePath;
@property BOOL ignoresDiskCache;
@property(retain) NSNumber * userIdentifier;
@property BOOL usesCachedBagsOnly;

+ (id)contextWithBagType:(int)arg1;
+ (id)diskCacheDirectoryPath;

- (id)allHTTPHeaders;
- (int)allowedRetryCount;
- (BOOL)allowsExpiredBags;
- (int)bagType;
- (id)cacheKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (struct __CFString { }*)diskCacheExpirationTimeKey;
- (id)diskCacheKey;
- (id)diskCachePath;
- (unsigned int)hash;
- (BOOL)ignoresDiskCache;
- (id)init;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)setAllHTTPHeaders:(id)arg1;
- (void)setAllowedRetryCount:(int)arg1;
- (void)setAllowsExpiredBags:(BOOL)arg1;
- (void)setBagType:(int)arg1;
- (void)setIgnoresDiskCache:(BOOL)arg1;
- (void)setUserIdentifier:(id)arg1;
- (void)setUsesCachedBagsOnly:(BOOL)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (id)userIdentifier;
- (BOOL)usesCachedBagsOnly;
- (id)valueForHTTPHeaderField:(id)arg1;

@end
