/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class GKLabel, NSString;

@interface GKRemoteUIHeaderView : UIView <RemoteUITableHeader> {
    double _bottomMargin;
    double _height;
    GKLabel *_textLabel;
    bool_isFirstSection;
}

@property double bottomMargin;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property double height;
@property bool isFirstSection;
@property(readonly) Class superclass;
@property(retain) GKLabel * textLabel;

- (double)bottomMargin;
- (void)dealloc;
- (double)headerHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (double)height;
- (id)initWithAttributes:(id)arg1;
- (bool)isFirstSection;
- (void)setBottomMargin:(double)arg1;
- (void)setHeight:(double)arg1;
- (void)setIsFirstSection:(bool)arg1;
- (void)setSectionIsFirst:(bool)arg1;
- (void)setTextLabel:(id)arg1;
- (id)textLabel;

@end
