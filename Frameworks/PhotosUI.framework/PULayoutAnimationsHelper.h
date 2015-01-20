/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class PUSectionedGridLayout;

@interface PULayoutAnimationsHelper : NSObject {
    PUSectionedGridLayout *_layout;
    bool_shouldAnimateTemporaryImageView;
}

@property(readonly) PUSectionedGridLayout * layout;
@property bool shouldAnimateTemporaryImageView;

- (void).cxx_destruct;
- (id)_adjustAnimation:(id)arg1 forReusableView:(id)arg2 toLayoutAttributes:(id)arg3;
- (id)_adjustCellAnimation:(id)arg1 forReusableView:(id)arg2 toLayoutAttributes:(id)arg3;
- (id)_adjustDecorationViewAnimation:(id)arg1 forReusableView:(id)arg2 toLayoutAttributes:(id)arg3;
- (id)_adjustRenderedStripAnimation:(id)arg1 forReusableView:(id)arg2 toLayoutAttributes:(id)arg3;
- (id)_adjustSectionHeaderAnimation:(id)arg1 forReusableView:(id)arg2 toLayoutAttributes:(id)arg3;
- (void)_applyDefaultLayoutAttributes:(id)arg1 toView:(id)arg2;
- (void)_configureAnimationsForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 withCompletionBlock:(id)arg3;
- (id)_createDefaultZoomingInAnimationForKeyPath:(id)arg1 ofReusableView:(id)arg2 toLayoutAttributes:(id)arg3;
- (id)_createDefaultZoomingOutAnimationForKeyPath:(id)arg1 ofReusableView:(id)arg2 toLayoutAttributes:(id)arg3;
- (id)_defaultAnimationForKeyPath:(id)arg1 ofReusableView:(id)arg2 toLayoutAttributes:(id)arg3;
- (id)animationsForReusableView:(id)arg1 toLayoutAttributes:(id)arg2;
- (void)didFinishLayoutTransitionAnimations:(bool)arg1 transitionIsAppearing:(bool)arg2;
- (id)initWithSectionedGridLayout:(id)arg1;
- (id)layout;
- (void)setShouldAnimateTemporaryImageView:(bool)arg1;
- (bool)shouldAnimateTemporaryImageView;

@end
