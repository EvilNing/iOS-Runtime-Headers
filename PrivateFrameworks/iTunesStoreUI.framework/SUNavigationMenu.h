/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSArray, NSString;

@interface SUNavigationMenu : NSObject <NSCopying> {
    NSString *_cancelTitle;
    NSString *_closedTitle;
    long long _initialSelectedIndex;
    long long _location;
    NSArray *_menuItems;
    NSArray *_navigationButtons;
    NSString *_openTitle;
}

@property(readonly) NSString * cancelTitle;
@property(readonly) NSString * closedTitle;
@property(readonly) long long initialSelectedIndex;
@property long long location;
@property(readonly) NSArray * menuItems;
@property(readonly) NSArray * navigationButtons;
@property(readonly) NSString * openTitle;

- (void)_loadFromDictionary:(id)arg1;
- (long long)_locationForString:(id)arg1;
- (id)_newMenuItemsFromArray:(id)arg1;
- (id)_newNavigationButtonsFromArray:(id)arg1;
- (id)cancelTitle;
- (id)closedTitle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (long long)initialSelectedIndex;
- (long long)location;
- (id)menuItems;
- (id)navigationButtonForLocation:(id)arg1;
- (id)navigationButtons;
- (id)openTitle;
- (void)setLocation:(long long)arg1;

@end
