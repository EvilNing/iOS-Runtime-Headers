/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABPersonTabsLayoutManager>, ABPersonViewControllerHelper, NSString, UIView;

@interface ABPersonTableView : UITableView <ABPersonTabsScrollView> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    ABPersonViewControllerHelper *_helper;
    double _minimumBottomInset;
    } _savedContentInset;
    <ABPersonTabsLayoutManager> *_tabsLayoutManager;
}

@property(retain) UIView * backgroundView;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property ABPersonViewControllerHelper * helper;
@property double minimumBottomInset;
@property(readonly) Class superclass;
@property(retain) <ABPersonTabsLayoutManager> * tabsLayoutManager;

- (id)helper;
- (void)layoutSubviews;
- (double)minimumBottomInset;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setHelper:(id)arg1;
- (void)setMinimumBottomInset:(double)arg1;
- (void)setTabsLayoutManager:(id)arg1;
- (id)tabsLayoutManager;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (bool)touchesShouldCancelInContentView:(id)arg1;

@end
