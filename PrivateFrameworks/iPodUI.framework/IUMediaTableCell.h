/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class IUMediaTableCellContentView, IUTableCellConfiguration, MPDownloadProgressIndicator, MPMediaDownloadObserver, UIButton;

@interface IUMediaTableCell : UITableViewCell {
    BOOL _canShowPurchasableMediaSubviews;
    UIButton *_downloadButton;
    MPMediaDownloadObserver *_downloadObserver;
    MPDownloadProgressIndicator *_downloadProgressIndicator;
    SEL _mediaCellAccessoryAction;
    id _mediaCellTarget;
    IUMediaTableCellContentView *_mediaContentView;
    int _mediaDisclosureStyle;
    int _mediaEditingDisclosureStyle;
    UIButton *_otgPlusButton;
    UIButton *_purchaseActionButton;
    int _visibleSelectionStyle;
}

@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } artworkFrame;
@property BOOL canShowPurchasableMediaSubviews;
@property(retain) IUTableCellConfiguration * configuration;
@property BOOL drawAsDisabled;
@property BOOL drawInAlternateStyle;
@property BOOL hideArtwork;
@property SEL mediaCellAccessoryAction;
@property id mediaCellTarget;
@property int mediaDisclosureStyle;
@property int mediaEditingDisclosureStyle;
@property BOOL transparentSelectionHighlightStyle;
@property BOOL useSubviewLayout;

- (void)_canShowCloudDownloadButtonsDidChangeNotification:(id)arg1;
- (void)_cancelButtonAction:(id)arg1;
- (void)_clearPurchaseActionConfigurationButton;
- (id)_contentString;
- (void)_didCreateContentView;
- (void)_downloadButtonAction:(id)arg1;
- (void)_drawBackgroundInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 selected:(BOOL)arg2;
- (void)_drawContentInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 selected:(BOOL)arg2;
- (void)_fixupDebugBackgroundColors;
- (id)_mediaContentView;
- (id)_otgPlusButton;
- (void)_purchasableMediaDidChangeNotification:(id)arg1;
- (void)_purchaseButtonPressed:(id)arg1;
- (void)_updateHighlightColors;
- (void)_updateMediaContentViewFrame;
- (void)_updatePurchasableMediaSubviewsWithReload:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })artworkFrame;
- (BOOL)canShowPurchasableMediaSubviews;
- (id)configuration;
- (void)dealloc;
- (BOOL)drawAsDisabled;
- (BOOL)drawInAlternateStyle;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)hideArtwork;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (SEL)mediaCellAccessoryAction;
- (id)mediaCellTarget;
- (int)mediaDisclosureStyle;
- (int)mediaEditingDisclosureStyle;
- (void)prepareForReuse;
- (id)scriptingInfoWithChildren;
- (void)setAccessoryView:(id)arg1 reloadConfiguration:(BOOL)arg2;
- (void)setAccessoryView:(id)arg1;
- (void)setCanShowPurchasableMediaSubviews:(BOOL)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setConfigurationNeedsDisplay;
- (void)setDrawAsDisabled:(BOOL)arg1;
- (void)setDrawInAlternateStyle:(BOOL)arg1 forceRedraw:(BOOL)arg2;
- (void)setDrawInAlternateStyle:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHideArtwork:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setMediaCellAccessoryAction:(SEL)arg1;
- (void)setMediaCellTarget:(id)arg1;
- (void)setMediaDisclosureStyle:(int)arg1;
- (void)setMediaEditingDisclosureStyle:(int)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelectionStyle:(int)arg1;
- (void)setShowingDeleteConfirmation:(BOOL)arg1;
- (void)setTransparentSelectionHighlightStyle:(BOOL)arg1;
- (void)setUseSubviewLayout:(BOOL)arg1;
- (BOOL)transparentSelectionHighlightStyle;
- (BOOL)useSubviewLayout;

@end
