/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCompositionInternal, NSArray;

@interface AVComposition : AVAsset <NSMutableCopying> {
    AVCompositionInternal *_priv;
}

@property(readonly) struct CGSize { double x1; double x2; } naturalSize;
@property(readonly) NSArray * tracks;

+ (void)initialize;

- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (Class)_classForTrackInspectors;
- (int)_createEmptyMutableCompositionIfNeeded;
- (struct OpaqueFigFormatReader { }*)_formatReader;
- (id)_initWithComposition:(id)arg1;
- (void)_loadAssetInspectorAndLoaderOnce;
- (struct OpaqueFigMutableComposition { }*)_mutableComposition;
- (id)_mutableTracks;
- (id)_newTrackForIndex:(long long)arg1;
- (void)_setNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct CGSize { double x1; double x2; })naturalSize;
- (id)tracks;

@end
