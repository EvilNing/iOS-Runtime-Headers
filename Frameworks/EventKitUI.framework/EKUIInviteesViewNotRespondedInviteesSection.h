/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class EKEvent, NSMutableArray, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString;

@interface EKUIInviteesViewNotRespondedInviteesSection : NSObject <EKUIInviteesViewSection> {
    id _addInviteesTapped;
    NSOperationQueue *_availabilityRequestsQueue;
    NSString *_cachedAddInviteeCellReuseIdentifier;
    NSString *_cachedInviteeCellReuseIdentifier;
    EKEvent *_event;
    NSMutableSet *_participantAddressesForInFlightAvailabilityOperations;
    NSMutableDictionary *_participantAddressesToAvailabilityType;
    NSMutableDictionary *_participantAddressesToParticipantIndex;
    id _participantRemoved;
    id _participantTapped;
    NSMutableArray *_participants;
    unsigned long long _reuseIdentifierVersion;
    id _tableViewCellHook;
    bool_canSeeAttendeeStatuses;
    bool_editable;
}

@property(copy) id addInviteesTapped;
@property(retain) NSOperationQueue * availabilityRequestsQueue;
@property(retain) NSString * cachedAddInviteeCellReuseIdentifier;
@property(retain) NSString * cachedInviteeCellReuseIdentifier;
@property bool canSeeAttendeeStatuses;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property bool editable;
@property(retain) EKEvent * event;
@property(readonly) unsigned long long hash;
@property(retain) NSMutableSet * participantAddressesForInFlightAvailabilityOperations;
@property(retain) NSMutableDictionary * participantAddressesToAvailabilityType;
@property(retain) NSMutableDictionary * participantAddressesToParticipantIndex;
@property(copy) id participantRemoved;
@property(copy) id participantTapped;
@property(retain) NSMutableArray * participants;
@property unsigned long long reuseIdentifierVersion;
@property(readonly) Class superclass;
@property(copy) id tableViewCellHook;

+ (id)_participantAddressForParticipant:(id)arg1;

- (void).cxx_destruct;
- (void)_addAddressToSetOfAddressesToInflightOperations:(id)arg1;
- (bool)_isAddInviteesRow:(long long)arg1;
- (bool)_isValidRow:(long long)arg1;
- (id)_lookUpAvailabilityTypeForParticipantAddress:(id)arg1;
- (id)_lookUpParticipantIndexForParticipantAddress:(id)arg1;
- (void)_removeAddressFromSetOfAddressesToInflightOperations:(id)arg1;
- (void)_setAvailabilityType:(id)arg1 forParticipantAddress:(id)arg2;
- (bool)_setOfAddressesToInflightOperationsContainsAddress:(id)arg1;
- (void)_setParticipantIndex:(id)arg1 forParticipantAddress:(id)arg2;
- (void)_updateCell:(id)arg1 forParticipantAtIndex:(long long)arg2 animated:(bool)arg3;
- (void)_updateCellForParticipantWithAddress:(id)arg1;
- (id)addInviteesTapped;
- (id)availabilityRequestsQueue;
- (id)cachedAddInviteeCellReuseIdentifier;
- (id)cachedInviteeCellReuseIdentifier;
- (bool)canEditRow:(id)arg1;
- (bool)canSeeAttendeeStatuses;
- (bool)canSelectRow:(id)arg1;
- (void)cancelOutstandingOperations;
- (id)cellForIndexPath:(id)arg1 inTableView:(id)arg2;
- (void)commitEditingStyle:(long long)arg1 forRow:(id)arg2;
- (void)dealloc;
- (id)debugTitle;
- (bool)editable;
- (long long)editingStyleForRow:(id)arg1;
- (double)estimatedHeightForRow:(id)arg1;
- (id)event;
- (id)headerTitle;
- (id)init;
- (unsigned long long)numberOfRows;
- (id)participantAddressesForInFlightAvailabilityOperations;
- (id)participantAddressesToAvailabilityType;
- (id)participantAddressesToParticipantIndex;
- (id)participantRemoved;
- (id)participantTapped;
- (id)participants;
- (void)reloadAndRegisterReusableCellsWithTableView:(id)arg1;
- (unsigned long long)reuseIdentifierVersion;
- (bool)sectionShouldBeShown;
- (void)selectRow:(id)arg1;
- (void)setAddInviteesTapped:(id)arg1;
- (void)setAvailabilityRequestsQueue:(id)arg1;
- (void)setCachedAddInviteeCellReuseIdentifier:(id)arg1;
- (void)setCachedInviteeCellReuseIdentifier:(id)arg1;
- (void)setCanSeeAttendeeStatuses:(bool)arg1;
- (void)setEditable:(bool)arg1;
- (void)setEvent:(id)arg1;
- (void)setParticipantAddressesForInFlightAvailabilityOperations:(id)arg1;
- (void)setParticipantAddressesToAvailabilityType:(id)arg1;
- (void)setParticipantAddressesToParticipantIndex:(id)arg1;
- (void)setParticipantRemoved:(id)arg1;
- (void)setParticipantTapped:(id)arg1;
- (void)setParticipants:(id)arg1;
- (void)setReuseIdentifierVersion:(unsigned long long)arg1;
- (void)setTableViewCellHook:(id)arg1;
- (id)tableViewCellHook;
- (id)titleForDeleteConfirmationButtonForRow:(id)arg1;
- (void)updateWithEvent:(id)arg1 editable:(bool)arg2;

@end
