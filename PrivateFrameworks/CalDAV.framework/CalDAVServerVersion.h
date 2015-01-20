/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSSet, NSString;

@interface CalDAVServerVersion : NSObject <NSCopying> {
    NSSet *_complianceClasses;
    NSString *_serverHeader;
    NSString *_supportedCalendarComponentSets;
    double _version;
    bool_supportsAutoSchedule;
    bool_supportsCalendarHomeSync;
    bool_supportsCalendarNoTimezone;
    bool_supportsCalendarProxy;
    bool_supportsCheckForValidEmail;
    bool_supportsChecksumming;
    bool_supportsExtendedCalendarQuery;
    bool_supportsInboxAvailability;
    bool_supportsManagedAttachments;
    bool_supportsPrincipalPropertySearch;
    bool_supportsPrivateComments;
    bool_supportsPrivateEvents;
    bool_supportsRequestCompression;
    bool_supportsSharing;
    bool_supportsSharingNoScheduling;
    bool_supportsSubscriptionCalendars;
    bool_supportsTimeRangeFilter;
    bool_supportsTimeRangeFilterOnInbox;
    bool_supportsTimeRangeFilterWithoutEndDate;
    bool_supportsTodoTimeRangeFilter;
}

@property(retain) NSSet * complianceClasses;
@property(copy) NSString * serverHeader;
@property(copy) NSString * supportedCalendarComponentSets;
@property bool supportsAutoSchedule;
@property bool supportsCalendarHomeSync;
@property bool supportsCalendarNoTimezone;
@property bool supportsCalendarProxy;
@property bool supportsCheckForValidEmail;
@property bool supportsChecksumming;
@property bool supportsExtendedCalendarQuery;
@property bool supportsInboxAvailability;
@property bool supportsManagedAttachments;
@property bool supportsPrincipalPropertySearch;
@property bool supportsPrivateComments;
@property bool supportsPrivateEvents;
@property bool supportsRequestCompression;
@property bool supportsSharing;
@property bool supportsSharingNoScheduling;
@property bool supportsSubscriptionCalendars;
@property bool supportsTimeRangeFilter;
@property bool supportsTimeRangeFilterOnInbox;
@property bool supportsTimeRangeFilterWithoutEndDate;
@property bool supportsTodoTimeRangeFilter;
@property(readonly) NSString * type;
@property double version;

+ (id)_prototypeMatchingServerHeaders:(id)arg1;
+ (id)versionWithHTTPHeaders:(id)arg1;
+ (id)versionWithPropertyValue:(id)arg1;

- (id)_additionalFlagKeys;
- (id)_allFlagKeys;
- (id)_propertiesToComplianceClasses;
- (void)_setPropertiesFromComplianceClasses:(id)arg1;
- (id)complianceClasses;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)propertyValue;
- (id)serverHeader;
- (void)setComplianceClasses:(id)arg1;
- (void)setServerHeader:(id)arg1;
- (void)setSupportedCalendarComponentSets:(id)arg1;
- (void)setSupportsAutoSchedule:(bool)arg1;
- (void)setSupportsCalendarHomeSync:(bool)arg1;
- (void)setSupportsCalendarNoTimezone:(bool)arg1;
- (void)setSupportsCalendarProxy:(bool)arg1;
- (void)setSupportsCheckForValidEmail:(bool)arg1;
- (void)setSupportsChecksumming:(bool)arg1;
- (void)setSupportsExtendedCalendarQuery:(bool)arg1;
- (void)setSupportsInboxAvailability:(bool)arg1;
- (void)setSupportsManagedAttachments:(bool)arg1;
- (void)setSupportsPrincipalPropertySearch:(bool)arg1;
- (void)setSupportsPrivateComments:(bool)arg1;
- (void)setSupportsPrivateEvents:(bool)arg1;
- (void)setSupportsRequestCompression:(bool)arg1;
- (void)setSupportsSharing:(bool)arg1;
- (void)setSupportsSharingNoScheduling:(bool)arg1;
- (void)setSupportsSubscriptionCalendars:(bool)arg1;
- (void)setSupportsTimeRangeFilter:(bool)arg1;
- (void)setSupportsTimeRangeFilterOnInbox:(bool)arg1;
- (void)setSupportsTimeRangeFilterWithoutEndDate:(bool)arg1;
- (void)setSupportsTodoTimeRangeFilter:(bool)arg1;
- (void)setVersion:(double)arg1;
- (id)supportedCalendarComponentSets;
- (bool)supportsAutoSchedule;
- (bool)supportsCalendarHomeSync;
- (bool)supportsCalendarNoTimezone;
- (bool)supportsCalendarProxy;
- (bool)supportsCheckForValidEmail;
- (bool)supportsChecksumming;
- (bool)supportsExtendedCalendarQuery;
- (bool)supportsInboxAvailability;
- (bool)supportsManagedAttachments;
- (bool)supportsPrincipalPropertySearch;
- (bool)supportsPrivateComments;
- (bool)supportsPrivateEvents;
- (bool)supportsRequestCompression;
- (bool)supportsSharing;
- (bool)supportsSharingNoScheduling;
- (bool)supportsSubscriptionCalendars;
- (bool)supportsTimeRangeFilter;
- (bool)supportsTimeRangeFilterOnInbox;
- (bool)supportsTimeRangeFilterWithoutEndDate;
- (bool)supportsTodoTimeRangeFilter;
- (id)type;
- (double)version;

@end
