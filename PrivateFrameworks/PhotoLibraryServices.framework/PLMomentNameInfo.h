/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSArray, PLRevGeoCompoundNameInfo;

@interface PLMomentNameInfo : NSObject {
    NSArray *__orderedNames;
    PLRevGeoCompoundNameInfo *__primaryNameInfo;
    PLRevGeoCompoundNameInfo *__secondaryNameInfo;
    bool_locationInfoIsValid;
}

@property(setter=_setOrderedNames:,retain) NSArray * _orderedNames;
@property(retain) PLRevGeoCompoundNameInfo * _primaryNameInfo;
@property(retain) PLRevGeoCompoundNameInfo * _secondaryNameInfo;

+ (id)_localizedNameForName:(id)arg1;

- (id)_orderedNames;
- (id)_primaryNameInfo;
- (id)_secondaryNameInfo;
- (void)_setOrderedNames:(id)arg1;
- (id)componentsForPrimaryTitle;
- (id)componentsForSecondaryTitle;
- (void)dealloc;
- (id)initWithMoment:(id)arg1;
- (id)initWithMomentList:(id)arg1;
- (id)localizedPrimaryTitle;
- (bool)locationInfoIsValid;
- (void)set_primaryNameInfo:(id)arg1;
- (void)set_secondaryNameInfo:(id)arg1;

@end
