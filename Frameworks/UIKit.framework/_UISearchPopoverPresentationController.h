/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIPresentationController<_UISearchControllerPresenting>, UIView, _UISearchPresentationAssistant;

@interface _UISearchPopoverPresentationController : UIPopoverPresentationController <_UISearchControllerPresenting> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    _UISearchPresentationAssistant *_assistant;
    } finalFrameForContainerView;
}

@property(readonly) UIPresentationController<_UISearchControllerPresenting> * adaptivePresentationController;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } finalFrameForContainerView;
@property(readonly) unsigned long long hash;
@property(readonly) double resultsControllerContentOffset;
@property(retain,readonly) UIView * searchBarContainerView;
@property(readonly) bool searchBarToBecomeTopAttached;
@property(readonly) bool shouldAccountForStatusBar;
@property(readonly) double statusBarAdjustment;
@property(readonly) Class superclass;

- (id)_popoverHostingWindow;
- (id)_presentationControllerForSizeClassPair:(struct { long long x1; long long x2; })arg1;
- (id)_presentedViewControllerForSizeClassPair:(struct { long long x1; long long x2; })arg1;
- (void)_transitionFromDidEnd;
- (void)_transitionFromWillBegin;
- (void)_transitionToDidEnd;
- (void)_transitionToWillBegin;
- (id)adaptivePresentationController;
- (long long)adaptivePresentationStyle;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })finalFrameForContainerView;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)presentationTransitionWillBegin;
- (double)resultsControllerContentOffset;
- (id)searchBarContainerView;
- (bool)searchBarToBecomeTopAttached;
- (void)setContentVisible:(bool)arg1;
- (bool)shouldAccountForStatusBar;
- (double)statusBarAdjustment;

@end
