/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class RUIObjectModel, UIActivityIndicatorView, UILabel, UIView;

@interface RUISpinnerView : RUIElement {
    UILabel *_label;
    RUIObjectModel *_objectModel;
    UIActivityIndicatorView *_spinner;
    UIView *_view;
}

@property RUIObjectModel * objectModel;

- (void).cxx_destruct;
- (id)objectModel;
- (void)setObjectModel:(id)arg1;
- (id)spinnerView;
- (void)viewDidLayout;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
