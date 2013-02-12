/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString, UIImage;

@interface GKFriendPickerCellContents : GKPlayerCellContentView {
    NSString *_rankString;
    UIImage *_selectionIcon;
    BOOL _shouldShowRank;
    int _status;
}

@property(readonly) BOOL isSelected;
@property(readonly) BOOL isShowingSelectionIcon;
@property(retain) NSString * rankString;
@property(retain) UIImage * selectionIcon;
@property BOOL shouldShowRank;
@property int status;

- (unsigned long long)accessibilityTraits;
- (void)dealloc;
- (void)drawImage:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithNumberOfLines:(unsigned int)arg1;
- (BOOL)isSelected;
- (BOOL)isShowingSelectionIcon;
- (void)layoutSubviews;
- (id)rankString;
- (id)selectionIcon;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionIconRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setRankString:(id)arg1;
- (void)setSelectionIcon:(id)arg1;
- (void)setShouldShowRank:(BOOL)arg1;
- (void)setStatus:(int)arg1;
- (void)setTheme:(id)arg1;
- (BOOL)shouldShowRank;
- (int)status;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)updateAttributesForStatus;
- (void)updateLines;

@end
