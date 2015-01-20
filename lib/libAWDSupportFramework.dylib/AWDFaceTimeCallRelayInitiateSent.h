/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDFaceTimeCallRelayInitiateSent : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int errorCode : 1; 
        unsigned int isVideo : 1; 
        unsigned int onLockScreen : 1; 
        unsigned int sendDuration : 1; 
    int _errorCode;
    NSString *_guid;
    } _has;
    unsigned int _isVideo;
    unsigned int _onLockScreen;
    unsigned int _sendDuration;
    unsigned long long _timestamp;
}

@property int errorCode;
@property(retain) NSString * guid;
@property bool hasErrorCode;
@property(readonly) bool hasGuid;
@property bool hasIsVideo;
@property bool hasOnLockScreen;
@property bool hasSendDuration;
@property bool hasTimestamp;
@property unsigned int isVideo;
@property unsigned int onLockScreen;
@property unsigned int sendDuration;
@property unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)errorCode;
- (id)guid;
- (bool)hasErrorCode;
- (bool)hasGuid;
- (bool)hasIsVideo;
- (bool)hasOnLockScreen;
- (bool)hasSendDuration;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)isVideo;
- (void)mergeFrom:(id)arg1;
- (unsigned int)onLockScreen;
- (bool)readFrom:(id)arg1;
- (unsigned int)sendDuration;
- (void)setErrorCode:(int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasIsVideo:(bool)arg1;
- (void)setHasOnLockScreen:(bool)arg1;
- (void)setHasSendDuration:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setIsVideo:(unsigned int)arg1;
- (void)setOnLockScreen:(unsigned int)arg1;
- (void)setSendDuration:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
