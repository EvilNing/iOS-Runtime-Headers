/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABUIPerson, NSString;

@interface ABPersonLinkedInfo : NSObject {
    NSString *_name;
    ABUIPerson *_person;
    NSString *_type;
    bool_unified;
}

@property(retain) NSString * name;
@property(retain) ABUIPerson * person;
@property(retain) NSString * type;
@property(getter=isUnified) bool unified;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isUnified;
- (id)name;
- (id)person;
- (void)setName:(id)arg1;
- (void)setPerson:(id)arg1;
- (void)setType:(id)arg1;
- (void)setUnified:(bool)arg1;
- (id)type;

@end
