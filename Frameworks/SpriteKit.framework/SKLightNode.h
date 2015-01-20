/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@class UIColor;

@interface SKLightNode : SKNode {
    UIColor *_ambientColor;
    unsigned int _categoryBitMask;
    double _falloff;
    UIColor *_lightColor;
    UIColor *_shadowColor;
    bool_enabled;
}

@property(retain) UIColor * ambientColor;
@property unsigned int categoryBitMask;
@property(getter=isEnabled) bool enabled;
@property double falloff;
@property(retain) UIColor * lightColor;
@property(retain) UIColor * shadowColor;

- (void).cxx_destruct;
- (id)ambientColor;
- (unsigned int)categoryBitMask;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)falloff;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEnabled;
- (bool)isEqualToNode:(id)arg1;
- (unsigned int)lightCategoryBitMask;
- (id)lightColor;
- (double)lightDecay;
- (void)setAmbientColor:(id)arg1;
- (void)setCategoryBitMask:(unsigned int)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFalloff:(double)arg1;
- (void)setLightCategoryBitMask:(unsigned int)arg1;
- (void)setLightColor:(id)arg1;
- (void)setLightDecay:(double)arg1;
- (void)setShadowColor:(id)arg1;
- (id)shadowColor;

@end
