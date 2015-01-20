/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPersistenceManager : NSObject {
}

+ (bool)createMuidMappingDirectoryWithError:(id*)arg1;
+ (bool)phoneNumberMuidMappingFileExists;
+ (bool)readPhoneNumberMuidMapping:(id*)arg1 uniquePhoneNumbers:(id*)arg2 error:(id*)arg3;
+ (bool)readPhoneNumberMuidMapping:(id*)arg1 uniquePhoneNumbers:(id*)arg2 version:(id*)arg3 error:(id*)arg4;
+ (bool)writePhoneNumberMuidMappingForMapping:(id)arg1 uniquePhoneNumbers:(id)arg2 error:(id*)arg3;

@end
