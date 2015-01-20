/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class CLGeocoder, CLLocationManager, EKReminderLocationItem, NSArray, NSMutableArray, NSString;

@interface EKReminderLocationPickerModel : NSObject <CLLocationManagerDelegate> {
    void *_addressBook;
    EKReminderLocationItem *_currentLocationItem;
    EKReminderLocationItem *_customLocationItem;
    struct __CFArray { } *_delegates;
    CLGeocoder *_geocoder;
    EKReminderLocationItem *_itemBeingGeocoded;
    NSMutableArray *_itemsQueuedForGeocoding;
    NSArray *_locationItemsForMe;
    CLLocationManager *_locationManager;
    int _operationCount;
    int _selectedItemType;
    long long _selectedMeCardItem;
    bool_isReverseGeocoding;
    bool_isReverseGeocodingQueued;
    bool_meCardIsSet;
    bool_needsUpdate;
}

@property(readonly) void* addressBook;
@property(readonly) EKReminderLocationItem * currentLocationItem;
@property(retain) EKReminderLocationItem * customLocationItem;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) EKReminderLocationItem * itemBeingGeocoded;
@property(readonly) bool meCardIsSet;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginOperation;
- (void)_cacheLocation:(id)arg1 forAddressDictionary:(id)arg2;
- (void)_cancelUpdatingCurrentLocation;
- (void)_didChangeSelection;
- (void)_didEncounterError:(id)arg1;
- (void)_didUpdateCurrentLocationItem;
- (void)_didUpdateCustomLocationItem;
- (void)_didUpdateMeCardItem:(long long)arg1;
- (void)_endOperation;
- (void)_endUpdatingCurrentLocation;
- (void)_geocodeItem:(id)arg1;
- (void)_giveUpGettingCurrentLocation;
- (void)_handleCompletedGeocodeWithPlacemarks:(id)arg1 error:(id)arg2;
- (void)_handleGeocodingAllItems;
- (bool)_isGeocoding;
- (void)_killTimer;
- (void)_reverseGeocodeCurrentLocation;
- (void)_startNextGeocoderOperation;
- (id)_stringForAuthorizationStatus:(int)arg1;
- (void)addDelegate:(id)arg1;
- (void*)addressBook;
- (id)cachedLocationForAddressDictionary:(id)arg1;
- (id)currentLocationItem;
- (id)customLocationItem;
- (void)dealloc;
- (id)init;
- (bool)isCurrentLocationSelected;
- (bool)isCustomLocationSelected;
- (id)itemBeingGeocoded;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (bool)meCardIsSet;
- (id)meCardItemAtIndex:(long long)arg1;
- (long long)numberOfMeCardItems;
- (long long)numberOfPossibleLocationItems;
- (void)reloadMeCardLocationItems;
- (void)removeDelegate:(id)arg1;
- (void)selectCurrentLocation;
- (void)selectCustomLocation;
- (void)selectLocation:(id)arg1 withAddressDictionary:(id)arg2;
- (void)selectLocation:(id)arg1;
- (void)selectMeCardItem:(long long)arg1;
- (id)selectedLocationItem;
- (long long)selectedMeCardItem;
- (void)setCustomLocation:(id)arg1 withAddressDictionary:(id)arg2;
- (void)setCustomLocationItem:(id)arg1;
- (void)setItemBeingGeocoded:(id)arg1;
- (void)startUpdatingLocationItemsIfNecessary;

@end
