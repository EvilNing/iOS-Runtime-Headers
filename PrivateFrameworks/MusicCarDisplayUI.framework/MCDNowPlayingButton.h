/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@class CALayer;

@interface MCDNowPlayingButton : UIButton {
    CALayer *_focusColorLayer;
    CALayer *_leftBorder;
    bool_hidesLeftBorder;
}

@property bool hidesLeftBorder;

+ (id)buttonWithHeight:(double)arg1;

- (void).cxx_destruct;
- (void)_focusStateDidChange;
- (bool)_isFocusableElement;
- (bool)hidesLeftBorder;
- (void)layoutSubviews;
- (void)setHidesLeftBorder:(bool)arg1;
- (void)sizeToFit;

@end
