/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSError, NSManagedObjectContext, NSMutableDictionary, NSMutableSet, NSObject<_PFUbiquityRecordImportOperationDelegate>, NSPersistentStoreCoordinator, NSString, PFUbiquityImportContext, PFUbiquityKnowledgeVector, PFUbiquitySwitchboardEntry, PFUbiquityTransactionLog;

@interface _PFUbiquityRecordImportOperation : PFUbiquityImportOperation <NSManagedObjectContextFaultingDelegate> {
    NSMutableSet *_deletedObjectIDs;
    PFUbiquitySwitchboardEntry *_entry;
    PFUbiquityImportContext *_importContext;
    int _inMemorySequenceNumber;
    PFUbiquityKnowledgeVector *_initialStoreKnowledgeVector;
    NSMutableSet *_insertedObjectIDs;
    PFUbiquityKnowledgeVector *_logScore;
    NSManagedObjectContext *_moc;
    NSError *_operationError;
    NSPersistentStoreCoordinator *_psc;
    NSMutableDictionary *_relationshipsToObjectIDsToCheck;
    NSMutableDictionary *_resolvedConflicts;
    PFUbiquityTransactionLog *_transactionLog;
    NSMutableSet *_updatedObjectIDs;
    PFUbiquityKnowledgeVector *_updatedStoreKnowledgeVector;
    bool_lockedExistingCoord;
    bool_success;
    bool_transactionDidRollback;
    bool_wroteKV;
}

@property(copy,readonly) NSString * debugDescription;
@property NSObject<_PFUbiquityRecordImportOperationDelegate> * delegate;
@property(readonly) NSMutableSet * deletedObjectIDs;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) PFUbiquityImportContext * importContext;
@property(readonly) PFUbiquityKnowledgeVector * initialStoreKnowledgeVector;
@property(readonly) NSMutableSet * insertedObjectIDs;
@property bool lockedExistingCoord;
@property(retain) PFUbiquityKnowledgeVector * logScore;
@property(readonly) NSManagedObjectContext * moc;
@property(readonly) NSError * operationError;
@property(readonly) NSPersistentStoreCoordinator * psc;
@property(readonly) NSMutableDictionary * resolvedConflicts;
@property(readonly) bool success;
@property(readonly) Class superclass;
@property(readonly) bool transactionDidRollBack;
@property(readonly) PFUbiquityTransactionLog * transactionLog;
@property(readonly) NSMutableSet * updatedObjectIDs;
@property(retain) PFUbiquityKnowledgeVector * updatedStoreKnowledgeVector;
@property(readonly) bool wroteKV;

- (bool)applyChangesFromStoreSaveSnapshot:(id)arg1 withImportContext:(id)arg2 withError:(id*)arg3;
- (void)cancel;
- (long long)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4;
- (id)copy;
- (void)dealloc;
- (id)delegate;
- (id)deletedObjectIDs;
- (id)description;
- (bool)fillManagedObject:(id)arg1 withGlobalID:(id)arg2 fromUbiquityDictionary:(id)arg3 missingObjects:(id)arg4 importContext:(id)arg5 withError:(id*)arg6;
- (id)importContext;
- (id)init;
- (id)initWithTransactionLog:(id)arg1 persistentStore:(id)arg2 andLocalPeerID:(id)arg3;
- (id)initialStoreKnowledgeVector;
- (id)insertedObjectIDs;
- (bool)lockedExistingCoord;
- (id)logScore;
- (void)main;
- (id)moc;
- (void)notifyDelegateOfError:(id)arg1;
- (id)operationError;
- (bool)processObjects:(id)arg1 withState:(int)arg2 andImportContext:(id)arg3 outError:(id*)arg4;
- (id)psc;
- (id)resolvedConflicts;
- (void)respondToStoreTransactionStateChangeNotification:(id)arg1;
- (id)retainedDelegate;
- (void)setDelegate:(id)arg1;
- (void)setImportContext:(id)arg1;
- (void)setLockedExistingCoord:(bool)arg1;
- (void)setLogScore:(id)arg1;
- (void)setUpdatedStoreKnowledgeVector:(id)arg1;
- (bool)success;
- (bool)transactionDidRollBack;
- (id)transactionLog;
- (id)updatedObjectIDs;
- (id)updatedStoreKnowledgeVector;
- (bool)wroteKV;

@end
