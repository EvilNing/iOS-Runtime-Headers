/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <ADAdSlotDelegate>, NSArray, NSData, NSMutableArray, NSString;

@interface ADAdSlot : NSObject <ADBannerViewInternalDelegate, NSSecureCoding> {
    id _completionHandler;
    <ADAdSlotDelegate> *_delegate;
    NSData *_followingSongData;
    NSString *_identifier;
    NSMutableArray *_pendingBannerLoads;
    NSData *_previousSongData;
    NSData *_stationData;
    NSMutableArray *_visuallyDisengagedBanners;
    NSMutableArray *_visuallyEngagedBanners;
    bool_didBeginPlayback;
    bool_didReportFinish;
    bool_didRequest;
    bool_gatewayAdSlot;
}

@property(retain,readonly) NSArray * ads;
@property(copy) id completionHandler;
@property(copy,readonly) NSString * debugDescription;
@property <ADAdSlotDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property bool didBeginPlayback;
@property bool didReportFinish;
@property bool didRequest;
@property(copy) NSData * followingSongData;
@property bool gatewayAdSlot;
@property(readonly) unsigned long long hash;
@property(copy) NSString * identifier;
@property(retain) NSMutableArray * pendingBannerLoads;
@property(copy) NSData * previousSongData;
@property(copy) NSData * stationData;
@property(readonly) Class superclass;
@property(retain) NSMutableArray * visuallyDisengagedBanners;
@property(retain) NSMutableArray * visuallyEngagedBanners;

+ (bool)supportsSecureCoding;

- (id)_bannersForAds:(id)arg1;
- (void)_considerInvokingCompletionHandler;
- (void)_visuallyEngagedDidChange;
- (id)ads;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)bannerViewDidLoadAd:(id)arg1;
- (id)completionHandler;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (bool)didBeginPlayback;
- (void)didFinishPlaybackOfAds:(id)arg1 skippedCount:(long long)arg2;
- (bool)didReportFinish;
- (bool)didRequest;
- (void)encodeWithCoder:(id)arg1;
- (id)followingSongData;
- (bool)gatewayAdSlot;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)loadVisuallyEngagedAds:(id)arg1 visuallyDisengagedAds:(id)arg2 completionHandler:(id)arg3;
- (id)pendingBannerLoads;
- (id)previousSongData;
- (void)setCompletionHandler:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidBeginPlayback:(bool)arg1;
- (void)setDidReportFinish:(bool)arg1;
- (void)setDidRequest:(bool)arg1;
- (void)setFollowingSongData:(id)arg1;
- (void)setGatewayAdSlot:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPendingBannerLoads:(id)arg1;
- (void)setPreviousSongData:(id)arg1;
- (void)setStationData:(id)arg1;
- (void)setVisuallyDisengagedBanners:(id)arg1;
- (void)setVisuallyEngagedBanners:(id)arg1;
- (id)stationData;
- (id)visuallyDisengagedBanners;
- (id)visuallyEngagedBanners;
- (void)willBeginPlaybackOfAds:(id)arg1 forSpace:(int)arg2;

@end
