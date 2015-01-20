/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@class AXHAAccessQueue, NSObject<OS_dispatch_source>, NSString;

@interface AXHATimer : NSObject {
    AXHAAccessQueue *_accessQueue;
    NSObject<OS_dispatch_source> *_dispatchTimer;
    NSString *_label;
    int _state;
    bool_accessQueueIsExternal;
    bool_active;
    bool_automaticallyCancelPendingBlockUponSchedulingNewBlock;
}

@property(retain) AXHAAccessQueue * accessQueue;
@property bool accessQueueIsExternal;
@property(getter=isActive) bool active;
@property bool automaticallyCancelPendingBlockUponSchedulingNewBlock;
@property(retain) NSObject<OS_dispatch_source> * dispatchTimer;
@property(copy) NSString * label;
@property(getter=isPending,readonly) bool pending;
@property int state;

+ (id)timerTargettingMainAccessQueue;

- (void)_afterDelay:(double)arg1 processBlock:(id)arg2 shouldTreatAsWritingBlock:(bool)arg3;
- (void)_didFinishProcessingBlock;
- (void)_performEnqueuedWritingBlock:(id)arg1 asynchronousExecutionWarningHandler:(SEL)arg2;
- (void)_reallyCancel;
- (void)_warnAboutAsynchronousCancelling;
- (void)_warnAboutAsynchronousScheduling;
- (id)accessQueue;
- (bool)accessQueueIsExternal;
- (void)afterDelay:(double)arg1 processBlock:(id)arg2;
- (void)afterDelay:(double)arg1 processReadingBlock:(id)arg2;
- (void)afterDelay:(double)arg1 processWritingBlock:(id)arg2;
- (bool)automaticallyCancelPendingBlockUponSchedulingNewBlock;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (id)dispatchTimer;
- (id)init;
- (id)initWithTargetAccessQueue:(id)arg1;
- (bool)isActive;
- (bool)isPending;
- (id)label;
- (void)setAccessQueue:(id)arg1;
- (void)setAccessQueueIsExternal:(bool)arg1;
- (void)setActive:(bool)arg1;
- (void)setAutomaticallyCancelPendingBlockUponSchedulingNewBlock:(bool)arg1;
- (void)setDispatchTimer:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setState:(int)arg1;
- (int)state;

@end
