/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VUSocialUpload.framework/VUSocialUpload
 */

@class <VimeoComposeOptionViewDelegate>, NSArray, NSIndexPath, NSMutableArray, NSString, UITableViewCell, UITextView;

@interface VimeoDetailsController : UITableViewController <UITextFieldDelegate> {
    <VimeoComposeOptionViewDelegate> *_delegate;
    UITableViewCell *_descriptionCell;
    UITextView *_descriptionTextView;
    NSIndexPath *_indexPathForPendingFirstResponder;
    NSArray *_privacyLevels;
    long long _privacySetting;
    NSMutableArray *_tags;
    long long _videoSize;
    NSArray *_videoSizeFormatStrings;
    NSArray *_videoSizeStrings;
    NSMutableArray *_videoSizes;
}

@property(copy,readonly) NSString * debugDescription;
@property <VimeoComposeOptionViewDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) NSIndexPath * indexPathForPendingFirstResponder;
@property(retain) NSArray * privacyLevels;
@property(readonly) long long privacySetting;
@property(readonly) Class superclass;
@property(readonly) NSArray * tags;
@property(readonly) NSString * videoDescription;
@property(readonly) long long videoSize;
@property(retain) NSArray * videoSizeFormatStrings;
@property(retain) NSArray * videoSizeStrings;
@property(readonly) NSMutableArray * videoSizes;

+ (long long)defaultVideoSize;

- (void).cxx_destruct;
- (id)_tagIndexPathForTextField:(id)arg1;
- (id)delegate;
- (id)indexPathForPendingFirstResponder;
- (id)initWithStyle:(long long)arg1;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)privacyLevels;
- (long long)privacySetting;
- (void)setDelegate:(id)arg1;
- (void)setIndexPathForPendingFirstResponder:(id)arg1;
- (void)setPrivacyLevels:(id)arg1;
- (void)setVideoSizeFormatStrings:(id)arg1;
- (void)setVideoSizeStrings:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tags;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (id)videoDescription;
- (long long)videoSize;
- (id)videoSizeFormatStrings;
- (id)videoSizeStrings;
- (id)videoSizes;
- (void)viewWillDisappear:(bool)arg1;

@end
