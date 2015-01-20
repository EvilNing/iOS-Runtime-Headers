/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CADisplayLink, NSMutableSet;

@interface CKImageAnimationTimer : NSObject {
    CADisplayLink *_displayLink;
    unsigned long long _frame;
    NSMutableSet *_observers;
}

@property(retain) CADisplayLink * displayLink;
@property(retain) NSMutableSet * observers;

+ (id)sharedTimer;

- (void)addAnimationTimerObserver:(id)arg1;
- (void)animationTimerFired;
- (void)dealloc;
- (id)displayLink;
- (unsigned long long)frame;
- (id)init;
- (id)observers;
- (void)removeAnimationTimerObserver:(id)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setObservers:(id)arg1;

@end
