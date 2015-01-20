/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class <GKStateMachineDelegate>, NSDictionary, NSString;

@interface GKStateMachine : NSObject {
    NSString *_currentState;
    <GKStateMachineDelegate> *_delegate;
    int _lock;
    NSDictionary *_validTransitions;
    bool_shouldLogStateTransitions;
}

@property(retain) NSString * currentState;
@property <GKStateMachineDelegate> * delegate;
@property bool shouldLogStateTransitions;
@property(retain) NSDictionary * validTransitions;

- (void)_performTransitionFromState:(id)arg1 toState:(id)arg2;
- (bool)_setCurrentState:(id)arg1;
- (id)_validateTransitionFromState:(id)arg1 toState:(id)arg2;
- (bool)applyState:(id)arg1;
- (id)currentState;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)missingTransitionFromState:(id)arg1 toState:(id)arg2;
- (void)setCurrentState:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShouldLogStateTransitions:(bool)arg1;
- (void)setValidTransitions:(id)arg1;
- (bool)shouldLogStateTransitions;
- (id)validTransitions;

@end
