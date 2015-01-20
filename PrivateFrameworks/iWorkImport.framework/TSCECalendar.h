/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSCalendar, NSObject<OS_dispatch_semaphore>;

@interface TSCECalendar : NSObject {
    NSCalendar *mCalendar;
    NSObject<OS_dispatch_semaphore> *mSem;
}

- (id)components:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned long long)arg4;
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2;
- (id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned long long)arg3;
- (id)dateFromComponents:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCalendarIdentifier:(id)arg1;
- (void)setTimeZone:(id)arg1;

@end
