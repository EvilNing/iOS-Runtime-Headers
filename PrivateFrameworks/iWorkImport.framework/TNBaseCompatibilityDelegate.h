/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString;

@interface TNBaseCompatibilityDelegate : NSObject <TSKCompatibilityDelegate> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (id)backwardsCompatibleTypeForType:(id)arg1;
- (Class)exportOptionsControllerClass;
- (id)exportableTypes;
- (Class)exporterClassForType:(id)arg1 options:(id)arg2;
- (Class)importerClassForType:(id)arg1;
- (id)indexXmlFilename;
- (bool)isSageDocumentType:(id)arg1;
- (bool)isTCMessageExceptionErrorDomain:(id)arg1;
- (id)needNewerVersionIndexXmlContentString;
- (id)nestedDocumentFilename;
- (id)newExportableDocumentTypesForFlag:(unsigned long long)arg1;

@end
