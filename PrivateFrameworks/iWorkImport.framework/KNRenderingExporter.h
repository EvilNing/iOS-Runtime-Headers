/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class KNOffscreenController, KNPdfHyperlinkController, KNSlideNode, NSArray, NSMutableArray, NSSet, NSString;

@interface KNRenderingExporter : TSARenderingExporter <TSDCanvasDelegate> {
    boolmPrintingBackgrounds;
    boolmPrintingBorders;
    boolmPrintingBuilds;
    boolmPrintingDate;
    boolmPrintingDraftQuality;
    boolmPrintingPageMargins;
    boolmPrintingSelectedSlides;
    boolmPrintingSkippedSlides;
    boolmPrintingSlideNumbers;
    unsigned long long mCurrentBuildIndex;
    unsigned long long mCurrentPage;
    KNSlideNode *mCurrentSlideNode;
    NSMutableArray *mCurrentSlidesOnPage;
    KNPdfHyperlinkController *mHyperlinkController;
    KNOffscreenController *mOffscreenController;
    double mPageMargin;
    int mPrintLayout;
    NSString *mPrintTitle;
    id mPrintView;
    NSSet *mSelectedSlideNodes;
    unsigned long long mSlidesPerPage;
}

@property(retain) KNSlideNode * currentSlideNode;
@property(readonly) unsigned long long currentSlideNumber;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) double heightOfPrintedText;
@property(retain) KNOffscreenController * offscreenController;
@property double pageMargin;
@property int printLayout;
@property(copy) NSString * printTitle;
@property id printView;
@property(getter=isPrintingBackgrounds) bool printingBackgrounds;
@property(getter=isPrintingBorders) bool printingBorders;
@property(getter=isPrintingBuilds) bool printingBuilds;
@property(getter=isPrintingDate) bool printingDate;
@property(getter=isPrintingDraftQuality) bool printingDraftQuality;
@property(getter=isPrintingPageMargins) bool printingPageMargins;
@property(getter=isPrintingSelectedSlides) bool printingSelectedSlides;
@property(getter=isPrintingSkippedSlides) bool printingSkippedSlides;
@property(getter=isPrintingSlideNumbers) bool printingSlideNumbers;
@property(copy) NSSet * selectedSlideNodes;
@property(readonly) NSArray * slidesForPrinting;
@property unsigned long long slidesPerPage;
@property(readonly) double spaceForSlideNumbers;
@property(readonly) Class superclass;
@property(readonly) bool usesViewForDrawing;

- (void)addAnchorPointForSlide:(id)arg1 context:(struct CGContext { }*)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsRect;
- (id)currentInfos;
- (id)currentSlideNode;
- (unsigned long long)currentSlideNumber;
- (void)dealloc;
- (id)documentRoot;
- (void)drawBorderForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(struct CGContext { }*)arg2;
- (void)drawDateForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(struct CGContext { }*)arg2;
- (bool)drawImageForSlideNode:(id)arg1 andEvent:(unsigned long long)arg2 slideSize:(struct CGSize { double x1; double x2; })arg3 intoRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 context:(struct CGContext { }*)arg5 createPage:(bool)arg6;
- (void)drawInView:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)drawNSStringDateForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(struct CGContext { }*)arg2;
- (void)drawSlideNumberForNode:(id)arg1 index:(unsigned long long)arg2 forRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 context:(struct CGContext { }*)arg4 position:(int)arg5;
- (void)enableRenderAllContent;
- (bool)exportToURL:(id)arg1 delegate:(id)arg2 error:(id*)arg3;
- (bool)exportToURL:(id)arg1 pageNumber:(unsigned long long)arg2 delegate:(id)arg3 error:(id*)arg4;
- (double)heightOfPrintedText;
- (bool)incrementPage;
- (id)initWithDocumentRoot:(id)arg1;
- (bool)isCanvasDrawingIntoPDF:(id)arg1;
- (bool)isPrintingBackgrounds;
- (bool)isPrintingBorders;
- (bool)isPrintingBuilds;
- (bool)isPrintingCanvas;
- (bool)isPrintingDate;
- (bool)isPrintingDraftQuality;
- (bool)isPrintingPageMargins;
- (bool)isPrintingSelectedSlides;
- (bool)isPrintingSkippedSlides;
- (bool)isPrintingSlideNumbers;
- (id)offscreenController;
- (unsigned long long)p_slideNumberForSlideNode:(id)arg1;
- (id)p_slideNumberStringForSlideNode:(id)arg1 buildIndex:(unsigned long long)arg2;
- (unsigned long long)pageCount;
- (double)pageMargin;
- (bool)preparePage:(unsigned long long)arg1;
- (int)printLayout;
- (id)printTitle;
- (id)printView;
- (double)progressForCurrentPage;
- (id)selectedSlideNodes;
- (void)setCurrentSlideNode:(id)arg1;
- (void)setOffscreenController:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setPageMargin:(double)arg1;
- (void)setPrintLayout:(int)arg1;
- (void)setPrintTitle:(id)arg1;
- (void)setPrintView:(id)arg1;
- (void)setPrintingBackgrounds:(bool)arg1;
- (void)setPrintingBorders:(bool)arg1;
- (void)setPrintingBuilds:(bool)arg1;
- (void)setPrintingDate:(bool)arg1;
- (void)setPrintingDraftQuality:(bool)arg1;
- (void)setPrintingPageMargins:(bool)arg1;
- (void)setPrintingSelectedSlides:(bool)arg1;
- (void)setPrintingSkippedSlides:(bool)arg1;
- (void)setPrintingSlideNumbers:(bool)arg1;
- (void)setSelectedSlideNodes:(id)arg1;
- (void)setSlidesPerPage:(unsigned long long)arg1;
- (void)setup;
- (bool)shouldSuppressBackgrounds;
- (id)slidesForPrinting;
- (unsigned long long)slidesPerPage;
- (double)spaceForSlideNumbers;
- (void)teardown;
- (bool)usesViewForDrawing;

@end
