/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class UIBarButtonItem, UILabel;

@interface PUCloudPhotoStorageViewController : UITableViewController {
    UIBarButtonItem *_buyBarButtonItem;
    UILabel *_footerLabel;
    UILabel *_headerLabel;
    long long _selectedStorageLevelIndex;
}

- (void).cxx_destruct;
- (void)_buyButtonTapped:(id)arg1;
- (void)_cancelButtonTapped:(id)arg1;
- (void)_setupHeaderAndFooterViews;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
