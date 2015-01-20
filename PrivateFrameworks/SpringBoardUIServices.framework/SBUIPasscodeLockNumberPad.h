/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@class <SBUIPasscodeLockNumberPadDelegate>, NSArray, NSString, SBNumberPadWithDelegate, SBUIButton, UIColor, UIControl<SBUIPasscodeNumberPadButton>, UIView;

@interface SBUIPasscodeLockNumberPad : UIView <SBNumberPadDelegate> {
    SBUIButton *_backspaceButton;
    UIView *_bottomPaddingView;
    SBUIButton *_cancelButton;
    UIColor *_customBackgroundColor;
    <SBUIPasscodeLockNumberPadDelegate> *_delegate;
    UIControl<SBUIPasscodeNumberPadButton> *_downButton;
    SBUIButton *_emergencyCallButton;
    UIView *_leftPaddingView;
    SBNumberPadWithDelegate *_numberPad;
    UIView *_rightPaddingView;
    bool_showsBackspaceButton;
    bool_showsCancelButton;
    bool_showsEmergencyCallButton;
    bool_useLightStyle;
}

@property(readonly) NSArray * buttons;
@property(copy,readonly) NSString * debugDescription;
@property <SBUIPasscodeLockNumberPadDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(retain) UIControl<SBUIPasscodeNumberPadButton> * downButton;
@property(readonly) unsigned long long hash;
@property bool showsBackspaceButton;
@property bool showsCancelButton;
@property bool showsEmergencyCallButton;
@property(readonly) Class superclass;

+ (id)_buttonForCharacter:(unsigned int)arg1 withLightStyle:(bool)arg2;
+ (struct CGSize { double x1; double x2; })_inputButtonCircleSize;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_inputButtonCircleSpacing;

- (void)_backspaceButtonHit;
- (void)_cancelButtonHit;
- (void)_configureAdditionalButtons;
- (double)_distanceToTopOfFirstButton;
- (void)_emergencyCallButtonHit;
- (id)_fontForAncillaryButton;
- (void)_numberPadTouchCancelled:(id)arg1 forEvent:(id)arg2;
- (void)_numberPadTouchDown:(id)arg1 forEvent:(id)arg2;
- (void)_numberPadTouchDrag:(id)arg1 forEvent:(id)arg2;
- (void)_numberPadTouchUp:(id)arg1 forEvent:(id)arg2;
- (void)_setLuminosityBoost:(double)arg1;
- (id)buttons;
- (void)dealloc;
- (id)delegate;
- (id)downButton;
- (id)initWithDefaultSizeAndLightStyle:(bool)arg1;
- (void)setBackgroundAlpha:(double)arg1;
- (void)setCustomBackgroundColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDownButton:(id)arg1;
- (void)setShowsBackspaceButton:(bool)arg1;
- (void)setShowsCancelButton:(bool)arg1;
- (void)setShowsEmergencyCallButton:(bool)arg1;
- (bool)showsBackspaceButton;
- (bool)showsCancelButton;
- (bool)showsEmergencyCallButton;

@end
