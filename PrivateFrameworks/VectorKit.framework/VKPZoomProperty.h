/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKPStyleProperties;

@interface VKPZoomProperty : PBCodable <NSCopying> {
    float _maxZ;
    float _minZ;
    VKPStyleProperties *_properties;
}

@property float maxZ;
@property float minZ;
@property(retain) VKPStyleProperties * properties;

- (void)applyTo:(id)arg1 zoom:(float)arg2;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (float)maxZ;
- (void)mergeFrom:(id)arg1;
- (float)minZ;
- (id)properties;
- (bool)readFrom:(id)arg1;
- (void)setMaxZ:(float)arg1;
- (void)setMinZ:(float)arg1;
- (void)setProperties:(id)arg1;
- (void)writeTo:(id)arg1;

@end
