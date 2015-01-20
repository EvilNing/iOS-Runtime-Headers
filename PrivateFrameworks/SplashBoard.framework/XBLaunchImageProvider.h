/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface XBLaunchImageProvider : NSObject {
    NSMutableDictionary *_clients;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(retain) NSMutableDictionary * clients;

+ (void*)createIOSurfaceWithContextIds:(const unsigned int*)arg1 count:(unsigned long long)arg2 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 scale:(double)arg4 orientation:(long long)arg5 outTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg6;
+ (id)sharedInstance;

- (id)_clientForApplicationWithBundleID:(id)arg1;
- (void)captureLaunchImageApplicationWithCompatibilityInfo:(id)arg1 launchRequests:(id)arg2 firstImageIsReady:(id)arg3;
- (id)clients;
- (void)dealloc;
- (id)init;
- (void)launchImageViewDidGetRemovedFromViewHierarchy:(id)arg1 forApplicationWithBundleID:(id)arg2;
- (id)launchImageViewForApplicationWithCompatibilityInfo:(id)arg1 launchRequest:(id)arg2;
- (void)setClients:(id)arg1;

@end
