/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSString;

@interface PKPaymentOptionGroupItem : NSObject {
    NSString *_detail;
    NSString *_groupType;
    id _referenceObject;
    NSString *_title;
}

@property(readonly) NSString * detail;
@property(readonly) NSString * groupType;
@property(readonly) bool isSelectable;
@property(readonly) id referenceObject;
@property(readonly) Class tableViewCellClass;
@property(readonly) NSString * title;

+ (id)_singleLineGroupTypes;

- (void)dealloc;
- (id)detail;
- (id)groupType;
- (unsigned long long)hash;
- (id)initWithReferenceObject:(id)arg1 title:(id)arg2 detail:(id)arg3 groupType:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToOptionGroupItem:(id)arg1;
- (bool)isSelectable;
- (id)referenceObject;
- (Class)tableViewCellClass;
- (id)title;

@end
