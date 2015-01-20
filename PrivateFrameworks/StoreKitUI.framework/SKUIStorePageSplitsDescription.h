/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIStorePageSplit;

@interface SKUIStorePageSplitsDescription : NSObject <NSCopying> {
    SKUIStorePageSplit *_bottomSplit;
    SKUIStorePageSplit *_leftSplit;
    SKUIStorePageSplit *_rightSplit;
    SKUIStorePageSplit *_topSplit;
}

@property(copy) SKUIStorePageSplit * bottomSplit;
@property(readonly) SKUIStorePageSplit * firstSplit;
@property(copy) SKUIStorePageSplit * leftSplit;
@property(readonly) long long numberOfSplits;
@property(copy) SKUIStorePageSplit * rightSplit;
@property(copy) SKUIStorePageSplit * topSplit;

- (void).cxx_destruct;
- (id)bottomSplit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)enumerateSplitsUsingBlock:(id)arg1;
- (id)firstSplit;
- (id)leftSplit;
- (long long)numberOfSplits;
- (id)rightSplit;
- (void)setBottomSplit:(id)arg1;
- (void)setLeftSplit:(id)arg1;
- (void)setRightSplit:(id)arg1;
- (void)setTopSplit:(id)arg1;
- (void)sizeSplitsToFitWidth:(double)arg1 usingBlock:(id)arg2;
- (id)topSplit;

@end
