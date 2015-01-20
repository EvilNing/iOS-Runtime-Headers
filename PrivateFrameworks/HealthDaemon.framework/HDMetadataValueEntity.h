/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDMetadataValueEntity : HDHealthEntity {
}

+ (bool)_deleteMetadataValuesWithObjectID:(id)arg1 database:(id)arg2 error:(id*)arg3;
+ (id)_insertMetadataValueWithKeyID:(id)arg1 objectID:(id)arg2 value:(id)arg3 database:(id)arg4 error:(id*)arg5;
+ (id)_predicateForEntityWithKeyID:(id)arg1;
+ (id)_predicateForEntityWithObjectID:(id)arg1;
+ (id)_propertySettersForResult;
+ (id)_resultsForPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (id)createTableSQL;
+ (id)databaseTable;
+ (id)insertMetadataValueWithKeyID:(id)arg1 objectID:(id)arg2 value:(id)arg3 healthDatabase:(id)arg4 error:(id*)arg5;
+ (void)load;
+ (long long)protectionClass;
+ (id)resultsForKeyID:(id)arg1 predicate:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4;
+ (id)resultsForObjectID:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;

- (id)_clientValueForProperty:(id)arg1 value:(id)arg2;
- (id)valueWithDatabase:(id)arg1;

@end
