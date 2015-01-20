/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class CLLocationManager, NSDate, NSDateFormatter, NSObject<OS_dispatch_queue>, NSString, NSTimer, PCPersistentTimer;

@interface _EKAlarmEngine : NSObject <CLLocationManagerDelegate> {
    NSDateFormatter *_dateFormatter;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _lastCheckpoint;
    int _lastDBSequence;
    CLLocationManager *_locationManager;
    NSDate *_nextFireDate;
    double _populateStart;
    NSTimer *_syncTimer;
    PCPersistentTimer *_timer;
    NSDate *_tomorrow;
    bool_fencesNeedAdjusted;
    bool_pendingChanges;
    bool_populating;
    bool_shouldUpdateWithForceForAlarmTable;
    bool_shouldUpdateWithForceForFences;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (id)_publisherBulletinIDForReminder:(id)arg1;
+ (id)_publisherBulletinIDForTask:(void*)arg1;
+ (id)_publisherBulletinIDForTaskUniqueIdentifier:(id)arg1;
+ (id)sharedInstance;

- (void)_adjustFences:(id)arg1;
- (void)_calendarNotificationSettingChanged;
- (void)_databaseChanged;
- (id)_dateFormatter;
- (bool)_haveAlarmsChanged:(id)arg1;
- (bool)_isDataProtected;
- (void)_killSyncTimer;
- (void)_killTimer;
- (void)_locationDaemonDidLaunch;
- (void)_notifyAlarmsFired:(id)arg1;
- (bool)_populateAlarmTable:(id)arg1;
- (void)_populateFinished;
- (void)_protectedDataDidBecomeAvailable;
- (void)_proximityAlertTriggered:(id)arg1 entered:(bool)arg2;
- (void)_removeAllFences;
- (void)_rescheduleTimer;
- (void)_resetSyncTimer;
- (bool)_shouldAdjustFencesWithStatus:(int)arg1;
- (void)_storeAlarms:(id)arg1 nextScheduleLimit:(double)arg2 eventStore:(id)arg3;
- (id)_stringForAuthorizationStatus:(int)arg1;
- (void)_syncDidEnd;
- (void)_syncDidStart;
- (void)_syncTimerFired:(id)arg1;
- (void)_timeDidChangeSignificantly;
- (void)_timeZoneChanged:(id)arg1;
- (void)_timerFired:(id)arg1;
- (void)_updateWithForceForAlarmTable:(bool)arg1 forFences:(bool)arg2;
- (void)dealloc;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;
- (void)reschedule;
- (void)start;
- (void)stop;

@end
