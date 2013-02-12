/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKAchievementDescription, GKBackgroundView, GKFriendPickerListSection, GKFriendPickerSelectorSection, GKGame, GKReachability, NSDictionary, NSError, NSMutableDictionary, NSOrderedSet, NSSet, NSString;

@interface GKFriendPickerDataSource : GKSectionArrayDataSource {
    GKAchievementDescription *_achievementDescription;
    NSString *_achievementID;
    GKFriendPickerListSection *_alreadyEarnedSection;
    BOOL _browsingForNearbyPlayers;
    NSMutableDictionary *_cellStatusDict;
    unsigned int _context;
    NSOrderedSet *_friends;
    NSDictionary *_friendsDict;
    GKGame *_game;
    NSOrderedSet *_haveEarnedPlayerIDs;
    NSOrderedSet *_haveEarnedPlayers;
    NSString *_leaderboardID;
    GKFriendPickerListSection *_listSection;
    NSError *_loadError;
    NSMutableDictionary *_nearbyDict;
    NSOrderedSet *_nearbyPlayers;
    NSOrderedSet *_neverPlayedFriends;
    GKFriendPickerListSection *_neverPlayedSection;
    NSDictionary *_nonFriendsDict;
    NSOrderedSet *_playedFriends;
    NSOrderedSet *_playedPlayerIDs;
    NSDictionary *_ranksDict;
    GKReachability *_reachability;
    BOOL _reachable;
    NSOrderedSet *_recentPlayerIDs;
    NSOrderedSet *_recentPlayers;
    GKFriendPickerSelectorSection *_selectorSection;
    GKBackgroundView *_statusView;
    NSSet *_uninvitableFriends;
}

@property(retain) GKAchievementDescription * achievementDescription;
@property(retain) NSString * achievementID;
@property(retain) GKFriendPickerListSection * alreadyEarnedSection;
@property BOOL browsingForNearbyPlayers;
@property(retain) NSMutableDictionary * cellStatusDict;
@property unsigned int context;
@property(retain) NSOrderedSet * friends;
@property(retain) NSDictionary * friendsDict;
@property(retain) GKGame * game;
@property(retain) NSOrderedSet * haveEarnedPlayerIDs;
@property(retain) NSOrderedSet * haveEarnedPlayers;
@property(retain) NSString * leaderboardID;
@property(retain) GKFriendPickerListSection * listSection;
@property(retain) NSError * loadError;
@property(retain) NSMutableDictionary * nearbyDict;
@property(retain) NSOrderedSet * nearbyPlayers;
@property(retain) NSOrderedSet * neverPlayedFriends;
@property(retain) GKFriendPickerListSection * neverPlayedSection;
@property(retain) NSDictionary * nonFriendsDict;
@property(retain) NSOrderedSet * playedFriends;
@property(retain) NSOrderedSet * playedPlayerIDs;
@property(retain) NSDictionary * ranksDict;
@property(retain) GKReachability * reachability;
@property BOOL reachable;
@property(retain) NSOrderedSet * recentPlayerIDs;
@property(retain) NSOrderedSet * recentPlayers;
@property unsigned int scope;
@property(retain) GKFriendPickerSelectorSection * selectorSection;
@property BOOL showsNearbyPlayers;
@property(retain) GKBackgroundView * statusView;
@property(retain) NSSet * uninvitableFriends;

- (id)achievementDescription;
- (id)achievementID;
- (void)addNearbyPlayer:(id)arg1;
- (id)alreadyEarnedSection;
- (BOOL)browsingForNearbyPlayers;
- (id)cellStatusDict;
- (unsigned int)context;
- (void)dealloc;
- (id)friends;
- (id)friendsDict;
- (id)game;
- (id)haveEarnedPlayerIDs;
- (id)haveEarnedPlayers;
- (id)initWithController:(id)arg1;
- (id)leaderboardID;
- (id)listSection;
- (id)loadError;
- (id)nearbyDict;
- (id)nearbyPlayers;
- (id)neverPlayedFriends;
- (id)neverPlayedSection;
- (id)nonFriendsDict;
- (id)playedFriends;
- (id)playedPlayerIDs;
- (void)prepareSections;
- (id)ranksDict;
- (id)reachability;
- (void)reachabilityDidChange:(id)arg1;
- (BOOL)reachable;
- (id)recentPlayerIDs;
- (id)recentPlayers;
- (void)refreshDataWithCompletionHandlerAndError:(id)arg1;
- (unsigned int)scope;
- (id)selectedPlayers;
- (id)selectorSection;
- (void)setAchievementDescription:(id)arg1;
- (void)setAchievementID:(id)arg1;
- (void)setAlreadyEarnedSection:(id)arg1;
- (void)setBrowsingForNearbyPlayers:(BOOL)arg1;
- (void)setCellStatusDict:(id)arg1;
- (void)setContext:(unsigned int)arg1;
- (void)setFriends:(id)arg1;
- (void)setFriendsDict:(id)arg1;
- (void)setGame:(id)arg1;
- (void)setHaveEarnedPlayerIDs:(id)arg1;
- (void)setHaveEarnedPlayers:(id)arg1;
- (void)setLeaderboardID:(id)arg1;
- (void)setListSection:(id)arg1;
- (void)setLoadError:(id)arg1;
- (void)setNearbyDict:(id)arg1;
- (void)setNearbyPlayer:(id)arg1 reachable:(BOOL)arg2;
- (void)setNearbyPlayers:(id)arg1;
- (void)setNeverPlayedFriends:(id)arg1;
- (void)setNeverPlayedSection:(id)arg1;
- (void)setNonFriendsDict:(id)arg1;
- (void)setPlayedFriends:(id)arg1;
- (void)setPlayedPlayerIDs:(id)arg1;
- (void)setRanksDict:(id)arg1;
- (void)setReachability:(id)arg1;
- (void)setReachable:(BOOL)arg1;
- (void)setRecentPlayerIDs:(id)arg1;
- (void)setRecentPlayers:(id)arg1;
- (void)setScope:(unsigned int)arg1;
- (void)setSelectorSection:(id)arg1;
- (void)setShowsNearbyPlayers:(BOOL)arg1;
- (void)setStatusView:(id)arg1;
- (void)setUninvitableFriends:(id)arg1;
- (BOOL)showsNearbyPlayers;
- (id)statusView;
- (void)tableView:(id)arg1 updateStatusViewAfterLoading:(id)arg2 withError:(id)arg3;
- (void)tableView:(id)arg1 updateStatusViewBeforeLoading:(id)arg2;
- (id)uninvitableFriends;
- (void)updateListSectionForScope;
- (void)updateNearbyPlayers;
- (void)updatePlayedOrNotPlayers;
- (void)updateRecentPlayersWithCompletionHander:(id)arg1;
- (void)updateStatusView;

@end
