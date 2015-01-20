/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@interface MusicArtistsViewController : MusicTableViewController {
    bool_allowsActions;
}

@property bool allowsActions;

+ (id)actionCellConfigurationClasses;
+ (long long)containerItemType;
+ (long long)groupingType;
+ (id)itemPersistentIDProperty;
+ (id)persistentIDProperty;

- (void)_appDefaultsDidChangeNotification:(id)arg1;
- (id)_viewControllerForSelectedMediaEntity:(id)arg1;
- (bool)allowsActions;
- (void)dealloc;
- (void)defaultsDidChange;
- (id)initWithDataSource:(id)arg1 cellConfigurationClass:(Class)arg2;
- (bool)music_appendCurrentUserActivityContainerItems:(id)arg1 previousViewController:(id)arg2 nextViewController:(id)arg3;
- (bool)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2;
- (void)setAllowsActions:(bool)arg1;
- (bool)shouldShowActionCellConfiguration:(Class)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end
