/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSString, PLPhotoLibrary, UIActionSheet, UIAlertView;

@interface PLDeletePhotosActionController : NSObject <UIActionSheetDelegate, UIAlertViewDelegate> {
    long long _action;
    UIActionSheet *_actionSheet;
    long long _actionSheetStyle;
    NSArray *_additionalAssetsToDelete;
    NSArray *_assets;
    id _completionHandler;
    UIAlertView *_onetimeConfirmationSheet;
    PLPhotoLibrary *_photoLibrary;
    id _willDeleteHandler;
    bool_handlesDuplicates;
    bool_needsOnetimeConfirmationSheet;
}

@property(readonly) long long action;
@property long long actionSheetStyle;
@property(readonly) NSArray * assets;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) bool handlesDuplicates;
@property(readonly) unsigned long long hash;
@property(readonly) PLPhotoLibrary * photoLibrary;
@property(readonly) Class superclass;

- (void)_didCompleteWithDestructiveAction:(bool)arg1;
- (void)_getDeleteActionSheetTitle:(id*)arg1 destructiveButtonTitle:(id*)arg2 cancelButtonTitle:(id*)arg3 forAssets:(id)arg4 additionalPhotoStreamAssets:(id)arg5;
- (void)_setupActionSheet;
- (void)_setupOnetimeConfirmationSheet;
- (void)_showOnetimeConfirmation;
- (long long)action;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (long long)actionSheetStyle;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (id)assets;
- (void)dealloc;
- (void)dismissAnimated:(bool)arg1;
- (bool)handlesDuplicates;
- (id)initWithPhotoLibrary:(id)arg1 assets:(id)arg2 action:(long long)arg3 handleDuplicates:(bool)arg4;
- (id)photoLibrary;
- (void)redisplayFromObject:(id)arg1 animated:(bool)arg2;
- (void)setActionSheetStyle:(long long)arg1;
- (void)showFromObject:(id)arg1 animated:(bool)arg2 willDeleteHandler:(id)arg3 completionHandler:(id)arg4;
- (void)showInView:(id)arg1 willDeleteHandler:(id)arg2 completionHandler:(id)arg3;

@end
