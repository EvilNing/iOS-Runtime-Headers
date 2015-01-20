/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableString, WDCharacterProperties, WDDocument, WDOfficeArt, WDParagraphProperties;

@interface WDListLevel : NSObject {
    boolmLegacy;
    boolmLegal;
    boolmRestartNumbering;
    WDCharacterProperties *mCharacterProperties;
    WDDocument *mDocument;
    WDOfficeArt *mImage;
    int mJustification;
    long long mLegacyIndent;
    long long mLegacySpace;
    int mNumberFormat;
    WDParagraphProperties *mParagraphProperties;
    long long mRestartLevel;
    long long mStartNumber;
    int mSuffix;
    NSMutableString *mText;
}

- (id)characterProperties;
- (void)dealloc;
- (id)description;
- (id)image;
- (bool)imageBullet;
- (bool)imageBulletOverridden;
- (id)initWithDocument:(id)arg1;
- (int)justification;
- (bool)justificationOverridden;
- (bool)legacy;
- (long long)legacyIndent;
- (long long)legacySpace;
- (bool)legal;
- (bool)legalOverridden;
- (int)numberFormat;
- (bool)numberFormatOverridden;
- (id)paragraphProperties;
- (long long)restartLevel;
- (bool)restartLevelOverridden;
- (bool)restartNumbering;
- (bool)restartNumberingOverridden;
- (void)setImage:(id)arg1;
- (void)setJustification:(int)arg1;
- (void)setLegacy:(bool)arg1;
- (void)setLegacyIndent:(long long)arg1;
- (void)setLegacySpace:(long long)arg1;
- (void)setLegal:(bool)arg1;
- (void)setNumberFormat:(int)arg1;
- (void)setRestartLevel:(long long)arg1;
- (void)setRestartNumbering:(bool)arg1;
- (void)setStartNumber:(long long)arg1;
- (void)setSuffix:(int)arg1;
- (void)setText:(id)arg1;
- (long long)startNumber;
- (bool)startNumberOverridden;
- (int)suffix;
- (bool)suffixOverridden;
- (id)text;
- (bool)textOverridden;

@end
