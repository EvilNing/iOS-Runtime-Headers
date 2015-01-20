/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, UIActionSheet;

@interface CKActionSheetManager : NSObject <UIActionSheetDelegate> {
    UIActionSheet *_actionSheet;
    id _handler;
    id _presenter;
    bool_dismissingActionSheetForRotation;
    bool_performBeforeAnimation;
}

@property(retain) UIActionSheet * actionSheet;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy) id handler;
@property(readonly) unsigned long long hash;
@property bool performBeforeAnimation;
@property(copy) id presenter;
@property(readonly) Class superclass;

+ (id)sharedInstance;

- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (id)actionSheet;
- (void)dealloc;
- (void)didFinishRotating;
- (void)dismissActionSheet:(id)arg1 withButtonIndex:(long long)arg2;
- (void)dismissCurrentActionSheet;
- (id)handler;
- (id)init;
- (bool)performBeforeAnimation;
- (id)presenter;
- (void)setActionSheet:(id)arg1;
- (void)setHandler:(id)arg1;
- (void)setPerformBeforeAnimation:(bool)arg1;
- (void)setPresenter:(id)arg1;
- (void)showActionSheet:(id)arg1 withPresenter:(id)arg2 performBeforeAnimation:(bool)arg3 withHandler:(id)arg4;
- (void)showActionSheet:(id)arg1 withPresenter:(id)arg2 withHandler:(id)arg3;
- (void)willStartRotating;

@end
