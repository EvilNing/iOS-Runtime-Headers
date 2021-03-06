/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDCombinedIterator : WDIterator {
    WDIterator * mChildIterator;
    WDIterator * mParentIterator;
}

@property (nonatomic, retain) WDIterator *childIterator;

- (id)childIterator;
- (id)childIteratorFrom:(id)arg1;
- (void)dealloc;
- (BOOL)hasNext;
- (void)incrementChildIterator;
- (id)initWithParentIterator:(id)arg1;
- (id)newChildIteratorFrom:(id)arg1;
- (id)next;
- (void)setChildIterator:(id)arg1;

@end
