/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CKCommentCursor, CKCommentQuery, NSMutableArray;

@interface CKFetchShareCommentsOperation : CKOperation {
    CKCommentCursor *_cursor;
    id _fetchShareCommentsCompletionBlock;
    CKCommentCursor *_nextCursor;
    CKCommentQuery *_query;
    NSMutableArray *_resultComments;
    unsigned long long _resultsLimit;
}

@property(copy) CKCommentCursor * cursor;
@property(copy) id fetchShareCommentsCompletionBlock;
@property(retain) CKCommentCursor * nextCursor;
@property(copy) CKCommentQuery * query;
@property(retain) NSMutableArray * resultComments;
@property unsigned long long resultsLimit;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleCompletionCallback:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)cursor;
- (id)fetchShareCommentsCompletionBlock;
- (void)fillOutOperationInfo:(id)arg1;
- (id)initWithCursor:(id)arg1;
- (id)initWithShareCommentQuery:(id)arg1;
- (id)nextCursor;
- (void)performCKOperation;
- (id)query;
- (id)resultComments;
- (unsigned long long)resultsLimit;
- (void)setCursor:(id)arg1;
- (void)setFetchShareCommentsCompletionBlock:(id)arg1;
- (void)setNextCursor:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setResultComments:(id)arg1;
- (void)setResultsLimit:(unsigned long long)arg1;

@end
