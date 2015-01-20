/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSCountedSet;

@interface IMScheduledUpdater : IMManualUpdater {
    NSCountedSet *_holdingUpdatesKeys;
}

@property(retain) NSCountedSet * holdingUpdatesKeys;

- (void)beginHoldingUpdatesForKey:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)endHoldingUpdatesForAllKeys;
- (void)endHoldingUpdatesForKey:(id)arg1;
- (id)holdingUpdatesKeys;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)invalidate;
- (bool)isHoldingUpdates;
- (void)setHoldingUpdatesKeys:(id)arg1;
- (void)setNeedsUpdate;
- (void)updateIfNeeded;

@end
