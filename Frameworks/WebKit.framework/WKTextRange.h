/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@class NSArray;

@interface WKTextRange : UITextRange {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _endRect;
    unsigned long long _selectedTextLength;
    NSArray *_selectionRects;
    } _startRect;
    bool_isEditable;
    bool_isNone;
    bool_isRange;
}

@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } endRect;
@property bool isEditable;
@property bool isNone;
@property bool isRange;
@property unsigned long long selectedTextLength;
@property(copy) NSArray * selectionRects;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } startRect;

+ (id)textRangeWithState:(bool)arg1 isRange:(bool)arg2 isEditable:(bool)arg3 startRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 endRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 selectionRects:(id)arg6 selectedTextLength:(unsigned long long)arg7;

- (id).cxx_construct;
- (bool)_isCaret;
- (bool)_isRanged;
- (void)dealloc;
- (id)description;
- (id)end;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })endRect;
- (bool)isEditable;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isNone;
- (bool)isRange;
- (unsigned long long)selectedTextLength;
- (id)selectionRects;
- (void)setEndRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIsEditable:(bool)arg1;
- (void)setIsNone:(bool)arg1;
- (void)setIsRange:(bool)arg1;
- (void)setSelectedTextLength:(unsigned long long)arg1;
- (void)setSelectionRects:(id)arg1;
- (void)setStartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)start;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })startRect;

@end
