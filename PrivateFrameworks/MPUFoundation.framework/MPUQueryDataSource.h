/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@class MPMediaQuery, MPMediaQuerySectionInfo, NSArray, NSMutableSet;

@interface MPUQueryDataSource : MPUDataSource {
    NSMutableSet *_additionalUniqueItemPropertiesToFetch;
    NSArray *_entities;
    MPMediaQuery *_query;
    MPMediaQuerySectionInfo *_sectionInfo;
    bool_ignoringInvalidationDueToBackgroundApplicationState;
    bool_invalidateWhenEnteringForeground;
}

@property bool ignoringInvalidationDueToBackgroundApplicationState;
@property(readonly) MPMediaQuery * query;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_defaultMediaLibraryDidChangeNotification:(id)arg1;
- (bool)_deleteHidesFromCloudForIndex:(unsigned long long)arg1 hidesAll:(out bool*)arg2;
- (void)_invalidateCalculatedEntities;
- (void)_invalidateIfNeeded;
- (void)_isCloudEnabledDidChangeNotification:(id)arg1;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (void)_mediaLibraryDisplayValuesDidChangeNotification:(id)arg1;
- (void)_mediaLibraryDynamicPropertiesDidChangeNotification:(id)arg1;
- (void)_postInvalidationNotificationIfNeeded;
- (id)_sectionInfo;
- (void)addAdditionalMediaEntityPropertiesToFetch:(id)arg1;
- (bool)canEditEntityAtIndex:(unsigned long long)arg1;
- (bool)canSelectEntityAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (void)deleteEntityAtIndex:(unsigned long long)arg1;
- (long long)editingTypeForEntityAtIndex:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)entities;
- (unsigned long long)hash;
- (bool)ignoringInvalidationDueToBackgroundApplicationState;
- (unsigned long long)indexOfSectionForSectionTitleAtIndex:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntityType:(long long)arg1;
- (id)initWithQuery:(id)arg1 entityType:(long long)arg2;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (id)localizedSectionIndexTitles;
- (id)localizedSectionTitleAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)query;
- (id)queryForEntityAtIndex:(unsigned long long)arg1;
- (id)queryForEntityAtIndexPath:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfSectionAtIndex:(unsigned long long)arg1;
- (void)removeAdditionalMediaEntityPropertiesToFetch:(id)arg1;
- (void)setIgnoringInvalidationDueToBackgroundApplicationState:(bool)arg1;
- (bool)showsEntityCountFooter;
- (bool)showsIndexBar;

@end
