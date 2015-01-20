/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUNavigationMenu;

@interface SUNavigationMenuViewController : SUMenuViewController {
    SUNavigationMenu *_navigationMenu;
}

@property(readonly) SUNavigationMenu * navigationMenu;

- (void)_cancelAction:(id)arg1;
- (void)_protocolButtonAction:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithNavigationMenu:(id)arg1;
- (id)navigationMenu;
- (long long)numberOfMenuItems;
- (id)titleOfMenuItemAtIndex:(long long)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
