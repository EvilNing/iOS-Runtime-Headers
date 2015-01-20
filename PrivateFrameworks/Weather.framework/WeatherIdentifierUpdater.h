/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableArray;

@interface WeatherIdentifierUpdater : WeatherUpdater {
    NSMutableArray *_parsedCities;
    NSArray *_requestedCities;
    id _woeidWeatherHandler;
}

@property(retain) NSMutableArray * parsedCities;
@property(retain) NSArray * requestedCities;

+ (void)clearSharedIdentifierUpdater;
+ (id)sharedWeatherIdentifierUpdater;

- (void)_failed:(unsigned long long)arg1;
- (id)aggregateDictionaryDomain;
- (void)dealloc;
- (void)handleCompletionForCity:(id)arg1 withUpdateDetail:(unsigned long long)arg2;
- (id)parsedCities;
- (id)requestedCities;
- (void)setParsedCities:(id)arg1;
- (void)setRequestedCities:(id)arg1;
- (void)updateWeatherForCities:(id)arg1 withCompletionHandler:(id)arg2;
- (void)updateWeatherForCity:(id)arg1;

@end
