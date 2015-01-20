/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, NSObject<OS_dispatch_queue>;

@interface TSUProgressGroup : TSUProgress {
    NSArray *mChildren;
    NSArray *mChildrenProgressObservers;
    NSObject<OS_dispatch_queue> *mChildrenProgressObserversQueue;
}

- (id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(id)arg3;
- (void)dealloc;
- (id)initWithChildren:(id)arg1;
- (bool)isIndeterminate;
- (double)maxValue;
- (void)p_updateChildrenProgressObservers;
- (void)removeProgressObserver:(id)arg1;
- (double)value;

@end
