/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSMutableArray, UIUpdateItem;

@interface UITableViewUpdateGap : NSObject {
    struct { 
        unsigned int hasAutomaticAnimationItems : 1; 
    NSMutableArray *_deleteItems;
    UIUpdateItem *_firstUpdateItem;
    } _gapFlags;
    NSMutableArray *_insertItems;
    UIUpdateItem *_lastUpdateItem;
}

@property(readonly) NSArray * deleteItems;
@property(retain) UIUpdateItem * firstUpdateItem;
@property(readonly) bool hasAutomaticAnimationItems;
@property(readonly) bool hasInserts;
@property(readonly) NSArray * insertItems;
@property(readonly) bool isDeleteBasedGap;
@property(readonly) bool isSectionBasedGap;
@property(retain) UIUpdateItem * lastUpdateItem;
@property(readonly) NSArray * updateItems;

+ (id)gapWithUpdateItem:(id)arg1;

- (void)addUpdateItem:(id)arg1;
- (void)dealloc;
- (id)deleteItems;
- (id)description;
- (id)firstUpdateItem;
- (bool)hasAutomaticAnimationItems;
- (bool)hasInserts;
- (id)init;
- (id)insertItems;
- (bool)isDeleteBasedGap;
- (bool)isSectionBasedGap;
- (id)lastUpdateItem;
- (void)setFirstUpdateItem:(id)arg1;
- (void)setLastUpdateItem:(id)arg1;
- (id)updateItems;

@end
