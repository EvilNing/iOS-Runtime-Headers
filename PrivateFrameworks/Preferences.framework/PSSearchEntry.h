/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSMutableArray, NSMutableSet, NSString, PSSearchEntry, PSSpecifier, PSSpecifierAction;

@interface PSSearchEntry : NSObject {
    PSSpecifierAction *_action;
    NSString *_bundleName;
    NSMutableSet *_childEntries;
    PSSpecifier *_groupSpecifier;
    NSMutableArray *_keywords;
    NSString *_manifestBundleName;
    PSSearchEntry *_parentEntry;
    NSString *_plistName;
    PSSpecifier *_specifier;
}

@property(retain) PSSpecifierAction * action;
@property(copy) NSString * bundleName;
@property(retain,readonly) NSMutableSet * childEntries;
@property(retain) PSSpecifier * groupSpecifier;
@property(copy,readonly) NSString * identifier;
@property(retain,readonly) NSMutableArray * keywords;
@property(copy) NSString * manifestBundleName;
@property(copy,readonly) NSString * name;
@property PSSearchEntry * parentEntry;
@property(copy) NSString * plistName;
@property(retain,readonly) PSSpecifier * specifier;

- (bool)_hasDetailController:(bool)arg1;
- (id)action;
- (id)ancestorEntries;
- (id)bundleName;
- (id)childEntries;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)groupSpecifier;
- (bool)hasDetailController;
- (bool)hasListController;
- (id)hierarchyDescription;
- (id)identifier;
- (id)initWithSpecifier:(id)arg1 parent:(id)arg2;
- (bool)isRootEntry;
- (bool)isSectionEntry;
- (id)keywords;
- (id)manifestBundleName;
- (id)name;
- (id)parentEntry;
- (id)plistName;
- (id)rootEntry;
- (id)sectionEntry;
- (void)setAction:(id)arg1;
- (void)setBundleName:(id)arg1;
- (void)setGroupSpecifier:(id)arg1;
- (void)setManifestBundleName:(id)arg1;
- (void)setParentEntry:(id)arg1;
- (void)setPlistName:(id)arg1;
- (id)specifier;
- (bool)treeContainsPropertyForKey:(id)arg1;

@end
