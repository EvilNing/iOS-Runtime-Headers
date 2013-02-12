/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class EKObjectToOneRelation, EKStructuredLocation, NSDate;

@interface EKAlarm : EKObject <NSCopying> {
    EKObjectToOneRelation *_locationRelation;
}

@property(copy) NSDate * absoluteDate;
@property(retain) EKObjectToOneRelation * locationRelation;
@property int proximity;
@property double relativeOffset;
@property(copy) EKStructuredLocation * structuredLocation;

+ (int)_currentAuthorizationStatus;
+ (id)alarmWithAbsoluteDate:(id)arg1;
+ (id)alarmWithRelativeOffset:(double)arg1;
+ (BOOL)areLocationsAllowed;
+ (BOOL)areLocationsAllowedWithAuthorizationStatus:(int)arg1;
+ (BOOL)areLocationsAvailable;
+ (BOOL)areLocationsCurrentlyEnabled;

- (id)UUID;
- (id)_localizedDescription:(BOOL)arg1 forEvent:(BOOL)arg2 isAllDay:(BOOL)arg3;
- (id)_locationRelation;
- (id)_originalAlarmRelation;
- (id)absoluteDate;
- (id)acknowledgedDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)externalID;
- (id)init;
- (id)initWithAbsoluteDate:(id)arg1;
- (id)initWithRelativeOffset:(double)arg1;
- (BOOL)isAbsolute;
- (BOOL)isDefaultAlarm;
- (id)lazyLoadRelationForKey:(id)arg1;
- (id)localizedAllDayDescription;
- (id)localizedDescription;
- (id)localizedDescriptionForReminder;
- (id)locationRelation;
- (id)longLocalizedAllDayDescription;
- (id)longLocalizedDescription;
- (id)originalAlarm;
- (id)owner;
- (id)ownerUUID;
- (int)proximity;
- (BOOL)rebase;
- (double)relativeOffset;
- (void)setAbsoluteDate:(id)arg1;
- (void)setAcknowledgedDate:(id)arg1;
- (void)setDefaultAlarm:(BOOL)arg1;
- (void)setLocationRelation:(id)arg1;
- (void)setProximity:(int)arg1;
- (void)setRelativeOffset:(double)arg1;
- (void)setStructuredLocation:(id)arg1;
- (id)structuredLocation;
- (BOOL)validate:(id*)arg1;

@end
