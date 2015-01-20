/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3AlbumArtist : ML3Collection {
}

+ (id)allProperties;
+ (id)artworkCacheIDProperty;
+ (id)countingQueryForBaseQuery:(id)arg1 countProperty:(id)arg2 forIdentifier:(long long)arg3;
+ (id)databaseTable;
+ (id)defaultOrderingTerms;
+ (id)effectiveAlbumArtistNameForAlbumArtistName:(id)arg1 artistName:(id)arg2 seriesName:(id)arg3 compilation:(bool)arg4;
+ (id)effectiveAlbumArtistSortNameForAlbumArtistSortName:(id)arg1 albumArtistName:(id)arg2 artistSortName:(id)arg3 artistName:(id)arg4 compilation:(bool)arg5;
+ (id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2;
+ (void)initialize;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)predisambiguatedProperties;
+ (id)propertiesForGroupingKey;
+ (id)propertyForMPMediaEntityProperty:(id)arg1;
+ (bool)propertyIsCountProperty:(id)arg1;
+ (id)protocolItemWithProperties:(id)arg1 inLibrary:(id)arg2;
+ (id)sectionPropertyForProperty:(id)arg1;
+ (id)trackForeignPersistentID;

- (id)multiverseIdentifier;
- (id)protocolItem;
- (void)updateRepresentativeItem:(id)arg1 inLibrary:(id)arg2 withArtworkToken:(id)arg3;
- (void)updateTrackValues:(id)arg1;

@end
