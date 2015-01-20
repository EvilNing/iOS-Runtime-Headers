/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface _MPHomeSharingArtworkCacheKey : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    unsigned long long _persistentID;
    } _size;
}

@property(readonly) unsigned long long persistentID;
@property(readonly) struct CGSize { double x1; double x2; } size;

- (unsigned long long)hash;
- (id)initWithPersistentID:(unsigned long long)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)persistentID;
- (struct CGSize { double x1; double x2; })size;

@end
