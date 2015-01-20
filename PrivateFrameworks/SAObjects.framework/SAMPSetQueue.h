/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, SAMPCollection;

@interface SAMPSetQueue : SADomainCommand {
}

@property(copy) NSArray * filters;
@property(retain) SAMPCollection * mediaItems;
@property bool shouldShuffle;
@property(copy) NSArray * sort;

+ (id)setQueue;
+ (id)setQueueWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)filters;
- (id)groupIdentifier;
- (id)mediaItems;
- (bool)requiresResponse;
- (void)setFilters:(id)arg1;
- (void)setMediaItems:(id)arg1;
- (void)setShouldShuffle:(bool)arg1;
- (void)setSort:(id)arg1;
- (bool)shouldShuffle;
- (id)sort;

@end
