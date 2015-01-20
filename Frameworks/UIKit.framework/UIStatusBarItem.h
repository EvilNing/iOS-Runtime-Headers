/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIStatusBarItem : NSObject {
    long long _idiom;
    int _type;
}

@property(readonly) NSString * indicatorName;
@property(readonly) int leftOrder;
@property(readonly) int priority;
@property(readonly) int rightOrder;
@property(readonly) int type;
@property(readonly) Class viewClass;

+ (bool)isItemWithTypeExclusive:(int)arg1;
+ (bool)itemType:(int)arg1 idiom:(long long)arg2 appearsInRegion:(int)arg3;
+ (bool)itemType:(int)arg1 idiom:(long long)arg2 canBeEnabledForData:(id)arg3 style:(id)arg4;
+ (id)itemWithType:(int)arg1 idiom:(long long)arg2;
+ (bool)typeIsValid:(int)arg1;

- (bool)appearsInRegion:(int)arg1;
- (bool)appearsOnLeft;
- (bool)appearsOnRight;
- (int)centerOrder;
- (long long)compareCenterOrder:(id)arg1;
- (long long)compareLeftOrder:(id)arg1;
- (long long)comparePriority:(id)arg1;
- (long long)compareRightOrder:(id)arg1;
- (id)description;
- (id)indicatorName;
- (id)initWithType:(int)arg1;
- (int)leftOrder;
- (int)priority;
- (int)rightOrder;
- (int)type;
- (Class)viewClass;

@end
