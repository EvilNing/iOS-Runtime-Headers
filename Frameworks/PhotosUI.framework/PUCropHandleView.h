/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSArray, NSLayoutConstraint, UIView;

@interface PUCropHandleView : UIView {
    UIView *__layoutReferenceView;
    NSArray *__lineViews;
    NSLayoutConstraint *__lineWidthConstraint;
    NSArray *__overlayViews;
    unsigned long long _handle;
    bool_lineWeightHeavy;
    bool_overlayHidden;
}

@property(setter=_setLayoutReferenceView:,retain) UIView * _layoutReferenceView;
@property(setter=_setLineViews:,retain) NSArray * _lineViews;
@property(setter=_setLineWidthConstraint:,retain) NSLayoutConstraint * _lineWidthConstraint;
@property(setter=_setOverlayViews:,retain) NSArray * _overlayViews;
@property(readonly) NSArray * adjacentHandles;
@property(getter=isBottom,readonly) bool bottom;
@property(getter=isCorner,readonly) bool corner;
@property(readonly) unsigned long long handle;
@property(getter=isLateral,readonly) bool lateral;
@property(readonly) id layoutReferenceItem;
@property(getter=isLeft,readonly) bool left;
@property(getter=isLineWeightHeavy) bool lineWeightHeavy;
@property(readonly) unsigned long long oppositeHandle;
@property(getter=isOverlayHidden) bool overlayHidden;
@property(getter=isRight,readonly) bool right;
@property(getter=isTop,readonly) bool top;

+ (id)allHandles;

- (void).cxx_destruct;
- (id)_createCornerOverlayView;
- (id)_createLineView;
- (id)_layoutReferenceView;
- (id)_lineViews;
- (id)_lineWidthConstraint;
- (id)_overlayViews;
- (void)_setLayoutReferenceView:(id)arg1;
- (void)_setLineViews:(id)arg1;
- (void)_setLineWidthConstraint:(id)arg1;
- (void)_setOverlayViews:(id)arg1;
- (void)_updateLineWidth;
- (id)adjacentHandles;
- (unsigned long long)handle;
- (id)initForHandle:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isBottom;
- (bool)isCorner;
- (bool)isLateral;
- (bool)isLeft;
- (bool)isLineWeightHeavy;
- (bool)isOverlayHidden;
- (bool)isRight;
- (bool)isTop;
- (id)layoutReferenceItem;
- (unsigned long long)oppositeHandle;
- (void)setLineWeightHeavy:(bool)arg1;
- (void)setOverlayHidden:(bool)arg1;

@end
