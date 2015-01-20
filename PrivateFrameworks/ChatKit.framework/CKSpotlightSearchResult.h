/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSDate, NSString;

@interface CKSpotlightSearchResult : NSObject {
    NSString *_chatGUID;
    NSDate *_messageDate;
    NSString *_messageGUID;
    NSString *_summary;
}

@property(copy) NSString * chatGUID;
@property(retain) NSDate * messageDate;
@property(copy) NSString * messageGUID;
@property(copy) NSString * summary;

- (id)chatGUID;
- (long long)compare:(id)arg1;
- (void)dealloc;
- (id)initWithMessage:(id)arg1 chatGUID:(id)arg2;
- (id)messageDate;
- (id)messageGUID;
- (void)setChatGUID:(id)arg1;
- (void)setMessageDate:(id)arg1;
- (void)setMessageGUID:(id)arg1;
- (void)setSummary:(id)arg1;
- (id)summary;

@end
