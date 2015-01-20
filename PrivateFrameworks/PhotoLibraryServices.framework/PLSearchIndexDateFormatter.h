/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSDateFormatter, NSObject<OS_dispatch_queue>, NSString;

@interface PLSearchIndexDateFormatter : NSObject {
    NSDateFormatter *_dateFormatter;
    NSString *_displayFormat;
    NSString *_monthFormat;
    NSString *_parseFormat;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_yearFormat;
    bool_localeDidChange;
}

- (id)_inqNewLocalizedStringFromDate:(id)arg1;
- (void)_inqSetupDateFormatter;
- (void)_inqUpdateDateFormat:(id)arg1;
- (void)_localeDidChange:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)newLocalizedComponentsFromDate:(id)arg1 includeMonth:(bool)arg2;
- (id)newLocalizedStringFromDate:(id)arg1;
- (id)newLocalizedStringFromYear:(id)arg1 month:(id)arg2;

@end
