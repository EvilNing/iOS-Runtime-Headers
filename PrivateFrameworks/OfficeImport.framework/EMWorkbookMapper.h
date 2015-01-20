/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class CMArchiveManager, EDWorkbook, NSMutableArray, NSString, OIXMLDocument, OIXMLElement;

@interface EMWorkbookMapper : CMMapper <CMMapperRoot> {
    boolmHasPushedFirstSheet;
    boolmHasPushedHeader;
    boolmIsFirstMappedSheet;
    boolmIsFrameset;
    boolmLoadingMessageVisible;
    EDWorkbook *edWorkbook;
    CMArchiveManager *mArchiver;
    OIXMLElement *mBodyElement;
    NSString *mFileName;
    int mHeight;
    unsigned long long mNumberOfMappedSheets;
    unsigned long long mRealSheetCount;
    NSString *mResourceUrlPrefix;
    NSString *mResourceUrlProtocol;
    unsigned int mSheetIndex;
    NSMutableArray *mSheetURLs;
    NSString *mStyleSheetGuid;
    OIXMLDocument *mTabBarDoc;
    NSString *mTabBarURL;
    double mTabPosition;
    int mWidth;
    NSMutableArray *mWorksheetGuids;
    NSMutableArray *mWorksheetNames;
    NSMutableArray *mWorksheetUrls;
    OIXMLDocument *mXhtmlDoc;
}

+ (id)borderStyleCache;
+ (id)borderWidthCache;
+ (id)cssStyleCache;

- (id)_copyStringForSheet:(id)arg1 atIndex:(unsigned long long)arg2 withState:(id)arg3 andMapper:(id)arg4;
- (id)_frontPageByCopyingMainPage;
- (id)_mainPageBack;
- (void)_pushTabForSheet:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)archiver;
- (id)blipAtIndex:(unsigned int)arg1;
- (id)copySheetMapperWithEdSheet:(id)arg1;
- (void)dealloc;
- (id)documentTitle;
- (id)fileName;
- (void)finishMappingWithState:(id)arg1;
- (bool)hasMultipleSheets;
- (id)initWithEDWorkbook:(id)arg1 archiver:(id)arg2;
- (bool)isMultiPage;
- (void)mapBodyStyleAt:(id)arg1;
- (void)mapElement:(id)arg1 atIndex:(unsigned long long)arg2 withState:(id)arg3 isLastElement:(bool)arg4;
- (struct CGSize { double x1; double x2; })pageSizeForDevice;
- (void)setFileName:(id)arg1;
- (void)startMappingWithState:(id)arg1;
- (id)styleMatrix;
- (id)workbook;

@end
