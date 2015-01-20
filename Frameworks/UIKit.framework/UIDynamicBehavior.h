/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableArray, UIDynamicAnimator;

@interface UIDynamicBehavior : NSObject {
    id _action;
    NSMutableArray *_addedBehaviors;
    NSMutableArray *_behaviors;
    UIDynamicAnimator *_context;
    NSMutableArray *_items;
    bool__isPrimitiveBehavior;
}

@property(setter=_isPrimitiveBehavior:) bool _isPrimitiveBehavior;
@property(copy) id action;
@property(copy,readonly) NSArray * childBehaviors;
@property(readonly) UIDynamicAnimator * dynamicAnimator;

+ (void)initialize;

- (void)_associate;
- (void)_changedParameterForBody:(id)arg1;
- (id)_context;
- (void)_dissociate;
- (id)_init:(bool)arg1;
- (void)_isPrimitiveBehavior:(bool)arg1;
- (bool)_isPrimitiveBehavior;
- (id)_items;
- (id)_itemsDescription;
- (void)_reevaluate:(unsigned long long)arg1;
- (void)_setContext:(id)arg1;
- (void)_setItems:(id)arg1;
- (void)_step;
- (id)action;
- (void)addChildBehavior:(id)arg1;
- (bool)allowsAnimatorToStop;
- (id)childBehaviors;
- (void)dealloc;
- (id)description;
- (id)dynamicAnimator;
- (id)init;
- (id)items;
- (void)removeChildBehavior:(id)arg1;
- (void)setAction:(id)arg1;
- (void)willMoveToAnimator:(id)arg1;

@end
