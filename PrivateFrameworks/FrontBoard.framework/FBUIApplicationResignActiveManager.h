/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@class NSCountedSet, NSHashTable, NSMutableSet, NSString;

@interface FBUIApplicationResignActiveManager : NSObject <FBSceneManagerObserver, FBProcessManagerObserver> {
    NSHashTable *_activeAssertions;
    NSCountedSet *_activeReasons;
    NSMutableSet *_eligibleProcesses;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (id)sharedInstance;

- (void)_addDeactivationReason:(long long)arg1;
- (bool)_areEligibleSceneSettings:(id)arg1 forProcess:(id)arg2;
- (bool)_isEligibleDisplay:(id)arg1;
- (bool)_isEligibleProcess:(id)arg1;
- (bool)_isEligibleScene:(id)arg1 forSettings:(id)arg2;
- (bool)_isEligibleScene:(id)arg1;
- (void)_noteSceneWillUpdate:(id)arg1 oldSettings:(id)arg2 newSettings:(id)arg3;
- (void)_removeDeactivationReason:(long long)arg1;
- (void)_sendResignActiveForReason:(long long)arg1 toProcess:(id)arg2;
- (void)_sendResignActiveForReason:(long long)arg1;
- (void)_sendResignActiveToProcess:(id)arg1;
- (void)_sendResumeActiveForReason:(long long)arg1 toProcess:(id)arg2;
- (void)_sendResumeActiveForReason:(long long)arg1;
- (void)_sendResumeActiveToProcess:(id)arg1;
- (void)_trackProcess:(id)arg1;
- (void)_untrackProcess:(id)arg1;
- (void)addAssertion:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)processManager:(id)arg1 didAddProcess:(id)arg2;
- (void)processManager:(id)arg1 didRemoveProcess:(id)arg2;
- (void)removeAssertion:(id)arg1;
- (void)sceneManager:(id)arg1 didCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3;
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2 withClient:(id)arg3;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 willCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3;
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 willUpdateScene:(id)arg2 withSettings:(id)arg3 transitionContext:(id)arg4;

@end
