/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class ADBannerView, NSDictionary, NSString, NSURL;

@interface RURadioAdTrack : NSObject <ADBannerViewDelegate, NSCopying> {
    NSURL *_URL;
    long long _adType;
    ADBannerView *_adView;
    NSDictionary *_loudnessInfo;
}

@property(readonly) NSURL * URL;
@property(readonly) long long actionType;
@property(readonly) long long adType;
@property(readonly) ADBannerView * adView;
@property(readonly) NSURL * artworkURL;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) bool hasAction;
@property(readonly) unsigned long long hash;
@property(copy,readonly) NSDictionary * loudnessInfo;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * uniqueIdentifier;

- (void).cxx_destruct;
- (id)URL;
- (id)_loudnessInfoForVideoAssetDictionary:(id)arg1;
- (long long)actionType;
- (long long)adType;
- (id)adView;
- (id)artworkCatalog;
- (id)artworkURL;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)bannerViewActionDidFinish:(id)arg1;
- (bool)bannerViewActionShouldBegin:(id)arg1 willLeaveApplication:(bool)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)hasAction;
- (unsigned long long)hash;
- (id)initWithAdView:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)loudnessInfo;
- (void)triggerAdAction;
- (id)uniqueIdentifier;

@end
