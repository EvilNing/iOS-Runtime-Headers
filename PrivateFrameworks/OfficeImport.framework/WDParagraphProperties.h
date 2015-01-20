/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDCharacterProperties, WDDocument;

@interface WDParagraphProperties : NSObject <NSCopying> {
    unsigned int mCharacterPropertiesOverridden : 1;
    unsigned int mOriginal : 1;
    unsigned int mTracked : 1;
    unsigned int mResolved : 1;
    WDCharacterProperties *mCharacterProperties;
    WDDocument *mDocument;
    struct { id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; struct { unsigned char x_9_1_1; unsigned char x_9_1_2; } x9; id x10; id x11; long long x12; unsigned long long x13; unsigned long long x14; long long x15; long long x16; long long x17; long long x18; long long x19; short x20; short x21; short x22; short x23; short x24; short x25; short x26; short x27; short x28; unsigned short x29; unsigned short x30; unsigned short x31; unsigned short x32; unsigned short x33; BOOL x34; unsigned char x35; unsigned char x36; unsigned char x37; unsigned char x38; unsigned char x39; unsigned char x40; unsigned char x41; unsigned char x42; unsigned int x43 : 1; unsigned int x44 : 1; unsigned int x45 : 1; unsigned int x46 : 1; unsigned int x47 : 1; unsigned int x48 : 1; unsigned int x49 : 1; unsigned int x50 : 1; unsigned int x51 : 1; unsigned int x52 : 1; unsigned int x53 : 1; unsigned int x54 : 1; unsigned int x55 : 1; unsigned int x56 : 1; unsigned int x57 : 1; unsigned int x58 : 1; unsigned int x59 : 1; unsigned int x60 : 1; unsigned int x61 : 1; unsigned int x62 : 1; unsigned int x63 : 1; unsigned int x64 : 1; unsigned int x65 : 1; unsigned int x66 : 1; unsigned int x67 : 1; unsigned int x68 : 1; unsigned int x69 : 1; unsigned int x70 : 1; unsigned int x71 : 1; unsigned int x72 : 1; unsigned int x73 : 1; unsigned int x74 : 1; unsigned int x75 : 1; unsigned int x76 : 1; unsigned int x77 : 1; unsigned int x78 : 1; unsigned int x79 : 1; unsigned int x80 : 1; unsigned int x81 : 1; unsigned int x82 : 1; unsigned int x83 : 1; unsigned int x84 : 1; unsigned int x85 : 1; unsigned int x86 : 1; unsigned int x87 : 1; unsigned int x88 : 1; unsigned int x89 : 1; unsigned int x90 : 1; unsigned int x91 : 1; unsigned int x92 : 1; unsigned int x93 : 1; unsigned int x94 : 1; unsigned int x95 : 1; unsigned int x96 : 1; unsigned int x97 : 1; unsigned int x98 : 1; unsigned int x99 : 1; unsigned int x100 : 1; unsigned int x101 : 1; unsigned int x102 : 1; unsigned int x103 : 1; unsigned int x104 : 1; unsigned int x105 : 1; unsigned int x106 : 1; unsigned int x107 : 1; unsigned int x108 : 1; unsigned int x109 : 1; unsigned int x110 : 1; } *mOriginalProperties;
    struct { id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; struct { unsigned char x_9_1_1; unsigned char x_9_1_2; } x9; id x10; id x11; long long x12; unsigned long long x13; unsigned long long x14; long long x15; long long x16; long long x17; long long x18; long long x19; short x20; short x21; short x22; short x23; short x24; short x25; short x26; short x27; short x28; unsigned short x29; unsigned short x30; unsigned short x31; unsigned short x32; unsigned short x33; BOOL x34; unsigned char x35; unsigned char x36; unsigned char x37; unsigned char x38; unsigned char x39; unsigned char x40; unsigned char x41; unsigned char x42; unsigned int x43 : 1; unsigned int x44 : 1; unsigned int x45 : 1; unsigned int x46 : 1; unsigned int x47 : 1; unsigned int x48 : 1; unsigned int x49 : 1; unsigned int x50 : 1; unsigned int x51 : 1; unsigned int x52 : 1; unsigned int x53 : 1; unsigned int x54 : 1; unsigned int x55 : 1; unsigned int x56 : 1; unsigned int x57 : 1; unsigned int x58 : 1; unsigned int x59 : 1; unsigned int x60 : 1; unsigned int x61 : 1; unsigned int x62 : 1; unsigned int x63 : 1; unsigned int x64 : 1; unsigned int x65 : 1; unsigned int x66 : 1; unsigned int x67 : 1; unsigned int x68 : 1; unsigned int x69 : 1; unsigned int x70 : 1; unsigned int x71 : 1; unsigned int x72 : 1; unsigned int x73 : 1; unsigned int x74 : 1; unsigned int x75 : 1; unsigned int x76 : 1; unsigned int x77 : 1; unsigned int x78 : 1; unsigned int x79 : 1; unsigned int x80 : 1; unsigned int x81 : 1; unsigned int x82 : 1; unsigned int x83 : 1; unsigned int x84 : 1; unsigned int x85 : 1; unsigned int x86 : 1; unsigned int x87 : 1; unsigned int x88 : 1; unsigned int x89 : 1; unsigned int x90 : 1; unsigned int x91 : 1; unsigned int x92 : 1; unsigned int x93 : 1; unsigned int x94 : 1; unsigned int x95 : 1; unsigned int x96 : 1; unsigned int x97 : 1; unsigned int x98 : 1; unsigned int x99 : 1; unsigned int x100 : 1; unsigned int x101 : 1; unsigned int x102 : 1; unsigned int x103 : 1; unsigned int x104 : 1; unsigned int x105 : 1; unsigned int x106 : 1; unsigned int x107 : 1; unsigned int x108 : 1; unsigned int x109 : 1; unsigned int x110 : 1; } *mTrackedProperties;
}

- (void)addTabStopAdded:(struct { short x1; unsigned char x2; unsigned char x3; }*)arg1;
- (void)addTabStopDeletedPosition:(short)arg1;
- (bool)anchorLock;
- (id)barBorder;
- (id)baseStyle;
- (id)betweenBorder;
- (bool)biDi;
- (id)bottomBorder;
- (id)characterProperties;
- (void)clearBaseStyle;
- (void)clearChararacterProperties;
- (bool)contextualSpacing;
- (void)copyPropertiesInto:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)document;
- (struct { unsigned char x1; unsigned char x2; })dropCap;
- (short)firstLineIndent;
- (short)firstLineIndentChars;
- (short)followingIndent;
- (int)formattingChanged;
- (bool)hasTabStopAddedAtPosition:(short)arg1;
- (bool)hasTabStopDeletedAtPosition:(short)arg1;
- (long long)height;
- (int)heightRule;
- (int)horizontalAnchor;
- (long long)horizontalPosition;
- (long long)horizontalSpace;
- (unsigned short)indexToAuthorIDOfFormattingChange;
- (id)initWithDocument:(id)arg1;
- (bool)isAnchorLockOverridden;
- (bool)isAnythingOverridden;
- (bool)isAnythingOverriddenIn:(struct { id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; struct { unsigned char x_9_1_1; unsigned char x_9_1_2; } x9; id x10; id x11; long long x12; unsigned long long x13; unsigned long long x14; long long x15; long long x16; long long x17; long long x18; long long x19; short x20; short x21; short x22; short x23; short x24; short x25; short x26; short x27; short x28; unsigned short x29; unsigned short x30; unsigned short x31; unsigned short x32; unsigned short x33; BOOL x34; unsigned char x35; unsigned char x36; unsigned char x37; unsigned char x38; unsigned char x39; unsigned char x40; unsigned char x41; unsigned char x42; unsigned int x43 : 1; unsigned int x44 : 1; unsigned int x45 : 1; unsigned int x46 : 1; unsigned int x47 : 1; unsigned int x48 : 1; unsigned int x49 : 1; unsigned int x50 : 1; unsigned int x51 : 1; unsigned int x52 : 1; unsigned int x53 : 1; unsigned int x54 : 1; unsigned int x55 : 1; unsigned int x56 : 1; unsigned int x57 : 1; unsigned int x58 : 1; unsigned int x59 : 1; unsigned int x60 : 1; unsigned int x61 : 1; unsigned int x62 : 1; unsigned int x63 : 1; unsigned int x64 : 1; unsigned int x65 : 1; unsigned int x66 : 1; unsigned int x67 : 1; unsigned int x68 : 1; unsigned int x69 : 1; unsigned int x70 : 1; unsigned int x71 : 1; unsigned int x72 : 1; unsigned int x73 : 1; unsigned int x74 : 1; unsigned int x75 : 1; unsigned int x76 : 1; unsigned int x77 : 1; unsigned int x78 : 1; unsigned int x79 : 1; unsigned int x80 : 1; unsigned int x81 : 1; unsigned int x82 : 1; unsigned int x83 : 1; unsigned int x84 : 1; unsigned int x85 : 1; unsigned int x86 : 1; unsigned int x87 : 1; unsigned int x88 : 1; unsigned int x89 : 1; unsigned int x90 : 1; unsigned int x91 : 1; unsigned int x92 : 1; unsigned int x93 : 1; unsigned int x94 : 1; unsigned int x95 : 1; unsigned int x96 : 1; unsigned int x97 : 1; unsigned int x98 : 1; unsigned int x99 : 1; unsigned int x100 : 1; unsigned int x101 : 1; unsigned int x102 : 1; unsigned int x103 : 1; unsigned int x104 : 1; unsigned int x105 : 1; unsigned int x106 : 1; unsigned int x107 : 1; unsigned int x108 : 1; unsigned int x109 : 1; unsigned int x110 : 1; }*)arg1;
- (bool)isBarBorderOverridden;
- (bool)isBaseStyleOverridden;
- (bool)isBetweenBorderOverridden;
- (bool)isBiDiOverridden;
- (bool)isBottomBorderOverridden;
- (bool)isCharacterPropertiesOverridden;
- (bool)isContextualSpacingOverridden;
- (bool)isDropCapOverridden;
- (bool)isFirstLineIndentCharsOverridden;
- (bool)isFirstLineIndentOverridden;
- (bool)isFollowingIndentOverridden;
- (bool)isFormattingChangedOverridden;
- (bool)isHeightOverridden;
- (bool)isHeightRuleOverridden;
- (bool)isHorizontalAnchorOverridden;
- (bool)isHorizontalPositionOverridden;
- (bool)isHorizontalSpaceOverridden;
- (bool)isIndexToAuthorIDOfFormattingChangeOverridden;
- (bool)isJustificationOverridden;
- (bool)isKeepLinesTogetherOverridden;
- (bool)isKeepNextParagraphTogetherOverridden;
- (bool)isKinsokuOffOverridden;
- (bool)isLeadingIndentOverridden;
- (bool)isLeftBorderOverridden;
- (bool)isLeftIndentCharsOverridden;
- (bool)isLeftIndentOverridden;
- (bool)isLineSpacingOverridden;
- (bool)isLineSpacingRuleOverridden;
- (bool)isListIndexOverridden;
- (bool)isListLevelOverridden;
- (bool)isOutlineLevelOverridden;
- (bool)isPageBreakBefore;
- (bool)isPageBreakBeforeOverridden;
- (bool)isPhysicalJustificationOverridden;
- (bool)isRightBorderOverridden;
- (bool)isRightIndentCharsOverridden;
- (bool)isRightIndentOverridden;
- (bool)isShadingOverridden;
- (bool)isSpaceAfterAutoOverridden;
- (bool)isSpaceAfterOverridden;
- (bool)isSpaceBeforeAutoOverridden;
- (bool)isSpaceBeforeOverridden;
- (bool)isSuppressAutoHyphensOverridden;
- (bool)isSuppressLineNumbersOverridden;
- (bool)isTopBorderOverridden;
- (bool)isVerticalAnchorOverridden;
- (bool)isVerticalPositionOverridden;
- (bool)isVerticalSpaceOverridden;
- (bool)isWidowControlOverridden;
- (bool)isWidthOverridden;
- (bool)isWrapCodeOverridden;
- (bool)isWrapOverridden;
- (int)justification;
- (bool)keepLinesTogether;
- (bool)keepNextParagraphTogether;
- (bool)kinsokuOff;
- (short)leadingIndent;
- (id)leftBorder;
- (short)leftIndent;
- (short)leftIndentChars;
- (short)lineSpacing;
- (int)lineSpacingRule;
- (unsigned long long)listIndex;
- (unsigned char)listLevel;
- (id)mutableBarBorder;
- (id)mutableBetweenBorder;
- (id)mutableBottomBorder;
- (id)mutableCharacterProperties;
- (id)mutableLeftBorder;
- (id)mutableRightBorder;
- (id)mutableShading;
- (id)mutableTopBorder;
- (void)negateFormattingChangesWithDefaults:(id)arg1;
- (unsigned short)outlineLevel;
- (int)physicalJustification;
- (void)removeTabStopAddedWithPosition:(short)arg1;
- (int)resolveMode;
- (id)rightBorder;
- (short)rightIndent;
- (short)rightIndentChars;
- (void)setAnchorLock:(bool)arg1;
- (void)setBaseStyle:(id)arg1;
- (void)setBiDi:(bool)arg1;
- (void)setCharacterProperties:(id)arg1;
- (void)setContextualSpacing:(bool)arg1;
- (void)setDropCap:(struct { unsigned char x1; unsigned char x2; })arg1;
- (void)setFirstLineIndent:(short)arg1;
- (void)setFirstLineIndentChars:(short)arg1;
- (void)setFollowingIndent:(short)arg1;
- (void)setFormattingChanged:(int)arg1;
- (void)setHeight:(long long)arg1;
- (void)setHeightRule:(int)arg1;
- (void)setHorizontalAnchor:(int)arg1;
- (void)setHorizontalPosition:(long long)arg1;
- (void)setHorizontalSpace:(long long)arg1;
- (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1;
- (void)setJustification:(int)arg1;
- (void)setKeepLinesTogether:(bool)arg1;
- (void)setKeepNextParagraphTogether:(bool)arg1;
- (void)setKinsokuOff:(bool)arg1;
- (void)setLeadingIndent:(short)arg1;
- (void)setLeftIndent:(short)arg1;
- (void)setLeftIndentChars:(short)arg1;
- (void)setLineSpacing:(short)arg1;
- (void)setLineSpacingRule:(int)arg1;
- (void)setListIndex:(unsigned long long)arg1;
- (void)setListLevel:(unsigned char)arg1;
- (void)setOutlineLevel:(unsigned short)arg1;
- (void)setPageBreakBefore:(bool)arg1;
- (void)setPhysicalJustification:(int)arg1;
- (void)setResolveMode:(int)arg1;
- (void)setRightIndent:(short)arg1;
- (void)setRightIndentChars:(short)arg1;
- (void)setSpaceAfter:(unsigned short)arg1;
- (void)setSpaceAfterAuto:(bool)arg1;
- (void)setSpaceBefore:(unsigned short)arg1;
- (void)setSpaceBeforeAuto:(bool)arg1;
- (void)setSuppressAutoHyphens:(bool)arg1;
- (void)setSuppressLineNumbers:(bool)arg1;
- (void)setTabStopAddedCount:(unsigned long long)arg1;
- (void)setTabStopDeletedPositionCount:(unsigned long long)arg1;
- (void)setVerticalAnchor:(int)arg1;
- (void)setVerticalPosition:(long long)arg1;
- (void)setVerticalSpace:(long long)arg1;
- (void)setWidowControl:(bool)arg1;
- (void)setWidth:(long long)arg1;
- (void)setWrap:(bool)arg1;
- (void)setWrapCode:(BOOL)arg1;
- (id)shading;
- (unsigned short)spaceAfter;
- (bool)spaceAfterAuto;
- (unsigned short)spaceBefore;
- (bool)spaceBeforeAuto;
- (bool)suppressAutoHyphens;
- (bool)suppressLineNumbers;
- (struct { short x1; unsigned char x2; unsigned char x3; }*)tabStopAddedAt:(unsigned long long)arg1;
- (unsigned long long)tabStopAddedCount;
- (short)tabStopDeletedPositionAt:(unsigned long long)arg1;
- (unsigned long long)tabStopDeletedPositionCount;
- (id)topBorder;
- (int)verticalAnchor;
- (long long)verticalPosition;
- (long long)verticalSpace;
- (bool)widowControl;
- (long long)width;
- (bool)wrap;
- (BOOL)wrapCode;

@end
