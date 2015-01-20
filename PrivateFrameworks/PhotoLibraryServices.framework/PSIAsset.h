/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSArray, NSString;

@interface PSIAsset : NSObject <NSCopying> {
    struct __CFArray { } *_categories;
    NSArray *_contentStrings;
    struct __CFArray { } *_owningCategories;
    NSString *_uuid;
}

@property(readonly) struct __CFArray { }* categories;
@property(readonly) NSArray * contentStrings;
@property(readonly) struct __CFArray { }* owningCategories;
@property(setter=setUUID:,copy) NSString * uuid;

- (id)_initForCopy:(bool)arg1;
- (void)addContentString:(id)arg1 category:(short)arg2 owningCategory:(short)arg3;
- (struct __CFArray { }*)categories;
- (void)clear;
- (id)contentStrings;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (struct __CFArray { }*)owningCategories;
- (void)reverse;
- (void)setUUID:(id)arg1;
- (id)uuid;

@end
