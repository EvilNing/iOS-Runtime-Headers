/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class CLRegion, NSCalendar, NSData, NSDate, NSString, NSTimeZone;

@interface UIConcreteLocalNotification : UILocalNotification {
    NSString *alertAction;
    NSString *alertBody;
    NSString *alertLaunchImage;
    long long applicationIconBadgeNumber;
    boolallowSnooze;
    boolfireNotificationsWhenAppRunning;
    boolhasAction;
    boolhideAlertTitle;
    boolinterruptAudioAndLockDevice;
    boolisTransient;
    boolregionTriggersOnce;
    boolresumeApplicationInBackground;
    boolshowAlarmStatusBarItem;
    NSString *category;
    NSString *customLockSliderLabel;
    NSDate *fireDate;
    NSString *firedNotificationName;
    CLRegion *region;
    int remainingRepeatCount;
    NSCalendar *repeatCalendar;
    unsigned long long repeatInterval;
    NSString *snoozedNotificationName;
    NSString *soundName;
    int soundType;
    NSTimeZone *timeZone;
    int totalRepeatCount;
    NSData *userInfoData;
}

- (void)_setUserInfoData:(id)arg1;
- (id)alertAction;
- (id)alertBody;
- (id)alertLaunchImage;
- (bool)allowSnooze;
- (long long)applicationIconBadgeNumber;
- (id)category;
- (void)clearNonSystemProperties;
- (long long)compareFireDates:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customLockSliderLabel;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fireDate;
- (bool)fireNotificationsWhenAppRunning;
- (id)firedNotificationName;
- (bool)hasAction;
- (unsigned long long)hash;
- (bool)hideAlertTitle;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)interruptAudioAndLockDevice;
- (bool)isEqual:(id)arg1;
- (bool)isTransient;
- (bool)isTriggeredByDate;
- (bool)isValid;
- (id)nextFireDateAfterDate:(id)arg1 localTimeZone:(id)arg2;
- (id)nextFireDateForLastFireDate:(id)arg1;
- (id)region;
- (bool)regionTriggersOnce;
- (int)remainingRepeatCount;
- (id)repeatCalendar;
- (unsigned long long)repeatInterval;
- (bool)resumeApplicationInBackground;
- (void)setAlertAction:(id)arg1;
- (void)setAlertBody:(id)arg1;
- (void)setAlertLaunchImage:(id)arg1;
- (void)setAllowSnooze:(bool)arg1;
- (void)setApplicationIconBadgeNumber:(long long)arg1;
- (void)setCategory:(id)arg1;
- (void)setCustomLockSliderLabel:(id)arg1;
- (void)setFireDate:(id)arg1;
- (void)setFireNotificationsWhenAppRunning:(bool)arg1;
- (void)setFiredNotificationName:(id)arg1;
- (void)setHasAction:(bool)arg1;
- (void)setHideAlertTitle:(bool)arg1;
- (void)setInterruptAudioAndLockDevice:(bool)arg1;
- (void)setIsTransient:(bool)arg1;
- (void)setRegion:(id)arg1;
- (void)setRegionTriggersOnce:(bool)arg1;
- (void)setRemainingRepeatCount:(int)arg1;
- (void)setRepeatCalendar:(id)arg1;
- (void)setRepeatInterval:(unsigned long long)arg1;
- (void)setResumeApplicationInBackground:(bool)arg1;
- (void)setShowAlarmStatusBarItem:(bool)arg1;
- (void)setSnoozedNotificationName:(id)arg1;
- (void)setSoundName:(id)arg1;
- (void)setSoundType:(int)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTotalRepeatCount:(int)arg1;
- (void)setUserInfo:(id)arg1;
- (bool)showAlarmStatusBarItem;
- (id)snoozedNotificationName;
- (id)soundName;
- (int)soundType;
- (id)timeZone;
- (int)totalRepeatCount;
- (id)userInfo;
- (void)validate;

@end
