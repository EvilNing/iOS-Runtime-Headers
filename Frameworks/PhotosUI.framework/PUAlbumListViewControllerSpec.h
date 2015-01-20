/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class PUAlbumListViewControllerSpec, PUFeedViewControllerSpec, PUPhotoDecoration, PUPhotosGridViewControllerSpec, PUPhotosPanoramaViewControllerSpec, PUPhotosPickerViewControllerSpec, UIImage;

@interface PUAlbumListViewControllerSpec : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    UIImage *_addSharedAlbumPlaceholderImage;
    long long _albumDeletionConfirmationStyle;
    long long _cellContentViewLayout;
    int _collageFastImageFormat;
    int _collageQualityImageFormat;
    double _collageSpacing;
    UIImage *_emptyAlbumPlaceholderImage;
    UIImage *_emptySharedAlbumPlaceholderImage;
    PUPhotoDecoration *_emptyStackPhotoDecoration;
    int _fastImageFormat;
    PUFeedViewControllerSpec *_feedViewControllerSpec;
    PUPhotosGridViewControllerSpec *_gridViewControllerSpec;
    double _maxSearchBarWidth;
    PUPhotosPanoramaViewControllerSpec *_panoramaViewControllerSpec;
    PUPhotosPickerViewControllerSpec *_photosPickerViewControllerSpec;
    int _qualityImageFormat;
    double _sectionFooterHeight;
    double _sectionHeaderHeight;
    } _stackOffset;
    } _stackPerspectiveInsets;
    } _stackPerspectiveOffset;
    PUPhotoDecoration *_stackPhotoDecoration;
    } _stackSize;
    unsigned long long _stackViewStyle;
    bool_allowsAlbumCountSubtitle;
    bool_shouldUseCollageForCloudFeedPlaceholder;
    bool_shouldUseShortTitleForStandInAlbumList;
    bool_shouldUseTableView;
    bool_showsDeleteButtonOnCellContentView;
    bool_usesStackTransitionToGrid;
}

@property(readonly) UIImage * addSharedAlbumPlaceholderImage;
@property(readonly) long long albumDeletionConfirmationStyle;
@property(readonly) bool allowsAlbumCountSubtitle;
@property(readonly) bool canDisplaySearchActionInNavigationBar;
@property(readonly) long long cellContentViewLayout;
@property(readonly) int collageFastImageFormat;
@property(readonly) int collageQualityImageFormat;
@property(readonly) double collageSpacing;
@property(readonly) struct CGSize { double x1; double x2; } contentSizeForViewInPopover;
@property(readonly) bool displaysSearchInPopover;
@property(readonly) UIImage * emptyAlbumPlaceholderImage;
@property(readonly) UIImage * emptySharedAlbumPlaceholderImage;
@property(readonly) PUPhotoDecoration * emptyStackPhotoDecoration;
@property(readonly) int fastImageFormat;
@property(readonly) PUFeedViewControllerSpec * feedViewControllerSpec;
@property(readonly) PUPhotosGridViewControllerSpec * gridViewControllerSpec;
@property(readonly) double maxSearchBarWidth;
@property(readonly) PUPhotosPanoramaViewControllerSpec * panoramaViewControllerSpec;
@property(readonly) PUPhotosPickerViewControllerSpec * photosPickerViewControllerSpec;
@property(readonly) int qualityImageFormat;
@property(readonly) double sectionFooterHeight;
@property(readonly) double sectionHeaderHeight;
@property(readonly) bool shouldUseCollageForCloudFeedPlaceholder;
@property(readonly) bool shouldUseShortTitleForStandInAlbumList;
@property(readonly) bool shouldUseTableView;
@property(readonly) bool showsDeleteButtonOnCellContentView;
@property(readonly) struct UIOffset { double x1; double x2; } stackOffset;
@property(readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } stackPerspectiveInsets;
@property(readonly) struct UIOffset { double x1; double x2; } stackPerspectiveOffset;
@property(readonly) PUPhotoDecoration * stackPhotoDecoration;
@property(readonly) struct CGSize { double x1; double x2; } stackSize;
@property(readonly) unsigned long long stackViewStyle;
@property(readonly) PUAlbumListViewControllerSpec * standInAlbumListViewControllerSpec;
@property(readonly) bool usesStackTransitionToGrid;

- (void).cxx_destruct;
- (id)_centeredGlyphImage:(id)arg1 withBackgroundColor:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 imageAlpha:(double)arg4;
- (id)_centeredTintedGlyphImage:(id)arg1 withBackgroundColor:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3;
- (id)_nameOfAddSharedAlbumPlaceholderImage;
- (id)_nameOfEmptyAlbumPlaceholderImage;
- (id)_nameOfEmptySharedAlbumPlaceholderImage;
- (struct CGPoint { double x1; double x2; })_pixelRoundedOriginForCenteredImage:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)addSharedAlbumPlaceholderImage;
- (long long)albumDeletionConfirmationStyle;
- (bool)allowsAlbumCountSubtitle;
- (bool)canDisplaySearchActionInNavigationBar;
- (long long)cellContentViewLayout;
- (struct CGSize { double x1; double x2; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (int)collageFastImageFormat;
- (int)collageQualityImageFormat;
- (double)collageSpacing;
- (void)configureCollectionViewAlbumListLayout:(id)arg1 forBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)configureStackViewWithGridStyle:(id)arg1;
- (struct CGSize { double x1; double x2; })contentSizeForViewInPopover;
- (bool)displaysSearchInPopover;
- (id)emptyAlbumPlaceholderImage;
- (id)emptySharedAlbumPlaceholderImage;
- (id)emptyStackPhotoDecoration;
- (int)fastImageFormat;
- (id)feedViewControllerSpec;
- (id)gridViewControllerSpec;
- (double)maxSearchBarWidth;
- (id)panoramaViewControllerSpec;
- (id)photosPickerViewControllerSpec;
- (int)qualityImageFormat;
- (double)sectionFooterHeight;
- (double)sectionHeaderHeight;
- (bool)shouldUseCollageForCloudFeedPlaceholder;
- (bool)shouldUseShortTitleForStandInAlbumList;
- (bool)shouldUseTableView;
- (bool)showsDeleteButtonOnCellContentView;
- (struct UIOffset { double x1; double x2; })stackOffset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })stackPerspectiveInsets;
- (struct UIOffset { double x1; double x2; })stackPerspectiveOffset;
- (id)stackPhotoDecoration;
- (struct CGSize { double x1; double x2; })stackSize;
- (unsigned long long)stackViewStyle;
- (id)standInAlbumListViewControllerSpec;
- (bool)usesStackTransitionToGrid;

@end
