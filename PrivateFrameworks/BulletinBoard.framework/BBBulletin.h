/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class BBAction, BBAttachments, BBContent, BBObserver, BBSound, NSArray, NSData, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSSet, NSString, NSTimeZone;

@interface BBBulletin : NSObject <NSCopying, NSCoding> {
    int _accessoryStyle;
    NSMutableDictionary *_actions;
    int _addressBookRecordID;
    NSSet *_alertSuppressionContexts;
    BBAttachments *_attachments;
    NSString *_bulletinID;
    NSString *_bulletinVersionID;
    NSArray *_buttons;
    BOOL _clearable;
    BBContent *_content;
    NSDictionary *_context;
    NSDate *_date;
    int _dateFormatStyle;
    BOOL _dateIsAllDay;
    NSDate *_endDate;
    NSDate *_expirationDate;
    unsigned int _expirationEvents;
    BOOL _expiresOnPublisherDeath;
    NSDate *_lastInterruptDate;
    NSMutableArray *_lifeAssertions;
    BBContent *_modalAlertContent;
    BBObserver *_observer;
    NSString *_publisherBulletinID;
    NSString *_publisherRecordID;
    NSDate *_recencyDate;
    NSString *_sectionID;
    int _sectionSubtype;
    BOOL _showsMessagePreview;
    BBSound *_sound;
    NSSet *_subsectionIDs;
    NSTimeZone *_timeZone;
    NSString *_unlockActionLabelOverride;
    NSSet *alertSuppressionAppIDs_deprecated;
    unsigned int realertCount_deprecated;
}

@property int accessoryStyle;
@property(copy) BBAction * acknowledgeAction;
@property(retain) NSMutableDictionary * actions;
@property int addressBookRecordID;
@property(readonly) NSSet * alertSuppressionAppIDs;
@property(copy) NSSet * alertSuppressionAppIDs_deprecated;
@property(copy) NSSet * alertSuppressionContexts;
@property(copy) BBAction * alternateAction;
@property(retain) BBAttachments * attachments;
@property(readonly) BOOL bannerShowsSubtitle;
@property(copy) NSString * bulletinID;
@property(copy) NSString * bulletinVersionID;
@property(copy) NSArray * buttons;
@property BOOL clearable;
@property(readonly) BOOL coalescesWhenLocked;
@property(retain) BBContent * content;
@property(retain) NSDictionary * context;
@property(retain) NSDate * date;
@property int dateFormatStyle;
@property BOOL dateIsAllDay;
@property(copy) BBAction * defaultAction;
@property(retain) NSDate * endDate;
@property(retain) NSDate * expirationDate;
@property unsigned int expirationEvents;
@property(copy) BBAction * expireAction;
@property BOOL expiresOnPublisherDeath;
@property(readonly) NSString * fullUnlockActionLabel;
@property(readonly) int iPodOutAlertType;
@property(readonly) BOOL inertWhenLocked;
@property(retain) NSDate * lastInterruptDate;
@property(retain) NSMutableArray * lifeAssertions;
@property(copy) NSString * message;
@property(readonly) unsigned int messageNumberOfLines;
@property(readonly) NSString * missedBannerDescriptionFormat;
@property(retain) BBContent * modalAlertContent;
@property(retain) BBObserver * observer;
@property(readonly) BOOL orderSectionUsingRecencyDate;
@property(readonly) BOOL preservesUnlockActionCase;
@property(readonly) int primaryAttachmentType;
@property(copy) NSString * publisherBulletinID;
@property(readonly) unsigned int realertCount;
@property unsigned int realertCount_deprecated;
@property(retain) NSDate * recencyDate;
@property(copy) NSString * recordID;
@property(copy) NSString * section;
@property(readonly) NSString * sectionDisplayName;
@property(readonly) BOOL sectionDisplaysCriticalBulletins;
@property(copy) NSString * sectionID;
@property(readonly) NSData * sectionIconData;
@property int sectionSubtype;
@property(readonly) BOOL showsDateInFloatingLockScreenAlert;
@property BOOL showsMessagePreview;
@property(readonly) BOOL showsSubtitle;
@property(retain) BBSound * sound;
@property(copy) NSSet * subsectionIDs;
@property(copy) NSString * subtitle;
@property(readonly) unsigned int subtypePriority;
@property(readonly) BOOL suppressesMessageForPrivacy;
@property(retain) NSTimeZone * timeZone;
@property(copy) NSString * title;
@property(readonly) NSString * topic;
@property(readonly) NSString * unlockActionLabel;
@property(copy) NSString * unlockActionLabelOverride;
@property(readonly) BOOL usesVariableLayout;
@property(readonly) BOOL visuallyIndicatesWhenDateIsInFuture;

+ (void)addBulletinToCache:(id)arg1;
+ (id)bulletinWithBulletin:(id)arg1;
+ (id)copyCachedBulletinWithBulletinID:(id)arg1;
+ (void)killSounds;
+ (void)removeBulletinFromCache:(id)arg1;

- (id)_actionKeyForButtonIndex:(unsigned int)arg1;
- (void)_fillOutCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;
- (id)_responseForActionKey:(id)arg1;
- (int)accessoryStyle;
- (id)acknowledgeAction;
- (id)actionBlockForButton:(id)arg1 withOrigin:(int)arg2;
- (id)actionBlockForButton:(id)arg1;
- (id)actions;
- (void)addLifeAssertion:(id)arg1;
- (int)addressBookRecordID;
- (id)alertSuppressionAppIDs;
- (id)alertSuppressionAppIDs_deprecated;
- (id)alertSuppressionContexts;
- (id)alternateAction;
- (id)attachments;
- (id)attachmentsCreatingIfNecessary:(BOOL)arg1;
- (BOOL)bannerShowsSubtitle;
- (id)bulletinID;
- (id)bulletinVersionID;
- (id)buttons;
- (BOOL)clearable;
- (BOOL)coalescesWhenLocked;
- (id)composedAttachmentImage;
- (id)composedAttachmentImageForKey:(id)arg1 withObserver:(id)arg2;
- (id)composedAttachmentImageForKey:(id)arg1;
- (struct CGSize { float x1; float x2; })composedAttachmentImageSize;
- (struct CGSize { float x1; float x2; })composedAttachmentImageSizeForKey:(id)arg1 withObserver:(id)arg2;
- (struct CGSize { float x1; float x2; })composedAttachmentImageSizeForKey:(id)arg1;
- (struct CGSize { float x1; float x2; })composedAttachmentImageSizeWithObserver:(id)arg1;
- (id)composedAttachmentImageWithObserver:(id)arg1;
- (id)content;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (int)dateFormatStyle;
- (BOOL)dateIsAllDay;
- (void)dealloc;
- (id)defaultAction;
- (id)defaultActionBlock;
- (id)defaultActionBlockWithOrigin:(int)arg1 canBypassPinLock:(BOOL*)arg2 requiresUnlock:(BOOL*)arg3 shouldDeactivateAwayController:(BOOL*)arg4 suitabilityFilter:(id)arg5;
- (id)defaultActionBlockWithOrigin:(int)arg1;
- (void)deliverResponse:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)expirationDate;
- (unsigned int)expirationEvents;
- (id)expireAction;
- (BOOL)expiresOnPublisherDeath;
- (id)fullUnlockActionLabel;
- (int)iPodOutAlertType;
- (BOOL)inertWhenLocked;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)killSound;
- (id)lastInterruptDate;
- (id)lifeAssertions;
- (id)message;
- (unsigned int)messageNumberOfLines;
- (id)missedBannerDescriptionFormat;
- (id)modalAlertContent;
- (unsigned int)numberOfAdditionalAttachments;
- (unsigned int)numberOfAdditionalAttachmentsOfType:(int)arg1;
- (id)observer;
- (BOOL)orderSectionUsingRecencyDate;
- (BOOL)playSound;
- (BOOL)preservesUnlockActionCase;
- (int)primaryAttachmentType;
- (id)publisherBulletinID;
- (unsigned int)realertCount;
- (unsigned int)realertCount_deprecated;
- (id)recencyDate;
- (id)recordID;
- (id)responseForAcknowledgeAction;
- (id)responseForButtonActionAtIndex:(unsigned int)arg1;
- (id)responseForDefaultAction;
- (id)responseForExpireAction;
- (id)responseSendBlock;
- (id)section;
- (id)sectionDisplayName;
- (BOOL)sectionDisplaysCriticalBulletins;
- (id)sectionID;
- (id)sectionIconData;
- (int)sectionSubtype;
- (void)setAccessoryStyle:(int)arg1;
- (void)setAcknowledgeAction:(id)arg1;
- (void)setActions:(id)arg1;
- (void)setAddressBookRecordID:(int)arg1;
- (void)setAlertSuppressionAppIDs_deprecated:(id)arg1;
- (void)setAlertSuppressionContexts:(id)arg1;
- (void)setAlternateAction:(id)arg1;
- (void)setAttachments:(id)arg1;
- (void)setBulletinID:(id)arg1;
- (void)setBulletinVersionID:(id)arg1;
- (void)setButtons:(id)arg1;
- (void)setClearable:(BOOL)arg1;
- (void)setContent:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDateFormatStyle:(int)arg1;
- (void)setDateIsAllDay:(BOOL)arg1;
- (void)setDefaultAction:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setExpirationEvents:(unsigned int)arg1;
- (void)setExpireAction:(id)arg1;
- (void)setExpiresOnPublisherDeath:(BOOL)arg1;
- (void)setLastInterruptDate:(id)arg1;
- (void)setLifeAssertions:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setModalAlertContent:(id)arg1;
- (void)setObserver:(id)arg1;
- (void)setPublisherBulletinID:(id)arg1;
- (void)setRealertCount_deprecated:(unsigned int)arg1;
- (void)setRecencyDate:(id)arg1;
- (void)setRecordID:(id)arg1;
- (void)setSection:(id)arg1;
- (void)setSectionID:(id)arg1;
- (void)setSectionSubtype:(int)arg1;
- (void)setShowsMessagePreview:(BOOL)arg1;
- (void)setSound:(id)arg1;
- (void)setSubsectionIDs:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUnlockActionLabelOverride:(id)arg1;
- (BOOL)showsDateInFloatingLockScreenAlert;
- (BOOL)showsMessagePreview;
- (BOOL)showsSubtitle;
- (id)sound;
- (id)subsectionIDs;
- (id)subtitle;
- (unsigned int)subtypePriority;
- (BOOL)suppressesMessageForPrivacy;
- (id)timeZone;
- (id)title;
- (id)topic;
- (id)unlockActionLabel;
- (id)unlockActionLabelOverride;
- (BOOL)usesVariableLayout;
- (BOOL)visuallyIndicatesWhenDateIsInFuture;

@end
