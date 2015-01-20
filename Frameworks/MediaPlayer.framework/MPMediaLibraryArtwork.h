/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class ML3Artwork, MPMediaLibraryArtworkRequest, NSArray, NSURL;

@interface MPMediaLibraryArtwork : NSObject {
    ML3Artwork *_artwork;
    MPMediaLibraryArtworkRequest *_artworkRequest;
    NSArray *_validSizes;
}

@property(retain) ML3Artwork * artwork;
@property MPMediaLibraryArtworkRequest * artworkRequest;
@property(readonly) NSURL * originalFileURL;
@property(retain) NSArray * validSizes;

+ (bool)artworkExistsForRequest:(id)arg1;
+ (void)cancelLoadingArtworkForRequest:(id)arg1;
+ (id)existingArtworkWithRequest:(id)arg1;
+ (void)loadArtworkForRequest:(id)arg1 completionHandler:(id)arg2;

- (void).cxx_destruct;
- (id)artwork;
- (id)artworkRequest;
- (unsigned long long)hash;
- (id)imageFileURLForSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)isEqual:(id)arg1;
- (id)originalFileURL;
- (void)setArtwork:(id)arg1;
- (void)setArtworkRequest:(id)arg1;
- (void)setValidSizes:(id)arg1;
- (id)validSizes;

@end
