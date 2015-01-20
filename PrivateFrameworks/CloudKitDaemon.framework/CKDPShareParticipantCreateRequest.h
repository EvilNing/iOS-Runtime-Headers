/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPShareIdentifier, NSMutableArray, NSString;

@interface CKDPShareParticipantCreateRequest : PBRequest <NSCopying> {
    NSString *_invitationImageUrl;
    NSString *_invitationMessage;
    NSMutableArray *_participants;
    CKDPShareIdentifier *_shareId;
}

@property(readonly) bool hasInvitationImageUrl;
@property(readonly) bool hasInvitationMessage;
@property(readonly) bool hasShareId;
@property(retain) NSString * invitationImageUrl;
@property(retain) NSString * invitationMessage;
@property(retain) NSMutableArray * participants;
@property(retain) CKDPShareIdentifier * shareId;

+ (id)options;

- (void).cxx_destruct;
- (void)addParticipant:(id)arg1;
- (void)clearParticipants;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasInvitationImageUrl;
- (bool)hasInvitationMessage;
- (bool)hasShareId;
- (unsigned long long)hash;
- (id)invitationImageUrl;
- (id)invitationMessage;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)participantAtIndex:(unsigned long long)arg1;
- (id)participants;
- (unsigned long long)participantsCount;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setInvitationImageUrl:(id)arg1;
- (void)setInvitationMessage:(id)arg1;
- (void)setParticipants:(id)arg1;
- (void)setShareId:(id)arg1;
- (id)shareId;
- (void)writeTo:(id)arg1;

@end
