/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@class NSString, NSURL;

@interface WBSAutomaticReadingListWebFeedItem : WBSAutomaticReadingListItem {
    NSString *_feedURLString;
    NSURL *_homepageURL;
    NSString *_originatorProfileImageURLString;
    NSString *_title;
}

@property(copy) NSString * feedURLString;
@property(copy) NSURL * homepageURL;
@property(copy) NSString * originatorProfileImageURLString;
@property(copy) NSString * title;

- (void).cxx_destruct;
- (id)biggerOriginatorProfileImageURL;
- (id)continuousBannerDisplayString;
- (id)continuousBannerTitle;
- (id)displayString;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })emphasizedTextRange;
- (id)feedURLString;
- (id)homepageURL;
- (id)initWithDictionary:(id)arg1 socialSourceAccountIdentifier:(id)arg2;
- (bool)isAcceptableOriginatorProfileImage:(id)arg1;
- (id)originatorProfileImageURL;
- (id)originatorProfileImageURLString;
- (id)originatorProfileURL;
- (void)setFeedURLString:(id)arg1;
- (void)setHomepageURL:(id)arg1;
- (void)setOriginatorProfileImageURLString:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)socialSource;
- (id)sourceRecordURL;
- (id)title;

@end
