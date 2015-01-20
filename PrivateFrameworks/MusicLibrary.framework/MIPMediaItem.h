/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class MIPMovie, MIPPodcast, MIPSong, MIPTVShow, NSMutableArray, NSString;

@interface MIPMediaItem : PBCodable <NSCopying> {
    struct { 
        unsigned int accountId : 1; 
        unsigned int creationDateTime : 1; 
        unsigned int duration : 1; 
        unsigned int fileSize : 1; 
        unsigned int modificationDateTime : 1; 
        unsigned int purchaseHistoryId : 1; 
        unsigned int releaseDateTime : 1; 
        unsigned int sagaId : 1; 
        unsigned int storeId : 1; 
        unsigned int storefrontId : 1; 
        unsigned int artworkId : 1; 
        unsigned int contentRating : 1; 
        unsigned int mediaType : 1; 
        unsigned int purchaseHistoryToken : 1; 
        unsigned int explicitContent : 1; 
    long long _accountId;
    int _artworkId;
    int _contentRating;
    NSString *_copyright;
    long long _creationDateTime;
    long long _duration;
    long long _fileSize;
    } _has;
    NSMutableArray *_libraryIdentifiers;
    NSString *_longDescription;
    int _mediaType;
    long long _modificationDateTime;
    MIPMovie *_movie;
    MIPPodcast *_podcast;
    long long _purchaseHistoryId;
    NSString *_purchaseHistoryRedownloadParams;
    int _purchaseHistoryToken;
    long long _releaseDateTime;
    long long _sagaId;
    NSString *_sagaRedownloadParams;
    NSString *_shortDescription;
    MIPSong *_song;
    NSString *_sortTitle;
    long long _storeId;
    long long _storefrontId;
    NSString *_title;
    MIPTVShow *_tvShow;
    bool_explicitContent;
}

@property long long accountId;
@property int artworkId;
@property int contentRating;
@property(retain) NSString * copyright;
@property long long creationDateTime;
@property long long duration;
@property bool explicitContent;
@property long long fileSize;
@property bool hasAccountId;
@property bool hasArtworkId;
@property bool hasContentRating;
@property(readonly) bool hasCopyright;
@property bool hasCreationDateTime;
@property bool hasDuration;
@property bool hasExplicitContent;
@property bool hasFileSize;
@property(readonly) bool hasLongDescription;
@property bool hasMediaType;
@property bool hasModificationDateTime;
@property(readonly) bool hasMovie;
@property(readonly) bool hasPodcast;
@property bool hasPurchaseHistoryId;
@property(readonly) bool hasPurchaseHistoryRedownloadParams;
@property bool hasPurchaseHistoryToken;
@property bool hasReleaseDateTime;
@property bool hasSagaId;
@property(readonly) bool hasSagaRedownloadParams;
@property(readonly) bool hasShortDescription;
@property(readonly) bool hasSong;
@property(readonly) bool hasSortTitle;
@property bool hasStoreId;
@property bool hasStorefrontId;
@property(readonly) bool hasTitle;
@property(readonly) bool hasTvShow;
@property(retain) NSMutableArray * libraryIdentifiers;
@property(retain) NSString * longDescription;
@property int mediaType;
@property long long modificationDateTime;
@property(retain) MIPMovie * movie;
@property(retain) MIPPodcast * podcast;
@property long long purchaseHistoryId;
@property(retain) NSString * purchaseHistoryRedownloadParams;
@property int purchaseHistoryToken;
@property long long releaseDateTime;
@property long long sagaId;
@property(retain) NSString * sagaRedownloadParams;
@property(retain) NSString * shortDescription;
@property(retain) MIPSong * song;
@property(retain) NSString * sortTitle;
@property long long storeId;
@property long long storefrontId;
@property(retain) NSString * title;
@property(retain) MIPTVShow * tvShow;

- (void).cxx_destruct;
- (long long)accountId;
- (void)addLibraryIdentifiers:(id)arg1;
- (int)artworkId;
- (void)clearLibraryIdentifiers;
- (int)contentRating;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyright;
- (long long)creationDateTime;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)duration;
- (bool)explicitContent;
- (long long)fileSize;
- (bool)hasAccountId;
- (bool)hasArtworkId;
- (bool)hasContentRating;
- (bool)hasCopyright;
- (bool)hasCreationDateTime;
- (bool)hasDuration;
- (bool)hasExplicitContent;
- (bool)hasFileSize;
- (bool)hasLongDescription;
- (bool)hasMediaType;
- (bool)hasModificationDateTime;
- (bool)hasMovie;
- (bool)hasPodcast;
- (bool)hasPurchaseHistoryId;
- (bool)hasPurchaseHistoryRedownloadParams;
- (bool)hasPurchaseHistoryToken;
- (bool)hasReleaseDateTime;
- (bool)hasSagaId;
- (bool)hasSagaRedownloadParams;
- (bool)hasShortDescription;
- (bool)hasSong;
- (bool)hasSortTitle;
- (bool)hasStoreId;
- (bool)hasStorefrontId;
- (bool)hasTitle;
- (bool)hasTvShow;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)libraryIdentifiers;
- (id)libraryIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)libraryIdentifiersCount;
- (id)longDescription;
- (int)mediaType;
- (long long)modificationDateTime;
- (id)movie;
- (id)podcast;
- (long long)purchaseHistoryId;
- (id)purchaseHistoryRedownloadParams;
- (int)purchaseHistoryToken;
- (bool)readFrom:(id)arg1;
- (long long)releaseDateTime;
- (long long)sagaId;
- (id)sagaRedownloadParams;
- (void)setAccountId:(long long)arg1;
- (void)setArtworkId:(int)arg1;
- (void)setContentRating:(int)arg1;
- (void)setCopyright:(id)arg1;
- (void)setCreationDateTime:(long long)arg1;
- (void)setDuration:(long long)arg1;
- (void)setExplicitContent:(bool)arg1;
- (void)setFileSize:(long long)arg1;
- (void)setHasAccountId:(bool)arg1;
- (void)setHasArtworkId:(bool)arg1;
- (void)setHasContentRating:(bool)arg1;
- (void)setHasCreationDateTime:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasExplicitContent:(bool)arg1;
- (void)setHasFileSize:(bool)arg1;
- (void)setHasMediaType:(bool)arg1;
- (void)setHasModificationDateTime:(bool)arg1;
- (void)setHasPurchaseHistoryId:(bool)arg1;
- (void)setHasPurchaseHistoryToken:(bool)arg1;
- (void)setHasReleaseDateTime:(bool)arg1;
- (void)setHasSagaId:(bool)arg1;
- (void)setHasStoreId:(bool)arg1;
- (void)setHasStorefrontId:(bool)arg1;
- (void)setLibraryIdentifiers:(id)arg1;
- (void)setLongDescription:(id)arg1;
- (void)setMediaType:(int)arg1;
- (void)setModificationDateTime:(long long)arg1;
- (void)setMovie:(id)arg1;
- (void)setPodcast:(id)arg1;
- (void)setPurchaseHistoryId:(long long)arg1;
- (void)setPurchaseHistoryRedownloadParams:(id)arg1;
- (void)setPurchaseHistoryToken:(int)arg1;
- (void)setReleaseDateTime:(long long)arg1;
- (void)setSagaId:(long long)arg1;
- (void)setSagaRedownloadParams:(id)arg1;
- (void)setShortDescription:(id)arg1;
- (void)setSong:(id)arg1;
- (void)setSortTitle:(id)arg1;
- (void)setStoreId:(long long)arg1;
- (void)setStorefrontId:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setTvShow:(id)arg1;
- (id)shortDescription;
- (id)song;
- (id)sortTitle;
- (long long)storeId;
- (long long)storefrontId;
- (id)title;
- (id)tvShow;
- (void)writeTo:(id)arg1;

@end
