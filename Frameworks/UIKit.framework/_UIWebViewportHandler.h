/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <_UIWebViewportHandlerDelegate>;

@interface _UIWebViewportHandler : NSObject {
    struct _UIWebViewportConfiguration { 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
        float initialScale; 
        float minimumScale; 
        float maximumScale; 
        boolallowsUserScaling; 
    struct _UIWebViewportConfiguration { 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
        float initialScale; 
        float minimumScale; 
        float maximumScale; 
        boolallowsUserScaling; 
    struct CGSize { 
        double width; 
        double height; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _availableViewSize;
    } _configuration;
    } _defaultConfiguration;
    <_UIWebViewportHandlerDelegate> *_delegate;
    } _documentBounds;
    unsigned int _webkitDefinedConfigurationFlags;
    bool_classicViewportMode;
    bool_initialConfigurationHasBeenSentToDelegate;
}

@property(readonly) bool allowsUserScaling;
@property(readonly) struct CGSize { double x1; double x2; } availableViewSize;
@property(getter=isClassicViewportMode,readonly) bool classicViewportMode;
@property <_UIWebViewportHandlerDelegate> * delegate;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } documentBounds;
@property(readonly) float initialScale;
@property(readonly) float maximumScale;
@property(readonly) float minimumScale;
@property(readonly) struct _UIWebViewportConfiguration { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; float x2; float x3; float x4; boolx5; } rawViewConfiguration;
@property(readonly) unsigned int webkitDefinedConfigurationFlags;

- (id).cxx_construct;
- (bool)allowsUserScaling;
- (void)applyWebKitViewportArgumentsSize:(struct CGSize { double x1; double x2; })arg1 initialScale:(float)arg2 minimumScale:(float)arg3 maximumScale:(float)arg4 allowsUserScaling:(float)arg5;
- (struct CGSize { double x1; double x2; })availableViewSize;
- (void)clearWebKitViewportConfigurationFlags;
- (id)delegate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })documentBounds;
- (float)initialScale;
- (double)integralInitialScale;
- (double)integralScaleForScale:(double)arg1 keepingPointFixed:(struct CGPoint { double x1; double x2; }*)arg2;
- (bool)isClassicViewportMode;
- (float)maximumScale;
- (float)minimumScale;
- (float)minimumScaleForViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)overrideViewportConfiguration:(const struct _UIWebViewportConfiguration { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; float x2; float x3; float x4; boolx5; }*)arg1;
- (struct _UIWebViewportConfiguration { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; float x2; float x3; float x4; boolx5; })rawViewConfiguration;
- (void)resetViewportConfiguration:(const struct _UIWebViewportConfiguration { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; float x2; float x3; float x4; boolx5; }*)arg1;
- (void)setAvailableViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setDocumentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)update:(id)arg1;
- (float)viewportHeight;
- (float)viewportWidth;
- (unsigned int)webkitDefinedConfigurationFlags;

@end
