/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class <MFCorecipientsIndicatorAtomDelegate>, NSArray;

@interface MFCorecipientsIndicatorAtom : MFModernAtomView {
    <MFCorecipientsIndicatorAtomDelegate> *_delegate;
    NSArray *_recipients;
    bool_touchesWereCancelled;
}

@property <MFCorecipientsIndicatorAtomDelegate> * delegate;
@property(retain) NSArray * recipients;

- (id)delegate;
- (id)init;
- (id)initWithRecipients:(id)arg1;
- (id)recipients;
- (void)setDelegate:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
