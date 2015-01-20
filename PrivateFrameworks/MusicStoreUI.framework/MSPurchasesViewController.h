/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
 */

@class NSArray, SUSegmentedControl, UIView;

@interface MSPurchasesViewController : SUViewController {
    long long _activeViewControllerIndex;
    UIView *_containerView;
    SUSegmentedControl *_segmentedControl;
    NSArray *_viewControllers;
}

- (id)_activeViewController;
- (id)_newSegmentedControlWithPageSectionGroup:(id)arg1;
- (id)_newViewControllerForPageSection:(id)arg1;
- (void)_reloadSegmentedControlPlacement;
- (void)_reloadViewControllersWithSection:(id)arg1;
- (void)_segmentedControlAction:(id)arg1;
- (void)_setActiveViewControllerIndex:(long long)arg1;
- (void)_showActiveViewController;
- (void)_tabConfigurationChangedNotification:(id)arg1;
- (id)copyArchivableContext;
- (void)dealloc;
- (id)initWithSection:(id)arg1;
- (void)invalidateForMemoryPurge;
- (void)loadView;
- (void)restoreArchivableContext:(id)arg1;
- (void)tabBarControllerDidReselectTabBarItem:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
