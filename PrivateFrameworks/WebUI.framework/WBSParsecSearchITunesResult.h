/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@class NSArray, NSString, WBSParsecImageRepresentation;

@interface WBSParsecSearchITunesResult : WBSParsecSearchResult {
    NSString *_descriptionFirstLine;
    NSString *_descriptionSecondLine;
    NSArray *_moreGlyphsOnFirstLineRepresentations;
    NSArray *_moreGlyphsOnSecondLineRepresentations;
    NSArray *_moreGlyphsRepresentations;
    double _rating;
    NSString *_ratingText;
    WBSParsecImageRepresentation *_rottenTomatoesGlyph;
    NSString *_rottenTomatoesText;
    bool_rottenTomatoesInformationOnSecondLine;
}

@property(readonly) NSString * descriptionFirstLine;
@property(readonly) NSString * descriptionSecondLine;
@property(readonly) double rating;
@property(readonly) NSString * ratingText;
@property(readonly) bool rottenTomatoesInformationOnSecondLine;
@property(readonly) NSString * rottenTomatoesText;

- (void).cxx_destruct;
- (id)descriptionFirstLine;
- (id)descriptionSecondLine;
- (id)initWithDictionary:(id)arg1;
- (id)moreGlyphsOnFirstLineWithSession:(id)arg1;
- (id)moreGlyphsOnSecondLineWithSession:(id)arg1;
- (id)moreGlyphsWithSession:(id)arg1;
- (double)rating;
- (id)ratingText;
- (id)rottenTomatoesGlyphWithSession:(id)arg1;
- (bool)rottenTomatoesInformationOnSecondLine;
- (id)rottenTomatoesText;

@end
