/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class BRCLocalContainer, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSMutableSet;

@interface BRCSyncUpEnumerator : NSEnumerator {
    unsigned int _batchSize;
    NSMutableSet *_blacklist;
    BRCLocalContainer *_container;
    struct PQLResultSet { Class x1; } *_enumerator;
    unsigned int _maxDepth;
    unsigned long long _retryAfter;
    NSMutableIndexSet *_returned;
    NSMutableArray *_stack;
    int _stage;
    NSMutableDictionary *_tombstonesEmbargo;
    NSMutableSet *_whitelist;
}

@property(readonly) unsigned int batchSize;
@property(readonly) unsigned long long retryAfter;

- (void).cxx_destruct;
- (bool)_blackListStackIfItemThrottled:(id)arg1 now:(unsigned long long)arg2;
- (struct PQLResultSet { Class x1; }*)_documentsOrAliasesNeedingSyncUpEnumerator;
- (struct PQLResultSet { Class x1; }*)_liveOrNewDirectoriesNeedingSyncUpEnumerator;
- (id)_nextLiveItem;
- (id)_nextTombstone;
- (struct PQLResultSet { Class x1; }*)_tombstoneLeavesNeedingSyncUpEnumerator;
- (unsigned int)batchSize;
- (id)initWithLocalContainer:(id)arg1;
- (void)invalidate;
- (id)nextObject;
- (unsigned long long)retryAfter;

@end
