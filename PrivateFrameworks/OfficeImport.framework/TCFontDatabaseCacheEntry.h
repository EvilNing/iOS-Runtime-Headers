/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;

@interface TCFontDatabaseCacheEntry : NSObject {
    int _fontClass;
    NSString *_name;
    bool_bold;
    bool_italic;
}

@property(readonly) bool bold;
@property(readonly) int fontClass;
@property(readonly) bool italic;
@property(readonly) NSString * name;

+ (id)newFontDatabaseCacheEntryWithName:(id)arg1 fontClass:(int)arg2 bold:(bool)arg3 italic:(bool)arg4;

- (bool)bold;
- (void)dealloc;
- (id)description;
- (int)fontClass;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 fontClass:(int)arg2 bold:(bool)arg3 italic:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (bool)italic;
- (id)name;

@end
