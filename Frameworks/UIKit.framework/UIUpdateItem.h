/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSIndexPath, UITableViewUpdateGap;

@interface UIUpdateItem : NSObject {
    int _action;
    long long _animation;
    UITableViewUpdateGap *_gap;
    NSIndexPath *_indexPath;
    double _offset;
    bool_headerFooterOnly;
    bool_skipAnimation;
}

@property(readonly) int action;
@property long long animation;
@property UITableViewUpdateGap * gap;
@property bool headerFooterOnly;
@property(readonly) NSIndexPath * indexPath;
@property double offset;
@property bool skipAnimation;

- (id)_actionDescription;
- (int)action;
- (long long)animation;
- (long long)compareIndexPaths:(id)arg1;
- (void)dealloc;
- (id)gap;
- (bool)headerFooterOnly;
- (id)indexPath;
- (id)initWithAction:(int)arg1 forIndexPath:(id)arg2 animation:(long long)arg3;
- (long long)inverseCompareIndexPaths:(id)arg1;
- (bool)isSectionOperation;
- (double)offset;
- (void)setAnimation:(long long)arg1;
- (void)setGap:(id)arg1;
- (void)setHeaderFooterOnly:(bool)arg1;
- (void)setOffset:(double)arg1;
- (void)setSkipAnimation:(bool)arg1;
- (bool)skipAnimation;

@end
