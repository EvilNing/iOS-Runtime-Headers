/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaItem, NSError, NSString, SSKeybagRequest;

@interface MPML3ErrorResolver : MPAVErrorResolver <SSRequestDelegate> {
    NSError *_error;
    MPMediaItem *_mediaItem;
    SSKeybagRequest *_request;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) NSError * error;
@property(readonly) unsigned long long hash;
@property(retain) MPMediaItem * mediaItem;
@property(retain) SSKeybagRequest * request;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)error;
- (id)initWithMediaItem:(id)arg1;
- (id)mediaItem;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (id)request;
- (void)requestDidFinish:(id)arg1;
- (void)resolveError:(id)arg1;
- (void)setError:(id)arg1;
- (void)setMediaItem:(id)arg1;
- (void)setRequest:(id)arg1;

@end
