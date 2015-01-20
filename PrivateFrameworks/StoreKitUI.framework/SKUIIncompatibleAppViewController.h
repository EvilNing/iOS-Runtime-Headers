/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class <SKUIProductPageChildViewControllerDelegate>, NSOperationQueue, NSString, SKUIIncompatibleAppView, SKUIItemArtworkContext, SKUIProductPageHeaderViewController, SKUIProductPageItem, SSVLoadURLOperation, UIImage, UIScrollView;

@interface SKUIIncompatibleAppViewController : SKUIViewController <SKUIProductPageChildViewController> {
    SKUIItemArtworkContext *_artworkContext;
    <SKUIProductPageChildViewControllerDelegate> *_delegate;
    SKUIProductPageHeaderViewController *_headerViewController;
    UIImage *_iconImage;
    SKUIProductPageItem *_incompatibleItem;
    SKUIIncompatibleAppView *_incompatibleView;
    SSVLoadURLOperation *_loadIconOperation;
    NSOperationQueue *_operationQueue;
}

@property(copy,readonly) NSString * debugDescription;
@property <SKUIProductPageChildViewControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) SKUIProductPageHeaderViewController * headerViewController;
@property(readonly) SKUIProductPageItem * incompatibleItem;
@property(retain) NSOperationQueue * operationQueue;
@property(readonly) UIScrollView * scrollView;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)_artworkContext;
- (void)_learnMoreAboutApp:(id)arg1;
- (void)_learnMoreAboutIPad:(id)arg1;
- (void)_setArtworkWithImage:(id)arg1 error:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)headerViewController;
- (id)incompatibleItem;
- (id)initWithIncompatibleItem:(id)arg1;
- (void)loadView;
- (id)operationQueue;
- (void)reloadData;
- (id)scrollView;
- (void)setDelegate:(id)arg1;
- (void)setHeaderViewController:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
