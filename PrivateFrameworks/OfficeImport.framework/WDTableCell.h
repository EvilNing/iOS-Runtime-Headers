/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString, WDTableCellProperties, WDTableRow, WDText;

@interface WDTableCell : NSObject {
    boolmUseTrackedProperties;
    NSString *mIdentifier;
    unsigned long long mIndex;
    WDTableCellProperties *mProperties;
    WDTableRow *mRow;
    WDText *mText;
}

- (double)cellWidth;
- (void)clearProperties;
- (long long)compareIndex:(id)arg1;
- (void)dealloc;
- (id)identifier;
- (unsigned long long)index;
- (id)initWithRow:(id)arg1 at:(unsigned long long)arg2;
- (id)properties;
- (id)row;
- (void)setIdentifier:(id)arg1;
- (void)setUseTrackedProperties:(bool)arg1;
- (id)text;
- (bool)useTrackedProperties;

@end
