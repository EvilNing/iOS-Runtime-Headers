/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSObject<TSDContainerInfo>, NSString, TSDInfoGeometry, TSPObject<TSDOwningAttachment>, TSWPColumns, TSWPPadding, TSWPShapeStyle, TSWPStorage;

@interface TSWPShapeInfo : TSDShapeInfo <TSDContainerInfo, TSWPStorageParent, TSDSelectionStatisticsContributor, TSDMixing> {
    TSWPStorage *_containedStorage;
}

@property(getter=isAnchoredToText,readonly) bool anchoredToText;
@property(getter=isAttachedToBodyText,readonly) bool attachedToBodyText;
@property(readonly) int columnDirection;
@property(retain) TSWPColumns * columns;
@property(retain) TSWPStorage * containedStorage;
@property long long contentWritingDirection;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) bool displaysInstructionalText;
@property(getter=isFloatingAboveText,readonly) bool floatingAboveText;
@property(copy) TSDInfoGeometry * geometry;
@property(readonly) unsigned long long hash;
@property(getter=isInlineWithText,readonly) bool inlineWithText;
@property(readonly) NSString * instructionalText;
@property(readonly) bool isTextBox;
@property bool matchesObjectPlaceholderGeometry;
@property TSPObject<TSDOwningAttachment> * owningAttachment;
@property(readonly) TSPObject<TSDOwningAttachment> * owningAttachmentNoRecurse;
@property(retain) TSWPPadding * padding;
@property NSObject<TSDContainerInfo> * parentInfo;
@property bool shrinkTextToFit;
@property(readonly) Class superclass;
@property bool textIsVertical;
@property(readonly) TSWPShapeStyle * tswpShapeStyle;
@property int verticalAlignment;

+ (unsigned long long)numberOfDifferencesBetweenStyleProperties:(id)arg1 betweenOutgoingStorage:(id)arg2 outgoingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 incomingStorage:(id)arg4 incomingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 maxDifferencesBeforeReturning:(unsigned long long)arg6;
+ (void)setDefaultInstructionalText:(id)arg1;
+ (bool)shouldDisableTextMorphsFromPropertiesBetweenOutgoingStorage:(id)arg1 outgoingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 incomingStorage:(id)arg3 incomingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
+ (bool)stylesAreEqualWithOutgoingStorage:(id)arg1 outgoingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 incomingStorage:(id)arg3 incomingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
+ (id)textPropertiesAffectingTextMorph;
+ (id)textPropertiesAffectingVisualStyle;
+ (id)textPropertiesAffectingVisualStyleExceptSize;
+ (id)textPropertiesNeedingCharacterAnimation;
+ (id)textPropertiesNotAffectingVisualStyle;

- (void)acceptVisitor:(id)arg1;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (bool)autoListRecognition;
- (bool)autoListTermination;
- (struct CGPoint { double x1; double x2; })autosizePositionOffset;
- (struct CGPoint { double x1; double x2; })autosizePositionOffsetForGeometry:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })autosizedTransformForInfoGeometry:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)childEnumerator;
- (id)childInfos;
- (unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)arg1 byGlyphStyle:(int)arg2 animationFilter:(id)arg3;
- (int)columnDirection;
- (id)columns;
- (id)commandForPasteStyleWithContext:(id)arg1 pasteboardStyles:(id)arg2;
- (id)commandForTransformingByTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (id)containedStorage;
- (id)containedText;
- (id)containedTextForDeliveryStyle:(unsigned long long)arg1 chunkIndex:(unsigned long long)arg2;
- (id)containedTextForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (long long)contentWritingDirection;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)defaultBuildChunkTitle;
- (bool)displaysInstructionalText;
- (void)fixPositionOfImportedAutosizedShape;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4 wpStorage:(id)arg5;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 wpStorage:(id)arg4;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (id)instructionalText;
- (bool)isBulleted;
- (bool)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (bool)isTextBox;
- (Class)layoutClass;
- (void)loadFromArchive:(const struct ShapeInfoArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct ShapeArchive {} *x3; struct Reference {} *x4; int x5; unsigned int x6[1]; }*)arg1 unarchiver:(id)arg2;
- (id)localizedChunkNameForTextureDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2 chunkIndex:(unsigned long long)arg3;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (double)pOffsetForParagraphAlignment:(struct CGSize { double x1; double x2; })arg1;
- (double)pOffsetForVerticalAlignment:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)p_chunkCountForByBullet;
- (unsigned long long)p_chunkCountForByBulletGroup;
- (id)p_chunkTitleByRemovingAdditionalLinesFromTitle:(id)arg1;
- (bool)p_hasContentForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)p_hasListLabelOrContentForParagraphIndex:(unsigned long long)arg1;
- (id)padding;
- (id)presetKind;
- (void)processSelectedStoragesWithStatisticsController:(id)arg1;
- (id)propertyMapForNewPreset;
- (Class)repClass;
- (void)saveToArchive:(struct ShapeInfoArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct ShapeArchive {} *x3; struct Reference {} *x4; int x5; unsigned int x6[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setColumns:(id)arg1;
- (void)setContainedStorage:(id)arg1;
- (void)setContentWritingDirection:(long long)arg1;
- (void)setPadding:(id)arg1;
- (void)setShrinkTextToFit:(bool)arg1;
- (void)setTextIsVertical:(bool)arg1;
- (void)setVerticalAlignment:(int)arg1;
- (bool)shouldHideEmptyBullets;
- (bool)shrinkTextToFit;
- (Class)styleClass;
- (id)styleIdentifierTemplateForNewPreset;
- (id)stylesForCopyStyle;
- (bool)supportsShrinkTextToFit;
- (bool)supportsTextInset;
- (bool)textIsVertical;
- (id)textureDeliveryStylesLocalized:(bool)arg1 animationFilter:(id)arg2;
- (struct CGPoint { double x1; double x2; })transformableObjectAnchorPoint;
- (id)tswpShapeStyle;
- (int)verticalAlignment;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end
