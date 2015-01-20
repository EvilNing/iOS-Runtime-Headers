/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@class NSString;

@interface ABFavoritesEntry : NSObject {
    unsigned int _dirty : 1;
    NSString *_abDatabaseUUID;
    int _abIdentifier;
    int _abUid;
    void *_addressBook;
    NSString *_label;
    NSString *_name;
    int _property;
    int _type;
    NSString *_value;
}

+ (void)_runLookup;

- (void*)ABPerson;
- (int)_abUid;
- (void)_lookupChanged:(id)arg1;
- (void)_lookupNotFound;
- (void)_postEntryChanged;
- (void)_queueLookup;
- (void)_unqueueLookup;
- (void)dealloc;
- (void)dictionaryRepresentation:(id*)arg1 isDirty:(bool*)arg2;
- (id)dictionaryRepresentation;
- (id)displayName;
- (int)identifier;
- (id)initWithDictionaryRepresentation:(id)arg1 addressBook:(void*)arg2;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithPerson:(void*)arg1 property:(int)arg2 identifier:(int)arg3 type:(int)arg4;
- (id)initWithPerson:(void*)arg1 property:(int)arg2 identifier:(int)arg3;
- (bool)isEqual:(id)arg1;
- (id)label;
- (id)nonLocalizedLabel;
- (int)property;
- (void)recheckAddressBook;
- (int)type;
- (id)value;

@end
