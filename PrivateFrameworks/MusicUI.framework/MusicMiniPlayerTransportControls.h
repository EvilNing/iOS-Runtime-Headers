/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class MPImageCacheRequest, UIImageView;

@interface MusicMiniPlayerTransportControls : MPUMiniPlayerTransportControls {
    UIImageView *_artworkImageView;
    MPImageCacheRequest *_currentImageCacheRequest;
}

+ (unsigned long long)defaultVisibleParts;

- (void).cxx_destruct;
- (void)_avItemArtworkDidChangeNotification:(id)arg1;
- (void)_prospectivePlaybackInformationDidChangeAnimated:(bool)arg1;
- (void)_updateForItemChangeWithPreviousItem:(id)arg1 animated:(bool)arg2;
- (void)_updateItemArtwork;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setItem:(id)arg1;

@end
