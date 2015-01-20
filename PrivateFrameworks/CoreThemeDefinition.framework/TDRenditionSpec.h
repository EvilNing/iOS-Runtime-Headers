/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@class NSDate, TDElementProduction, TDRenditionKeySpec, TDRenditionType;

@interface TDRenditionSpec : NSManagedObject {
}

@property(retain) NSDate * dateOfLastChange;
@property(retain) TDRenditionKeySpec * keySpec;
@property(retain) TDElementProduction * production;
@property(retain) TDRenditionType * renditionType;

- (void)awakeFromInsert;
- (id)createCSIRepresentationWithCompression:(bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (id)renditionType;
- (void)resetToBaseKeySpec;
- (void)setRenditionType:(id)arg1;

@end
