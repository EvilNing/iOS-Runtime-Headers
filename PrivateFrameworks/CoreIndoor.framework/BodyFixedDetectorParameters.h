/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
 */

@interface BodyFixedDetectorParameters : PBCodable <NSCopying> {
    struct { 
        unsigned int currentWindowNanos : 1; 
        unsigned int referenceWindowNanos : 1; 
        unsigned int maxExcessRadiansPerSecond : 1; 
    unsigned long long _currentWindowNanos;
    } _has;
    float _maxExcessRadiansPerSecond;
    unsigned long long _referenceWindowNanos;
}

@property unsigned long long currentWindowNanos;
@property bool hasCurrentWindowNanos;
@property bool hasMaxExcessRadiansPerSecond;
@property bool hasReferenceWindowNanos;
@property float maxExcessRadiansPerSecond;
@property unsigned long long referenceWindowNanos;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)currentWindowNanos;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCurrentWindowNanos;
- (bool)hasMaxExcessRadiansPerSecond;
- (bool)hasReferenceWindowNanos;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (float)maxExcessRadiansPerSecond;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)referenceWindowNanos;
- (void)setCurrentWindowNanos:(unsigned long long)arg1;
- (void)setHasCurrentWindowNanos:(bool)arg1;
- (void)setHasMaxExcessRadiansPerSecond:(bool)arg1;
- (void)setHasReferenceWindowNanos:(bool)arg1;
- (void)setMaxExcessRadiansPerSecond:(float)arg1;
- (void)setReferenceWindowNanos:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
