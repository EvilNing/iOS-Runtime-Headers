/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class KNAnimParameterGroup, KNMotionBlurAnimationPluginWrapper, NSString;

@interface KNTransitionScale : KNAnimationEffect <KNTransitionAnimator, KNFrameAnimator, KNAnimationPluginArchiving> {
    KNMotionBlurAnimationPluginWrapper *_motionBlurWrapper;
    KNAnimParameterGroup *mParameterGroup;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (int)animationCategory;
+ (id)animationFilter;
+ (id)animationName;
+ (id)customAttributes;
+ (id)defaultAttributes;
+ (unsigned long long)directionType;
+ (void)downgradeAttributes:(id*)arg1 animationName:(id*)arg2 warning:(id*)arg3 type:(int)arg4 isToClassic:(bool)arg5 version:(unsigned long long)arg6;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (id)localizedMenuString:(int)arg1;
+ (id)supportedTypes;
+ (id)thumbnailImageNameForType:(int)arg1;
+ (void)upgradeAttributes:(id*)arg1 animationName:(id)arg2 warning:(id*)arg3 type:(int)arg4 isFromClassic:(bool)arg5 version:(unsigned long long)arg6;

- (void)animationDidEndWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (id)animationsWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithAnimationContext:(id)arg1;
- (void)renderFrameWithContext:(id)arg1;

@end
