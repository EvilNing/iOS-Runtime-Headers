/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSData, NSProgress, NSString, NSURL, NSUUID, SFUCryptoKey, TSPDocumentProperties, TSPDocumentRevision, TSPObject, TSPPackageWriter;

@interface TSPDocumentSaveOperationState : TSPSaveOperationState {
    NSURL *_URL;
    TSPObject *_documentObject;
    TSPPackageWriter *_documentPackageWriter;
    NSString *_documentPasswordHint;
    TSPDocumentProperties *_documentProperties;
    TSPDocumentRevision *_documentRevision;
    NSUUID *_documentUUID;
    SFUCryptoKey *_encryptionKey;
    NSURL *_originalSupportURL;
    long long _packageType;
    NSData *_passwordVerifier;
    NSProgress *_progress;
    NSURL *_relativeURLForExternalData;
    unsigned long long _saveToken;
    TSPObject *_supportObject;
    TSPPackageWriter *_supportPackageWriter;
    bool_didEndWriteOperation;
    bool_shouldLeavePendingEndSave;
}

@property(readonly) NSURL * URL;
@property bool didEndWriteOperation;
@property(retain) TSPObject * documentObject;
@property(retain) TSPPackageWriter * documentPackageWriter;
@property(copy) NSString * documentPasswordHint;
@property(retain) TSPDocumentProperties * documentProperties;
@property(retain) TSPDocumentRevision * documentRevision;
@property(copy) NSUUID * documentUUID;
@property(retain) SFUCryptoKey * encryptionKey;
@property(copy) NSURL * originalSupportURL;
@property(readonly) long long packageType;
@property(retain) NSData * passwordVerifier;
@property(retain) NSProgress * progress;
@property(copy) NSURL * relativeURLForExternalData;
@property unsigned long long saveToken;
@property bool shouldLeavePendingEndSave;
@property(retain) TSPObject * supportObject;
@property(retain) TSPPackageWriter * supportPackageWriter;

- (void).cxx_destruct;
- (id)URL;
- (bool)didEndWriteOperation;
- (id)documentObject;
- (id)documentPackageWriter;
- (id)documentPasswordHint;
- (id)documentProperties;
- (id)documentRevision;
- (id)documentUUID;
- (id)encryptionKey;
- (id)init;
- (id)initWithURL:(id)arg1 updateType:(long long)arg2 packageType:(long long)arg3;
- (id)originalSupportURL;
- (long long)packageType;
- (id)passwordVerifier;
- (id)progress;
- (id)relativeURLForExternalData;
- (unsigned long long)saveToken;
- (void)setDidEndWriteOperation:(bool)arg1;
- (void)setDocumentObject:(id)arg1;
- (void)setDocumentPackageWriter:(id)arg1;
- (void)setDocumentPasswordHint:(id)arg1;
- (void)setDocumentProperties:(id)arg1;
- (void)setDocumentRevision:(id)arg1;
- (void)setDocumentUUID:(id)arg1;
- (void)setEncryptionKey:(id)arg1;
- (void)setOriginalSupportURL:(id)arg1;
- (void)setPasswordVerifier:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setRelativeURLForExternalData:(id)arg1;
- (void)setSaveToken:(unsigned long long)arg1;
- (void)setShouldLeavePendingEndSave:(bool)arg1;
- (void)setSupportObject:(id)arg1;
- (void)setSupportPackageWriter:(id)arg1;
- (bool)shouldLeavePendingEndSave;
- (id)supportObject;
- (id)supportPackageWriter;

@end
