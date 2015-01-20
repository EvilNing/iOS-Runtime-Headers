/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEOCarInfo : PBCodable <NSCopying> {
    struct { 
        double _height; 
        double _width; 
        struct { 
            unsigned int height : 1; 
            unsigned int width : 1; 
        } _has; 
    struct { 
        unsigned int screenResolution : 1; 
        unsigned int interactionModel : 1; 
    } _has;
    int _interactionModel;
    NSString *_manufacturer;
    NSString *_model;
    } _screenResolution;
}

@property bool hasInteractionModel;
@property(readonly) bool hasManufacturer;
@property(readonly) bool hasModel;
@property bool hasScreenResolution;
@property int interactionModel;
@property(retain) NSString * manufacturer;
@property(retain) NSString * model;
@property struct { double x1; double x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } screenResolution;

+ (id)carInfoWithTraits:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasInteractionModel;
- (bool)hasManufacturer;
- (bool)hasModel;
- (bool)hasScreenResolution;
- (unsigned long long)hash;
- (id)initWithTraits:(id)arg1;
- (int)interactionModel;
- (bool)isEqual:(id)arg1;
- (id)manufacturer;
- (void)mergeFrom:(id)arg1;
- (id)model;
- (bool)readFrom:(id)arg1;
- (struct { double x1; double x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })screenResolution;
- (void)setHasInteractionModel:(bool)arg1;
- (void)setHasScreenResolution:(bool)arg1;
- (void)setInteractionModel:(int)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setScreenResolution:(struct { double x1; double x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (void)writeTo:(id)arg1;

@end
