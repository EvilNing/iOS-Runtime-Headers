/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSString;

@interface PUKeyValueTableViewController : UITableViewController {
    id _completionHandler;
    NSArray *_keyValues;
    NSString *_markedKey;
}

@property(copy) id completionHandler;

- (void).cxx_destruct;
- (id)completionHandler;
- (id)initWithDictionary:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setCompletionHandler:(id)arg1;
- (void)setMarkedKey:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

@end
