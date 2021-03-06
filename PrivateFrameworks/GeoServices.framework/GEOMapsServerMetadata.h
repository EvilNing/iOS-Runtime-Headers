/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapsServerMetadata : PBCodable <NSCopying> {
    NSMutableArray * _mapsSearchResults;
    NSMutableArray * _suggestionEntryMetadataDisplayeds;
    NSData * _suggestionEntryMetadataTappedOn;
}

@property (nonatomic, readonly) BOOL hasSuggestionEntryMetadataTappedOn;
@property (nonatomic, retain) NSMutableArray *mapsSearchResults;
@property (nonatomic, retain) NSMutableArray *suggestionEntryMetadataDisplayeds;
@property (nonatomic, retain) NSData *suggestionEntryMetadataTappedOn;

+ (Class)mapsSearchResultType;
+ (Class)suggestionEntryMetadataDisplayedType;

- (void)addMapsSearchResult:(id)arg1;
- (void)addSuggestionEntryMetadataDisplayed:(id)arg1;
- (void)clearMapsSearchResults;
- (void)clearSuggestionEntryMetadataDisplayeds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasSuggestionEntryMetadataTappedOn;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)mapsSearchResultAtIndex:(unsigned int)arg1;
- (id)mapsSearchResults;
- (unsigned int)mapsSearchResultsCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setMapsSearchResults:(id)arg1;
- (void)setSuggestionEntryMetadataDisplayeds:(id)arg1;
- (void)setSuggestionEntryMetadataTappedOn:(id)arg1;
- (id)suggestionEntryMetadataDisplayedAtIndex:(unsigned int)arg1;
- (id)suggestionEntryMetadataDisplayeds;
- (unsigned int)suggestionEntryMetadataDisplayedsCount;
- (id)suggestionEntryMetadataTappedOn;
- (void)writeTo:(id)arg1;

@end
