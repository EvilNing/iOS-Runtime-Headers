/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSDate, NSString, UIDateLabel, UIImageView, UILabel;

@interface CKConversationListCell : UITableViewCell {
    UIImageView *_chevronImageView;
    UIDateLabel *_dateLabel;
    UILabel *_fromLabel;
    UIImageView *_recipientPhotoView;
    NSDate *_searchMessageDate;
    NSString *_searchMessageGUID;
    NSString *_searchSummaryText;
    UILabel *_summaryLabel;
    UIImageView *_unreadIndicatorImageView;
    bool_isPlaceholder;
}

@property(retain) NSDate * searchMessageDate;
@property(copy) NSString * searchMessageGUID;
@property(copy) NSString * searchSummaryText;

+ (double)cellHeight;
+ (id)identifier;

- (void)_calculateLayoutFrames;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_conversationThumbnailChanged:(id)arg1;
- (void)_setupThumbnailForConversation:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)searchMessageDate;
- (id)searchMessageGUID;
- (id)searchSummaryText;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setSearchMessageDate:(id)arg1;
- (void)setSearchMessageGUID:(id)arg1;
- (void)setSearchSummaryText:(id)arg1;
- (bool)showingEditControl;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateContentsForConversation:(id)arg1;
- (void)updateWithSearchResult:(id)arg1;

@end
