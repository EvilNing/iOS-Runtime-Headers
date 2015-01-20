/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString, SALocalSearchBusiness2;

@interface SAMovieMovieTheaterShowtimes : AceObject <SAAceSerializable> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(copy) NSArray * movieShowtimes;
@property(copy) NSArray * showtimes;
@property(readonly) Class superclass;
@property(retain) SALocalSearchBusiness2 * theater;

+ (id)movieTheaterShowtimes;
+ (id)movieTheaterShowtimesWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)movieShowtimes;
- (void)setMovieShowtimes:(id)arg1;
- (void)setShowtimes:(id)arg1;
- (void)setTheater:(id)arg1;
- (id)showtimes;
- (id)theater;

@end
