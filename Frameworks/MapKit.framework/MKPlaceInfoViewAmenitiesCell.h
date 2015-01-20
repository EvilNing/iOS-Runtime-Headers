/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSArray, NSMutableArray, UIView;

@interface MKPlaceInfoViewAmenitiesCell : ABContactCell {
    UIView *_dummyContentView;
    NSArray *_keyValues;
    NSMutableArray *_labelConstraints;
    NSMutableArray *_labels;
    NSMutableArray *_values;
}

@property(retain) UIView * dummyContentView;
@property(retain) NSArray * keyValues;
@property(retain) NSMutableArray * labelConstraints;

+ (double)intrinsicContentHeight;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)addConstraintsForKeyLabel:(id)arg1 andMatchingValueLabel:(id)arg2;
- (void)addWidthAndSideSpacingConstraintsForLabels:(id)arg1;
- (id)attributeLabelWithString:(id)arg1;
- (id)attributeValueWithString:(id)arg1;
- (void)contentSizeDidChange;
- (void)dealloc;
- (id)dummyContentView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)keyValues;
- (id)labelConstraints;
- (void)refreshContent;
- (void)setDummyContentView:(id)arg1;
- (void)setKeyValues:(id)arg1;
- (void)setLabelConstraints:(id)arg1;
- (void)tintColorDidChange;

@end
