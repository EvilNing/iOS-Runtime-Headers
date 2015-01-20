/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class BRCAccountSession, BRCServerPersistedState, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSURL, PQLConnection;

@interface BRCDatabaseManager : NSObject {
    NSMutableDictionary *_clientState;
    PQLConnection *_clientTruthConnection;
    BRCServerPersistedState *_serverState;
    PQLConnection *_serverTruthConnection;
    BRCAccountSession *_session;
    NSURL *_url;
    NSObject<OS_dispatch_source> *_watcher;
    NSObject<OS_dispatch_queue> *_watcherQueue;
}

@property(readonly) NSMutableDictionary * clientState;
@property(readonly) PQLConnection * clientTruthConnection;
@property(readonly) BRCServerPersistedState * serverState;
@property(readonly) PQLConnection * serverTruthConnection;

- (void).cxx_destruct;
- (bool)_attachDatabase:(id)arg1 toConnection:(id)arg2 error:(id*)arg3;
- (bool)_checkIntegrity:(id)arg1 serverTruth:(bool)arg2 error:(id*)arg3;
- (bool)_dumpContainer:(id)arg1 toContext:(id)arg2 error:(id*)arg3;
- (bool)_openClientTruthConnectionWithError:(id*)arg1;
- (bool)_openServerTruthConnectionWithError:(id*)arg1;
- (void)_registerLastBootIfNeeded:(id)arg1 table:(struct NSObject { Class x1; }*)arg2;
- (bool)_setupBackupDetector:(struct backup_detector { unsigned long long x1; unsigned long long x2; unsigned long long x3; }*)arg1 error:(id*)arg2;
- (bool)_setupConnection:(id)arg1 databaseName:(id)arg2 error:(id*)arg3;
- (void)_startWatcher;
- (bool)_stepBackupDetector:(struct backup_detector { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 newState:(struct backup_detector { unsigned long long x1; unsigned long long x2; unsigned long long x3; }*)arg2 error:(id*)arg3;
- (bool)backupDatabaseToURL:(id)arg1 error:(id*)arg2;
- (id)clientState;
- (id)clientTruthConnection;
- (bool)closeWithError:(id*)arg1;
- (void)dealloc;
- (bool)dumpDatabaseToFileHandle:(id)arg1 containerID:(id)arg2 error:(id*)arg3;
- (id)initWithAccountSession:(id)arg1;
- (id)newConnection:(id)arg1;
- (id)newConnectionWithLabel:(id)arg1 error:(id*)arg2;
- (bool)openAtURL:(id)arg1 error:(id*)arg2;
- (id)serverState;
- (id)serverTruthConnection;
- (void)setupForDumpingDatabaseAtURL:(id)arg1;
- (void)stopWatcher;
- (bool)validateDatabase:(id)arg1 serverTruth:(bool)arg2 error:(id*)arg3;

@end
