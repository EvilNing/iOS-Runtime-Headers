/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

@class <AXElementFetcherDelegate>, AXElement, AXElementGroup, AXElementGroupPruner, AXVisualElementGrouper, NSArray, NSMapTable, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface AXElementFetcher : NSObject {
    unsigned long long _activeFetchEvents;
    struct __AXObserver { } *_axRuntimeNotificationObserver;
    AXElement *_currentApp;
    <AXElementFetcherDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_elementAccessQueue;
    NSArray *_elementCache;
    NSObject<OS_dispatch_queue> *_elementFetchQueue;
    AXElementGroupPruner *_elementGroupPruner;
    NSObject<OS_dispatch_source> *_eventCoalesceTimer;
    NSMapTable *_fetchObservers;
    long long _fetchPolicy;
    AXElementGroup *_keyboardGroupCache;
    NSMutableDictionary *_postFetchFilters;
    AXElementGroup *_rootGroupCache;
    unsigned long long _scheduledFetchEvent;
    AXVisualElementGrouper *_visualElementGrouper;
    bool_didSendFakeScreenChangeOnLastFetch;
    bool_enabled;
    bool_eventManagementEnabled;
    bool_fetchingElements;
    bool_groupingEnabled;
    bool_shouldUsePadInterfaceHeuristics;
}

@property unsigned long long activeFetchEvents;
@property(readonly) NSArray * availableElements;
@property(retain) AXElement * currentApp;
@property <AXElementFetcherDelegate> * delegate;
@property bool didSendFakeScreenChangeOnLastFetch;
@property(retain) NSArray * elementCache;
@property(retain) AXElementGroupPruner * elementGroupPruner;
@property(getter=isEnabled) bool enabled;
@property(getter=isEventManagementEnabled) bool eventManagementEnabled;
@property(retain) NSMapTable * fetchObservers;
@property long long fetchPolicy;
@property(getter=isFetchingElements) bool fetchingElements;
@property(readonly) AXElementGroup * firstKeyboardRow;
@property(getter=isGroupingEnabled) bool groupingEnabled;
@property(readonly) AXElementGroup * keyboardGroup;
@property(retain) AXElementGroup * keyboardGroupCache;
@property(readonly) AXElementGroup * lastKeyboardRow;
@property(retain) NSMutableDictionary * postFetchFilters;
@property(readonly) AXElementGroup * rootGroup;
@property(retain) AXElementGroup * rootGroupCache;
@property bool shouldUsePadInterfaceHeuristics;
@property(retain) AXVisualElementGrouper * visualElementGrouper;
@property(readonly) bool willFetchElements;

+ (id)_applicationForElement:(id)arg1;
+ (id)currentAppWithPositionHint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)springBoardElement;
+ (id)systemWideElement;

- (id)_axNotificationsForManagedEvents;
- (void)_debugLogElementCache;
- (id)_debugStringForFetchEvents:(unsigned long long)arg1;
- (id)_debugStringForPolicy:(long long)arg1;
- (double)_delayForFetchEvent:(unsigned long long)arg1;
- (bool)_fetchElements:(bool)arg1;
- (bool)_fetchEventCanBeManaged:(unsigned long long)arg1;
- (void)_fetchEventOccurred:(unsigned long long)arg1;
- (id)_fetchFirstElements;
- (bool)_fetchGroups:(bool)arg1;
- (id)_fetchVisibleElements;
- (id)_filterElements:(id)arg1 withFilter:(id)arg2;
- (id)_filterGroup:(id)arg1 withFilter:(id)arg2;
- (id)_findElementsMatchingBlock:(id)arg1 internalRequest:(bool)arg2;
- (id)_findGroupableMatchingBlock:(id)arg1 inElementGroup:(id)arg2;
- (id)_findGroupableMatchingGroupable:(id)arg1 inElementGroup:(id)arg2;
- (id)_groupWithDictionary:(id)arg1 currentPid:(int)arg2;
- (id)_groupWithItems:(id)arg1 groupTraits:(int)arg2 label:(id)arg3 currentPid:(int)arg4;
- (void)_notifyObserversDidFetchElementsForEvent:(unsigned long long)arg1 foundNewElements:(bool)arg2;
- (void)_notifyObserversDidScheduleFetchEvent:(unsigned long long)arg1;
- (void)_notifyObserversWillFetchElementsForEvent:(unsigned long long)arg1;
- (long long)_priorityForFetchEvent:(unsigned long long)arg1;
- (void)_scheduleFetchEvent:(unsigned long long)arg1;
- (void)_sendFakeScreenChangeIfNecessaryForGroup:(id)arg1 orElements:(id)arg2 appDidChange:(bool)arg3;
- (bool)_shouldConsiderCacheAsInvalid;
- (id)_siblingOfGroupable:(id)arg1 forDirection:(bool)arg2 didWrap:(bool*)arg3;
- (void)_tearDownEventCoalesceTimer;
- (bool)_updateCurrentApp;
- (unsigned long long)activeFetchEvents;
- (void)addFetchEvents:(unsigned long long)arg1;
- (void)addPostFetchFilter:(id)arg1 withIdentifier:(id)arg2;
- (id)availableElements;
- (id)closestElementToElement:(id)arg1;
- (id)closestElementToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)currentApp;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (bool)didSendFakeScreenChangeOnLastFetch;
- (void)disableEventManagement;
- (id)elementCache;
- (id)elementGroupPruner;
- (void)enableEventManagement;
- (void)fetchEventOccurred:(unsigned long long)arg1;
- (id)fetchObservers;
- (long long)fetchPolicy;
- (id)findElementMatchingBlock:(id)arg1;
- (id)findElementMatchingElement:(id)arg1;
- (id)findElementsMatchingBlock:(id)arg1;
- (id)findGroupableMatchingBlock:(id)arg1;
- (id)findGroupableMatchingGroupable:(id)arg1;
- (id)firstElement;
- (id)firstKeyboardRow;
- (id)initWithDelegate:(id)arg1 fetchEvents:(unsigned long long)arg2 fetchPolicy:(long long)arg3 enableEventManagement:(bool)arg4 enableGrouping:(bool)arg5 beginEnabled:(bool)arg6;
- (bool)isEnabled;
- (bool)isEventManagementEnabled;
- (bool)isFetchingElements;
- (bool)isGroupingEnabled;
- (id)keyboardGroup;
- (id)keyboardGroupCache;
- (id)lastElement;
- (id)lastKeyboardRow;
- (id)nextSiblingOfElement:(id)arg1 didWrap:(bool*)arg2;
- (id)nextSiblingOfGroupable:(id)arg1 didWrap:(bool*)arg2;
- (id)postFetchFilters;
- (id)previousSiblingOfElement:(id)arg1 didWrap:(bool*)arg2;
- (id)previousSiblingOfGroupable:(id)arg1 didWrap:(bool*)arg2;
- (void)refresh;
- (void)registerFetchObserver:(id)arg1 targetQueue:(id)arg2;
- (void)removeAllPostFetchFilters;
- (void)removeFetchEvents:(unsigned long long)arg1;
- (void)removePostFetchFilterWithIdentifier:(id)arg1;
- (id)rootGroup;
- (id)rootGroupCache;
- (void)setActiveFetchEvents:(unsigned long long)arg1;
- (void)setCurrentApp:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidSendFakeScreenChangeOnLastFetch:(bool)arg1;
- (void)setElementCache:(id)arg1;
- (void)setElementGroupPruner:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setEventManagementEnabled:(bool)arg1;
- (void)setFetchObservers:(id)arg1;
- (void)setFetchPolicy:(long long)arg1;
- (void)setFetchingElements:(bool)arg1;
- (void)setGroupingEnabled:(bool)arg1;
- (void)setKeyboardGroupCache:(id)arg1;
- (void)setPostFetchFilters:(id)arg1;
- (void)setRootGroupCache:(id)arg1;
- (void)setShouldUsePadInterfaceHeuristics:(bool)arg1;
- (void)setVisualElementGrouper:(id)arg1;
- (bool)shouldUsePadInterfaceHeuristics;
- (void)unregisterAllFetchObservers;
- (void)unregisterFetchObserver:(id)arg1;
- (void)updateKeyboardGroup:(id)arg1;
- (id)visualElementGrouper;
- (bool)willFetchElements;

@end
