/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@class NSMutableArray, SKNode;

@interface SKReach : SKAction {
    struct CGPoint { 
        double x; 
        double y; 
    } _goalPosition;
    NSMutableArray *_ikChain;
    SKNode *_ikRoot;
    double _velocity;
    double _zRotationSpeed;
    bool_timeConstrained;
}

+ (id)reachTo:(struct CGPoint { double x1; double x2; })arg1 rootNode:(id)arg2 duration:(double)arg3 maxZRotationSpeed:(double)arg4;
+ (id)reachTo:(struct CGPoint { double x1; double x2; })arg1 rootNode:(id)arg2 duration:(double)arg3;
+ (id)reachTo:(struct CGPoint { double x1; double x2; })arg1 rootNode:(id)arg2 velocity:(double)arg3;
+ (id)reachTo:(struct CGPoint { double x1; double x2; })arg1 rootNode:(id)arg2 zRotationSpeed:(double)arg3 maxDuration:(double)arg4;
+ (id)reachToNode:(id)arg1 rootNode:(id)arg2 duration:(double)arg3;
+ (id)reachToNode:(id)arg1 rootNode:(id)arg2 velocity:(double)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)solveIKWithTarget:(id)arg1;
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;
- (void)willStartWithTarget:(id)arg1 atTime:(double)arg2;

@end
