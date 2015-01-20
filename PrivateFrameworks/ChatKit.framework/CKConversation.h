/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKComposition, CKEntity, IMChat, IMService, NSArray, NSAttributedString, NSString, UIImage;

@interface CKConversation : NSObject {
    struct { 
        unsigned int ignoringTypingUpdates : 1; 
    IMChat *_chat;
    } _conversationFlags;
    NSAttributedString *_groupName;
    unsigned int _limitToLoad;
    NSString *_name;
    NSArray *_pendingHandles;
    NSArray *_recipients;
    UIImage *_thumbnailImage;
    bool_needsReload;
}

@property(readonly) BOOL buttonColor;
@property(readonly) bool canLeave;
@property(retain) IMChat * chat;
@property(readonly) unsigned long long disclosureAtomStyle;
@property NSString * displayName;
@property bool forceMMS;
@property(getter=isGroupConversation,readonly) bool groupConversation;
@property(retain,readonly) NSString * groupID;
@property(retain,readonly) NSAttributedString * groupName;
@property(retain,readonly) NSArray * handles;
@property(readonly) bool hasDisplayName;
@property(readonly) bool hasUnreadMessages;
@property(getter=isIgnoringTypingUpdates) bool ignoringTypingUpdates;
@property(readonly) bool isToEmailAddress;
@property(getter=hasLeft,readonly) bool left;
@property unsigned int limitToLoad;
@property bool localUserIsRecording;
@property bool localUserIsTyping;
@property(getter=isMuted,readonly) bool muted;
@property(retain,readonly) NSString * name;
@property(readonly) bool needsReload;
@property(getter=isPending,readonly) bool pending;
@property(copy,readonly) NSArray * pendingEntities;
@property(copy) NSArray * pendingHandles;
@property(retain,readonly) NSString * previewText;
@property(retain,readonly) CKEntity * recipient;
@property(readonly) unsigned long long recipientCount;
@property(copy,readonly) NSArray * recipientStrings;
@property(retain) NSArray * recipients;
@property(retain) NSString * rememberedKeyboard;
@property(retain,readonly) IMService * sendingService;
@property(retain,readonly) NSString * serviceDisplayName;
@property(readonly) bool shouldShowCharacterCount;
@property(readonly) bool supportsMutatingGroupMembers;
@property(retain) UIImage * thumbnailImage;
@property(readonly) unsigned long long unreadCount;
@property(retain) CKComposition * unsentComposition;

+ (bool)_iMessage_canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2;
+ (bool)_iMessage_canSendComposition:(id)arg1 error:(id*)arg2;
+ (bool)_iMessage_canSendMessageWithMediaObjectTypes:(int*)arg1 errorCode:(long long*)arg2;
+ (bool)_iMessage_canSendMessageWithMediaObjectTypes:(int*)arg1;
+ (id)_iMessage_localizedErrorForReason:(long long)arg1;
+ (long long)_iMessage_maxAttachmentCount;
+ (unsigned long long)_iMessage_maxTransferFileSizeForWiFi:(bool)arg1;
+ (double)_iMessage_maxTrimDurationForMediaType:(int)arg1;
+ (bool)_sms_canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2;
+ (bool)_sms_canSendComposition:(id)arg1 error:(id*)arg2;
+ (bool)_sms_canSendMessageWithMediaObjectTypes:(int*)arg1 errorCode:(long long*)arg2;
+ (bool)_sms_canSendMessageWithMediaObjectTypes:(int*)arg1;
+ (id)_sms_localizedErrorForReason:(long long)arg1;
+ (long long)_sms_maxAttachmentCount;
+ (double)_sms_maxTrimDurationForMediaType:(int)arg1;
+ (bool)_sms_mediaObjectPassesDurationCheck:(id)arg1;
+ (bool)_sms_mediaObjectPassesRestriction:(id)arg1;
+ (id)newPendingConversation;

- (id)__generateThumbnailOfDiameter:(double)arg1 withRecipientImage:(id)arg2 andOtherRecipient:(id)arg3;
- (id)__generateThumbnailOfDiameter:(double)arg1 withRecordIDs:(id)arg2 recipientCount:(unsigned long long)arg3;
- (bool)_accountIsOperational:(id)arg1 forService:(id)arg2;
- (bool)_chatHasValidAccount:(id)arg1 forService:(id)arg2;
- (void)_chatItemsDidChange:(id)arg1;
- (bool)_chatSupportsTypingIndicators;
- (void)_clearTypingIndicatorsIfNecessary;
- (void)_deleteAllMessagesAndRemoveGroup:(bool)arg1;
- (void)_handleChatJoinStateDidChange:(id)arg1;
- (void)_handleChatParticipantsDidChange:(id)arg1;
- (bool)_handleIsForThisConversation:(id)arg1;
- (void)_handlePreferredServiceChangedNotification:(id)arg1;
- (id)_headerTitleForPendingMediaObjects:(id)arg1 subject:(id)arg2 onService:(id)arg3;
- (id)_headerTitleForService:(id)arg1;
- (bool)_iMessage_canSendToRecipients:(id)arg1 alertIfUnable:(bool)arg2;
- (bool)_iMessage_supportsCharacterCountForAddresses:(id)arg1;
- (id)_messageOrderedABRecordIDsForChatItems:(id)arg1;
- (id)_nameForHandle:(id)arg1;
- (void)_postThumbnailChanged;
- (void)_recordRecentContact;
- (bool)_sms_canSendToRecipients:(id)arg1 alertIfUnable:(bool)arg2;
- (bool)_sms_supportsCharacterCountForAddresses:(id)arg1;
- (bool)_sms_willSendMMSByDefaultForAddresses:(id)arg1;
- (void)acceptTransfer:(id)arg1;
- (void)addRecipientHandles:(id)arg1;
- (BOOL)buttonColor;
- (bool)canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2;
- (bool)canInsertMoreRecipients;
- (bool)canLeave;
- (bool)canSendComposition:(id)arg1 error:(id*)arg2;
- (bool)canSendToRecipients:(id)arg1 alertIfUnable:(bool)arg2;
- (id)chat;
- (long long)compareBySequenceNumberAndDateDescending:(id)arg1;
- (id)copyForPendingConversation;
- (id)date;
- (void)dealloc;
- (void)deleteAllMessages;
- (void)deleteAllMessagesAndRemoveGroup;
- (id)description;
- (unsigned long long)disclosureAtomStyle;
- (id)displayName;
- (id)displayNameForMediaObjects:(id)arg1 subject:(id)arg2;
- (void)enumerateMessagesWithOptions:(unsigned long long)arg1 usingBlock:(id)arg2;
- (bool)forceMMS;
- (id)groupID;
- (id)groupName;
- (id)handles;
- (bool)hasDisplayName;
- (bool)hasLeft;
- (bool)hasUnreadMessages;
- (id)init;
- (id)initWithChat:(id)arg1;
- (bool)isDowngraded;
- (bool)isGroupConversation;
- (bool)isIgnoringTypingUpdates;
- (bool)isMuted;
- (bool)isPending;
- (bool)isPlaceholder;
- (bool)isToEmailAddress;
- (unsigned int)limitToLoad;
- (void)loadAllMessages;
- (void)loadMoreMessages;
- (bool)localUserIsRecording;
- (bool)localUserIsTyping;
- (void)markAllMessagesAsRead;
- (double)maxTrimDurationForMediaType:(int)arg1;
- (long long)maximumRecipientsForSendingService;
- (id)messageWithComposition:(id)arg1;
- (id)name;
- (bool)needsReload;
- (bool)noAvailableServices;
- (BOOL)outgoingBubbleColor;
- (id)pendingEntities;
- (id)pendingHandles;
- (id)previewText;
- (id)recipient;
- (unsigned long long)recipientCount;
- (id)recipientStrings;
- (id)recipients;
- (void)refreshServiceForSending;
- (void)regenerateThumbnail;
- (void)reloadIfNeeded;
- (id)rememberedKeyboard;
- (void)removeRecipientHandles:(id)arg1;
- (void)resetCaches;
- (void)resetNameCaches;
- (BOOL)sendButtonColor;
- (void)sendMessage:(id)arg1 newComposition:(bool)arg2;
- (void)sendMessage:(id)arg1 onService:(id)arg2 newComposition:(bool)arg3;
- (id)sendingService;
- (id)serviceDisplayName;
- (void)setChat:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setForceMMS:(bool)arg1;
- (void)setIgnoringTypingUpdates:(bool)arg1;
- (void)setLimitToLoad:(unsigned int)arg1;
- (void)setLoadedMessageCount:(unsigned long long)arg1;
- (void)setLocalUserIsRecording:(bool)arg1;
- (void)setLocalUserIsTyping:(bool)arg1;
- (void)setMutedUntilDate:(id)arg1;
- (void)setNeedsReload;
- (void)setPendingComposeRecipients:(id)arg1;
- (void)setPendingHandles:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setRememberedKeyboard:(id)arg1;
- (void)setThumbnailImage:(id)arg1;
- (void)setUnsentComposition:(id)arg1;
- (id)shortDescription;
- (bool)shouldShowCharacterCount;
- (bool)supportsMutatingGroupMembers;
- (id)thumbnail;
- (id)thumbnailImage;
- (id)uniqueIdentifier;
- (void)unmute;
- (unsigned long long)unreadCount;
- (id)unsentComposition;
- (void)updateUserActivityWithComposition:(id)arg1;

@end
