/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

@class NSError, NSHashTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection, NSXPCListenerEndpoint;

@interface ATSession : NSObject <ATSessionConnection, NSSecureCoding> {
    NSXPCConnection *_connection;
    NSXPCListenerEndpoint *_endpoint;
    NSError *_error;
    double _finishTime;
    NSObject<OS_dispatch_group> *_group;
    NSString *_localizedDescription;
    NSHashTable *_observers;
    NSMutableSet *_observing;
    double _progress;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_sessionIdentifier;
    NSMutableArray *_sessionTasks;
    NSMutableDictionary *_sessionTasksByIdentifier;
    NSString *_sessionTypeIdentifier;
    double _startTime;
    bool_cancelled;
    bool_finished;
    bool_running;
    bool_suspended;
}

@property(getter=isCancelled) bool cancelled;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) double duration;
@property(retain) NSXPCListenerEndpoint * endpoint;
@property(copy) NSError * error;
@property(getter=isFinished) bool finished;
@property(readonly) unsigned long long hash;
@property(retain) NSString * localizedDescription;
@property double progress;
@property(getter=isRunning) bool running;
@property(retain) NSString * sessionIdentifier;
@property(retain) NSString * sessionTypeIdentifier;
@property(readonly) Class superclass;
@property(getter=isSuspended) bool suspended;

+ (id)_remoteSessionsWithTypeIdentifier:(id)arg1;
+ (id)allSessions;
+ (void)initialize;
+ (id)sessionsWithSessionTypeIdentifier:(id)arg1;
+ (void)setSessionHost:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_beginTasks:(id)arg1;
- (void)_finishWithError:(id)arg1;
- (id)_keysToObserve;
- (void)_observeKeysForTask:(id)arg1;
- (void)_performSelectorOnObservers:(SEL)arg1 object:(id)arg2 object:(id)arg3;
- (void)_performSelectorOnObservers:(SEL)arg1 object:(id)arg2;
- (void)_stopObservingKeysForTask:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)addSessionTasks:(id)arg1;
- (void)beginSessionTask:(id)arg1;
- (void)cancel;
- (id)debugDescription;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)endpoint;
- (id)error;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionTypeIdentifier:(id)arg1;
- (bool)isCancelled;
- (bool)isFinished;
- (bool)isRunning;
- (bool)isSuspended;
- (id)localizedDescription;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (double)progress;
- (void)removeObserver:(id)arg1;
- (id)sessionIdentifier;
- (id)sessionTasks;
- (id)sessionTasksWithGroupingKey:(id)arg1;
- (id)sessionTypeIdentifier;
- (void)setCancelled:(bool)arg1;
- (void)setEndpoint:(id)arg1;
- (void)setError:(id)arg1;
- (void)setFinished:(bool)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setRunning:(bool)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)setSessionTypeIdentifier:(id)arg1;
- (void)setSuspended:(bool)arg1;
- (void)start;
- (void)updateSessionTask:(id)arg1;
- (void)waitToFinish;

@end
