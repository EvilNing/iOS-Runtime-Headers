/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDMPTCPSubflowSwitchingReport : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int switchCount : 1; 
    } _has;
    int _switchCount;
    NSString *_switchFromInterfaceName;
    NSString *_switchToInterfaceName;
    unsigned long long _timestamp;
}

@property bool hasSwitchCount;
@property(readonly) bool hasSwitchFromInterfaceName;
@property(readonly) bool hasSwitchToInterfaceName;
@property bool hasTimestamp;
@property int switchCount;
@property(retain) NSString * switchFromInterfaceName;
@property(retain) NSString * switchToInterfaceName;
@property unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSwitchCount;
- (bool)hasSwitchFromInterfaceName;
- (bool)hasSwitchToInterfaceName;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasSwitchCount:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setSwitchCount:(int)arg1;
- (void)setSwitchFromInterfaceName:(id)arg1;
- (void)setSwitchToInterfaceName:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (int)switchCount;
- (id)switchFromInterfaceName;
- (id)switchToInterfaceName;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
