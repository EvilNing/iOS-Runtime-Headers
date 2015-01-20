/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSObject<OS_dispatch_queue>;

@interface PUPingTimer : NSObject {
    SEL _action;
    unsigned long long _maxPingCount;
    unsigned long long _pingCount;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _scheduleId;
    id _target;
    double _timeout;
    bool_everPinged;
    bool_invalid;
    bool_nextPingFires;
}

@property(readonly) SEL action;
@property(readonly) unsigned long long maxPingCount;
@property(readonly) unsigned long long pingCount;
@property(readonly) id target;
@property(readonly) double timeout;

- (void).cxx_destruct;
- (void)_inqFireWithScheduleId:(unsigned long long)arg1;
- (void)_inqSchedule;
- (SEL)action;
- (void)fireOnNextPing;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 maxPingCount:(unsigned long long)arg3 timeout:(double)arg4;
- (void)invalidate;
- (unsigned long long)maxPingCount;
- (void)ping;
- (unsigned long long)pingCount;
- (id)target;
- (double)timeout;

@end
