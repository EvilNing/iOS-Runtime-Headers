/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, NSString, SAWeatherCondition;

@interface SAWeatherForecast : AceObject <SAAceSerializable> {
}

@property(copy) NSNumber * chanceOfPrecipitation;
@property(retain) SAWeatherCondition * condition;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(copy) NSNumber * isUserRequested;
@property(readonly) Class superclass;
@property(copy) NSNumber * timeIndex;

+ (id)forecast;
+ (id)forecastWithDictionary:(id)arg1 context:(id)arg2;

- (id)chanceOfPrecipitation;
- (id)condition;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)isUserRequested;
- (void)setChanceOfPrecipitation:(id)arg1;
- (void)setCondition:(id)arg1;
- (void)setIsUserRequested:(id)arg1;
- (void)setTimeIndex:(id)arg1;
- (id)timeIndex;

@end
