/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPDate : PBCodable <NSCopying> {
    struct { 
        unsigned int time : 1; 
    } _has;
    double _time;
}

@property bool hasTime;
@property double time;

- (id)_prettyDictionaryRepresentation;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTime;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTime:(bool)arg1;
- (void)setTime:(double)arg1;
- (double)time;
- (void)writeTo:(id)arg1;

@end
