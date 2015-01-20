/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, NSMutableArray, NSSet;

@interface TSCH3DShaderEffects : NSObject {
    NSArray *mCacheList;
    NSMutableArray *mSections[4];
}

@property(readonly) NSSet * identifier;

- (void)addEffect:(id)arg1 toSection:(int)arg2;
- (void)addEffect:(id)arg1;
- (void)addEffectOnce:(id)arg1 toSection:(int)arg2;
- (void)addEffectsFromArray:(id)arg1 toSection:(int)arg2;
- (void)addEffectsFromArray:(id)arg1;
- (void)addVariables:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)effects;
- (void)enumerateEffectsUsingBlock:(id)arg1;
- (id)identifier;
- (id)init;
- (void)inject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSectionEnabled:(int)arg1;
- (void)prependEffect:(id)arg1 toSection:(int)arg2;
- (void)prependEffect:(id)arg1;
- (void)removeEffect:(id)arg1 fromSection:(int)arg2;
- (bool)removeEffectOfClass:(Class)arg1 fromSection:(int)arg2;
- (void)reset;
- (void)resetCacheList;
- (void)resetSection:(int)arg1 toArray:(id)arg2;
- (void)resetSection:(int)arg1;
- (void)resetToArray:(id)arg1;
- (void)setEnable:(bool)arg1 forSection:(int)arg2;

@end
