/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class <PLCPLStatusDelegate>, CPLStatus, NSDate, NSProgress, NSString;

@interface PLCPLStatus : NSObject <CPLStatusDelegate> {
    CPLStatus *_cplStatus;
    <PLCPLStatusDelegate> *_delegate;
    unsigned long long _imageDeletionCountSinceSync;
    unsigned long long _numberOfImagesToDownload;
    unsigned long long _numberOfImagesToUpload;
    unsigned long long _numberOfVideosToDownload;
    unsigned long long _numberOfVideosToUpload;
    NSProgress *_progress;
    id _progressSubscriber;
    double _syncProgress;
    unsigned long long _videoDeletionCountSinceSync;
    bool_isCPLDataClassEnabled;
    bool_isCPLDataClassEnabledValid;
}

@property(copy,readonly) NSString * debugDescription;
@property <PLCPLStatusDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(retain,readonly) NSDate * exitDeleteTime;
@property(readonly) unsigned long long hash;
@property(readonly) bool isEnabled;
@property(readonly) bool isExceedingQuota;
@property(readonly) bool isSyncing;
@property(retain,readonly) NSDate * lastSuccessfulSyncDate;
@property(readonly) unsigned long long numberOfImagesToDownload;
@property(readonly) unsigned long long numberOfImagesToUpload;
@property(readonly) unsigned long long numberOfVideosToDownload;
@property(readonly) unsigned long long numberOfVideosToUpload;
@property(setter=_setProgress:,retain) NSProgress * progress;
@property(readonly) Class superclass;
@property(readonly) double syncProgress;

+ (id)_accountStore;
+ (void)setDeletionCountsSinceLastSyncforImages:(unsigned long long)arg1 videos:(unsigned long long)arg2;
+ (void)setUploadCountsForImages:(unsigned long long)arg1 videos:(unsigned long long)arg2;

- (void)_loadDeletionCounts;
- (void)_loadUploadCounts;
- (void)_networkReachabilityChanged:(id)arg1;
- (void)_setProgress:(id)arg1;
- (void)_setSyncProgress:(double)arg1;
- (void)_setup;
- (void)_subscribeToProgress;
- (void)_teardown;
- (void)_unsubscribeFromProgress;
- (void)_updateDownloadingItemsCount;
- (void)_updateSyncProgress;
- (void)accountStoreDidChange:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)exitDeleteTime;
- (id)init;
- (bool)isEnabled;
- (bool)isExceedingQuota;
- (bool)isSyncing;
- (id)lastSuccessfulSyncDate;
- (unsigned long long)numberOfImagesToDownload;
- (unsigned long long)numberOfImagesToUpload;
- (unsigned long long)numberOfVideosToDownload;
- (unsigned long long)numberOfVideosToUpload;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)progress;
- (void)setDelegate:(id)arg1;
- (void)statusDidChange:(id)arg1;
- (double)syncProgress;

@end
