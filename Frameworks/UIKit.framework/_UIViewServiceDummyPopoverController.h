/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <_UIViewServiceDummyPopoverControllerDelegate>;

@interface _UIViewServiceDummyPopoverController : UIPopoverController {
    <_UIViewServiceDummyPopoverControllerDelegate> *_dummyPopoverControllerDelegate;
}

@property(retain) <_UIViewServiceDummyPopoverControllerDelegate> * dummyPopoverControllerDelegate;

+ (Class)_popoverViewClass;

- (bool)_attemptsToAvoidKeyboard;
- (void)_popoverView:(id)arg1 didSetUseToolbarShine:(bool)arg2;
- (void)_super_setPopoverContentSize:(struct CGSize { double x1; double x2; })arg1;
- (id)dummyPopoverControllerDelegate;
- (void)setDummyPopoverControllerDelegate:(id)arg1;
- (void)setPopoverContentSize:(struct CGSize { double x1; double x2; })arg1 animated:(bool)arg2;

@end
