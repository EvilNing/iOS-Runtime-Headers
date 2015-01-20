/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSCondition, NSMutableArray, NSString, TNChartFormulaStorage, TNMutableChartFormulaStorage, TSCECalculationEngine, TSCEFormulaRewriteSpec, TSUIntToIntDictionary;

@interface TNChartMediator : TSCHChartMediator <TSCECalculationEngineRegistration, TSCEFormulaOwning> {
    boolmEditingHasIsPhantomOverride;
    boolmEditingIsPhantomOverride;
    boolmHasBlittedSinceConditionVarSet;
    boolmIsEditing;
    boolmIsRegisteredWithCalcEngine;
    boolmShouldFixAreaFormula;
    TNMutableChartFormulaStorage *mEditingAccumulatedFormulas;
    TNMutableChartFormulaStorage *mEditingActiveFormulas;
    TNChartFormulaStorage *mEditingStorageOverride;
    struct __CFUUID { } *mEntityId;
    TSUIntToIntDictionary *mFormulaIndexToGridIndex;
    TNChartFormulaStorage *mFormulaStorage;
    NSMutableArray *mFormulasToRecalculate;
    NSMutableArray *mFormulasToRewrite;
    NSCondition *mImportUpgradeCondition;
    TSCEFormulaRewriteSpec *mInFlightRewriteSpec;
    int mScatterFormat;
}

@property(readonly) TSCECalculationEngine * calculationEngine;
@property(readonly) bool categoryLabelFormulasAreAllStatic;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) int direction;
@property(readonly) struct __CFUUID { }* entityID;
@property(readonly) bool hasBlittedSinceConditionVarSet;
@property(readonly) unsigned long long hash;
@property bool isEditing;
@property(readonly) bool labelFormulasAreAllStatic;
@property(readonly) int scatterFormat;
@property(readonly) bool seriesLabelFormulasAreAllStatic;
@property(readonly) Class superclass;

+ (id)propertiesThatInvalidateMediator;

- (void)beginRewriteForCalculationEngine:(id)arg1 spec:(id)arg2;
- (id)calculationEngine;
- (id)categoryLabelFormulas;
- (bool)categoryLabelFormulasAreAllStatic;
- (void)clearEditingIsPhantomOverride;
- (id)columnFormulas;
- (id)commandSetCategoryName:(id)arg1 forCategoryIndex:(unsigned long long)arg2;
- (id)commandSetSeriesName:(id)arg1 forSeriesIndex:(unsigned long long)arg2;
- (id)commandToChangeCategoryLabelFormulas:(id)arg1;
- (id)commandToChangeLabelFormulas:(id)arg1 forType:(int)arg2;
- (id)commandToSetChartGridDirection:(int)arg1 documentRoot:(id)arg2;
- (id)commandToSetErrorBarCustomFormula:(id)arg1 seriesIndex:(unsigned long long)arg2 dataType:(int)arg3;
- (id)commandToSetNewSeriesIndex:(unsigned long long)arg1 forSeriesIndex:(unsigned long long)arg2;
- (id)commandToSetSeriesDataFormula:(id)arg1 seriesDimension:(id)arg2;
- (id)commandToSetSeriesNameFormula:(id)arg1 seriesIndex:(unsigned long long)arg2;
- (void)copyValuesIntoChartModelOutOfBandUsingCalcEngine:(id)arg1 formulaMap:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customNegFormulas;
- (id)customNegScatterXFormulas;
- (id)customPosFormulas;
- (id)customPosScatterXFormulas;
- (id)dataFormatterForAxis:(id)arg1 documentRoot:(id)arg2;
- (id)dataFormatterForSeries:(id)arg1 index:(unsigned long long)arg2 axisType:(int)arg3 documentRoot:(id)arg4;
- (id)dataFormulas;
- (void)dealloc;
- (int)direction;
- (id)endRewriteForCalculationEngine:(id)arg1 spec:(id)arg2;
- (struct __CFUUID { }*)entityID;
- (id)errorBarCustomFormulaForSeriesIndex:(unsigned long long)arg1 dataType:(int)arg2;
- (id)expandSingleRangeForProposedCategoryLabels:(struct { struct { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })arg1;
- (unsigned long long)formulaIndexForSeriesDimension:(id)arg1;
- (id)formulaStorage;
- (id)formulaStorageFromTable:(id)arg1 selection:(id)arg2 direction:(int)arg3;
- (int)formulasDirection;
- (bool)hasBlittedSinceConditionVarSet;
- (id)initFromArchive:(const struct ChartMediatorArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct ChartMediatorArchive {} *x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x4; struct ChartMediatorFormulaStorage {} *x5; boolx6; boolx7; int x8; unsigned int x9[1]; }*)arg1 unarchiver:(id)arg2;
- (id)initWithChartInfo:(id)arg1 withTable:(id)arg2 direction:(int)arg3;
- (id)initWithChartInfo:(id)arg1 withTable:(id)arg2 selection:(id)arg3 direction:(int)arg4;
- (id)initWithChartInfo:(id)arg1;
- (void)invalidateAndSynchronizeMediator;
- (void)invalidateForCalculationEngine:(id)arg1;
- (bool)isEditing;
- (bool)isPhantom;
- (bool)labelFormulasAreAllStatic;
- (bool)labelFormulasAreAllStaticInFormulaStorage:(id)arg1;
- (id)labelFormulasForType:(int)arg1;
- (void)localizeFormulaLiteralsWithBundle:(id)arg1;
- (id)objectToArchiveInDependencyTracker;
- (id)p_commandToSetSeriesNameFormulaWrapper:(id)arg1 seriesIndex:(unsigned long long)arg2;
- (void)p_copyValuesIntoChartModelFromPair:(id)arg1;
- (void)p_copyValuesIntoToChartModel:(id)arg1 formulaMap:(id)arg2;
- (void)p_detectAndRepairDeletedFormulas:(id)arg1 forRewriteSpec:(id)arg2;
- (void)p_detectAndRepairInsertedCategoryConditionFromPreviousState:(id)arg1 andEditingState:(id)arg2 forTectonicShift:(id)arg3;
- (void)p_detectAndRepairInsertedSeriesConditionFromPreviousState:(id)arg1 andEditingState:(id)arg2 forTectonicShift:(id)arg3;
- (void)p_disconnectLabelsInMap:(id)arg1 ofType:(int)arg2;
- (int)p_formulaTypeFromDataType:(int)arg1;
- (id)p_formulaWrapperFromTSTFormula:(id)arg1;
- (void)p_hackSetCalcEngineLegacyGlobalID;
- (bool)p_isScatterOrBubble;
- (unsigned long long)p_labelIndexForSeriesNameSeriesIndex:(unsigned long long)arg1;
- (bool)p_labelsAreStaticInMap:(id)arg1 ofType:(int)arg2;
- (id)p_newStaticNameForCategoryAvoidingExistingNames:(id)arg1 runningCount:(unsigned long long*)arg2;
- (void)p_registerAreaFormulaForMap:(id)arg1 withCalcEngine:(id)arg2;
- (void)p_registerFormulaeWithCalcEngine:(id)arg1;
- (void)p_registerHubFormulaWithCalcEngine:(id)arg1;
- (void)p_repairMissingCategoryLabelsInMap:(id)arg1;
- (void)p_repairMissingStaticCategoryLabelsInMap:(id)arg1;
- (void)p_repairMissingTabularCategoryLabelsIrregularInMap:(id)arg1;
- (void)p_repairMissingTabularCategoryLabelsRegularInMap:(id)arg1;
- (void)p_reregister:(bool)arg1 withCalculationEngine:(id)arg2;
- (bool)p_tableHasCell:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct __CFUUID {} *x2; })arg1 withCalcEngine:(id)arg2;
- (bool)p_tableHasRange:(struct { struct { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })arg1 withCalcEngine:(id)arg2;
- (bool)p_tabularCategoryLabelsAppearRegularInMap:(id)arg1;
- (void)p_transposeSeriesAndCategoryLabelsInMap:(id)arg1;
- (id)p_tstFormulaFromForumulaWrapper:(id)arg1;
- (void)p_unregisterAllFormulaeFromCalcEngine:(id)arg1;
- (id)p_untitledLabelWithIndex:(unsigned long long)arg1;
- (struct { boolx1; boolx2; })recalculateForCalculationEngine:(id)arg1 formulaID:(struct { unsigned int x1 : 24; unsigned int x2 : 8; })arg2 isInCycle:(bool)arg3 hasCalculatedPrecedents:(bool)arg4;
- (id)referencedEntities;
- (id)referencedEntitiesInMap:(id)arg1;
- (bool)registerLast;
- (void)registerWithCalculationEngineForDocumentLoad:(id)arg1;
- (void)releaseForCalculationEngine:(id)arg1;
- (void)repairMissingCategoryLabelsInMap:(id)arg1 ignoringNonVisibleLabels:(bool)arg2;
- (void)repairMissingCategoryLabelsInMap:(id)arg1;
- (void)repairMissingSeriesLabelsInMap:(id)arg1;
- (void)replaceReferencesInFormulas:(id)arg1 withOwnerIDMap:(id)arg2;
- (void)replaceReferencesInFormulasWithOwnerIDMap:(id)arg1;
- (void)retainForCalculationEngine:(id)arg1;
- (void)rewriteForCalculationEngine:(id)arg1 formulaID:(struct { unsigned int x1 : 24; unsigned int x2 : 8; })arg2 rewriteSpec:(id)arg3;
- (id)rowFormulas;
- (void)saveToArchive:(struct ChartMediatorArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct ChartMediatorArchive {} *x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x4; struct ChartMediatorFormulaStorage {} *x5; boolx6; boolx7; int x8; unsigned int x9[1]; }*)arg1 archiver:(id)arg2;
- (int)scatterFormat;
- (bool)serializeCalculations;
- (id)seriesDataFormulaForSeriesDimension:(id)arg1;
- (id)seriesDimensionForFormulaIndex:(unsigned long long)arg1;
- (bool)seriesLabelFormulasAreAllStatic;
- (id)seriesNameFormulaForSeriesIndex:(unsigned long long)arg1;
- (void)setEditingIsPhantomOverride:(bool)arg1;
- (void)setEditingStorageOverride:(id)arg1;
- (void)setFormulaStorage:(id)arg1 doRegistration:(bool)arg2;
- (void)setFormulaStorage:(id)arg1;
- (void)setImportUpgradeCondition:(id)arg1;
- (void)setIsEditing:(bool)arg1;
- (void)synchronizeModelFromFormulaStorage:(id)arg1;
- (void)synchronizeModelFromFormulaStorage;
- (void)unregisterFromCalculationEngine:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)writeResultsForCalculationEngine:(id)arg1;

@end
