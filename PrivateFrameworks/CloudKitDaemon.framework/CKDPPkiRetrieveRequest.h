/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSMutableArray;

@interface CKDPPkiRetrieveRequest : PBRequest <NSCopying> {
    NSMutableArray *_userIds;
}

@property(retain) NSMutableArray * userIds;

+ (id)options;

- (void).cxx_destruct;
- (void)addUserId:(id)arg1;
- (void)clearUserIds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setUserIds:(id)arg1;
- (id)userIdAtIndex:(unsigned long long)arg1;
- (id)userIds;
- (unsigned long long)userIdsCount;
- (void)writeTo:(id)arg1;

@end
