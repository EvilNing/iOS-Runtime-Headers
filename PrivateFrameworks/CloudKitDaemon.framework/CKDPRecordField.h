/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPRecordFieldIdentifier, CKDPRecordFieldValue;

@interface CKDPRecordField : PBCodable <NSCopying> {
    CKDPRecordFieldIdentifier *_identifier;
    CKDPRecordFieldValue *_value;
}

@property(readonly) bool hasIdentifier;
@property(readonly) bool hasValue;
@property(retain) CKDPRecordFieldIdentifier * identifier;
@property(retain) CKDPRecordFieldValue * value;

+ (id)emptyFieldWithKey:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifier;
- (bool)hasValue;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (void)writeTo:(id)arg1;

@end
