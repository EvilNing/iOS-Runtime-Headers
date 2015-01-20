/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CKCommentCursor, CKCommentQuery;

@interface CKDFetchShareCommentsOperation : CKDOperation {
    id _commentFetchedProgressBlock;
    CKCommentCursor *_cursor;
    CKCommentCursor *_nextCursor;
    CKCommentQuery *_query;
    unsigned long long _resultsLimit;
}

@property(copy) id commentFetchedProgressBlock;
@property(retain) CKCommentCursor * cursor;
@property(retain) CKCommentCursor * nextCursor;
@property(retain) CKCommentQuery * query;
@property unsigned long long resultsLimit;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleCommentFetched:(id)arg1 responseCode:(id)arg2;
- (id)commentFetchedProgressBlock;
- (id)cursor;
- (void)fillOutOperationResult:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (id)nextCursor;
- (Class)operationResultClass;
- (id)query;
- (unsigned long long)resultsLimit;
- (void)setCommentFetchedProgressBlock:(id)arg1;
- (void)setCursor:(id)arg1;
- (void)setNextCursor:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setResultsLimit:(unsigned long long)arg1;

@end
