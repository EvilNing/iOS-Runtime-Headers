/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIImage;

@interface UIAccessibilityCustomAction : NSObject {
    NSString *_name;
    SEL _selector;
    id _weakTarget;
}

@property(getter=_image,setter=_setImage:,retain) UIImage * image;
@property(copy) NSString * name;
@property SEL selector;
@property id target;

- (id)_accessibilityCustomActionIdentifier;
- (bool)_accessibilityMatchesCustomActionIdentifier:(id)arg1;
- (id)_image;
- (void)_setImage:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithName:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (id)name;
- (SEL)selector;
- (void)setName:(id)arg1;
- (void)setSelector:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
