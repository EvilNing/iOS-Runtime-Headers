/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface OCXContentTypes : NSObject {
    NSMutableDictionary *mContentTypeCountMap;
    NSMutableDictionary *mContentTypeObjectMap;
    NSMutableArray *mContentTypes;
    NSMutableSet *mDefaultTypes;
}

+ (id)relativePathForPath:(id)arg1 currentPath:(id)arg2;

- (void)addContentTypeForContentType:(id)arg1 extension:(id)arg2;
- (id)addContentTypeForKey:(id)arg1 contentType:(id)arg2 path:(id)arg3;
- (bool)containsContentType:(id)arg1 withKey:(id)arg2;
- (bool)containsContentType:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)isLastEntryContentType:(id)arg1;
- (id)pathForContentType:(id)arg1;
- (id)pathForKey:(id)arg1;
- (id)pathForMainDocument;
- (void)populateCommonExtensions;
- (id)uniquePathForPath:(id)arg1;
- (void)writeContentTypesToStream:(id)arg1;

@end
