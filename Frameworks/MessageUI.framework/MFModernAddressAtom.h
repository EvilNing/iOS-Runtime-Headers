/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class <MFModernAddressAtomDelegate>, MFModernAtomView, NSString, UIFont;

@interface MFModernAddressAtom : UIControl <MFModernAtomViewResembling> {
    unsigned int _addressIsPhoneNumber : 1;
    unsigned int _updatedABPerson : 1;
    unsigned int _isDisplayStringFromAddressBook : 1;
    void *_addressBook;
    MFModernAtomView *_atomView;
    <MFModernAddressAtomDelegate> *_delegate;
    NSString *_displayString;
    NSString *_fullAddress;
    int _identifier;
    unsigned int _maxWidth;
    void *_person;
}

@property(readonly) struct CGPoint { double x1; double x2; } baselinePoint;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property(readonly) unsigned long long hash;
@property bool hidesVIPIndicator;
@property bool isPrimaryAddressAtom;
@property unsigned long long presentationOptions;
@property double scale;
@property bool separatorHidden;
@property bool separatorIsLeftAligned;
@property int separatorStyle;
@property(readonly) Class superclass;
@property(retain) UIFont * titleFont;

+ (id)copyDisplayStringForAddress:(id)arg1 usingAddressBook:(void*)arg2 useAbbreviatedName:(bool)arg3;

- (void*)ABPerson;
- (int)ABPropertyType;
- (void)_displayStringDidChange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_highlightBounds;
- (void)_updateABPerson;
- (void)_updateDisplayStringIncludingABPerson:(bool)arg1;
- (void)addressBookDidChange:(id)arg1;
- (struct CGPoint { double x1; double x2; })baselinePoint;
- (void)dealloc;
- (id)description;
- (id)displayString;
- (id)emailAddress;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (int)identifier;
- (id)initWithAddress:(id)arg1 presentationOptions:(unsigned long long)arg2 isPhoneNumber:(bool)arg3 maxWidth:(double)arg4 addressBook:(void*)arg5;
- (bool)isDisplayStringFromAddressBook;
- (void)layoutSubviews;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)performBuildInAnimationFromTextColor:(id)arg1 withDuration:(double)arg2;
- (unsigned long long)presentationOptions;
- (id)presentationOptionsDescription;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setAddress:(id)arg1;
- (void)setAtomFont:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setIsPrimaryAddressAtom:(bool)arg1;
- (void)setMaxWidth:(unsigned int)arg1;
- (void)setOpaque:(bool)arg1;
- (void)setPresentationOptions:(unsigned long long)arg1;
- (void)setScale:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)unmodifiedAddressString;

@end
