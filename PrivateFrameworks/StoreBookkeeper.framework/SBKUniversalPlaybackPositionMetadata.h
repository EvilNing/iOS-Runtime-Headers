/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@class NSString;

@interface SBKUniversalPlaybackPositionMetadata : NSObject <SBKKeyValuePayloadPair, NSCopying> {
    double _bookmarkTime;
    NSString *_itemIdentifier;
    unsigned long long _playCount;
    double _timestamp;
    bool_hasBeenPlayed;
}

@property double bookmarkTime;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property bool hasBeenPlayed;
@property(readonly) unsigned long long hash;
@property(copy) NSString * itemIdentifier;
@property unsigned long long playCount;
@property(readonly) Class superclass;
@property double timestamp;

+ (id)_testableMetadataItem_1;
+ (id)keyValueStoreItemIdentifierForItem:(id)arg1;
+ (id)keyValueStoreItemIdentifierForUniqueStoreID:(long long)arg1 itemTitle:(id)arg2 albumName:(id)arg3 itemArtistName:(id)arg4 feedURL:(id)arg5 feedGUID:(id)arg6;
+ (id)metadataWithItemIdentifier:(id)arg1 bookmarkTime:(double)arg2 bookmarkTimestamp:(double)arg3 hasBeenPlayed:(bool)arg4 playCount:(unsigned long long)arg5;
+ (id)metadataWithItemIdentifier:(id)arg1 keyValueStorePayload:(id)arg2 failuresOkay:(bool)arg3;
+ (id)metadataWithItemIdentifier:(id)arg1 keyValueStorePayload:(id)arg2;
+ (id)metadataWithValuesFromDataSourceItem:(id)arg1;
+ (id)pairWithKVSKey:(id)arg1 kvsPayload:(id)arg2;

- (void).cxx_destruct;
- (double)bookmarkTime;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)hasBeenPlayed;
- (unsigned long long)hash;
- (id)init;
- (id)initAsTestableItem;
- (bool)isEqual:(id)arg1;
- (id)itemIdentifier;
- (id)keyValueStorePayload;
- (id)kvsKey;
- (id)kvsPayload;
- (id)kvsValueDescription;
- (unsigned long long)playCount;
- (void)setBookmarkTime:(double)arg1;
- (void)setHasBeenPlayed:(bool)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setPlayCount:(unsigned long long)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
