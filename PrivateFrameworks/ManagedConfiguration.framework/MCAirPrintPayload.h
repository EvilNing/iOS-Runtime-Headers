/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSMutableArray;

@interface MCAirPrintPayload : MCPayload {
    unsigned long long _airPrintCount;
    NSMutableArray *_ippAddresses;
}

@property unsigned long long airPrintCount;
@property(retain) NSMutableArray * ippAddresses;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (unsigned long long)airPrintCount;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)ippAddresses;
- (id)payloadDescriptionKeyValueSections;
- (id)restrictions;
- (void)setAirPrintCount:(unsigned long long)arg1;
- (void)setIppAddresses:(id)arg1;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;

@end
