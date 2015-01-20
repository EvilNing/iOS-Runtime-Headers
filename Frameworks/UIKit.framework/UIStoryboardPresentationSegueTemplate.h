/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStoryboardPresentationSegueTemplate : UIStoryboardSegueTemplate {
    long long _modalPresentationStyle;
    long long _modalTransitionStyle;
    bool_animates;
    bool_useDefaultModalPresentationStyle;
    bool_useDefaultModalTransitionStyle;
}

@property bool animates;
@property long long modalPresentationStyle;
@property long long modalTransitionStyle;
@property bool useDefaultModalPresentationStyle;
@property bool useDefaultModalTransitionStyle;

- (bool)animates;
- (id)defaultSegueClassName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)modalPresentationStyle;
- (long long)modalTransitionStyle;
- (id)segueWithDestinationViewController:(id)arg1;
- (void)setAnimates:(bool)arg1;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)setModalTransitionStyle:(long long)arg1;
- (void)setUseDefaultModalPresentationStyle:(bool)arg1;
- (void)setUseDefaultModalTransitionStyle:(bool)arg1;
- (bool)useDefaultModalPresentationStyle;
- (bool)useDefaultModalTransitionStyle;

@end
