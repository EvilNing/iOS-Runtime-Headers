/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class <SKUIPopupMenuDelegate>, NSArray, NSString, SKUIMenuViewController, UIButton, UILabel, UIPopoverController;

@interface SKUIPopupMenuHeaderView : UIView <SKUIMenuViewControllerDelegate, UIPopoverControllerDelegate> {
    <SKUIPopupMenuDelegate> *_delegate;
    UIButton *_menuButton;
    NSArray *_menuItemTitles;
    UILabel *_menuLabel;
    NSString *_menuLabelTitle;
    UIPopoverController *_menuPopoverController;
    SKUIMenuViewController *_menuViewController;
    long long _selectedMenuItemIndex;
    UILabel *_titleLabel;
}

@property(copy,readonly) NSString * debugDescription;
@property <SKUIPopupMenuDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(copy) NSArray * menuItemTitles;
@property(copy) NSString * menuLabelTitle;
@property long long selectedMenuItemIndex;
@property(readonly) Class superclass;
@property(copy) NSString * title;

- (void).cxx_destruct;
- (void)_menuButtonAction:(id)arg1;
- (void)_reloadMenuButton;
- (id)_titleLabel;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)menuItemTitles;
- (id)menuLabelTitle;
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (long long)selectedMenuItemIndex;
- (void)setBackgroundColor:(id)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMenuItemTitles:(id)arg1;
- (void)setMenuLabelTitle:(id)arg1;
- (void)setSelectedMenuItemIndex:(long long)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;

@end
