/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardTouchEvent : NSObject <NSSecureCoding> {
    struct CGPoint { 
        double x; 
        double y; 
    long long _forcedKeyCode;
    } _location;
    long long _pathIndex;
    double _radius;
    int _stage;
    double _timestamp;
}

@property(readonly) long long forcedKeyCode;
@property(readonly) struct CGPoint { double x1; double x2; } location;
@property(readonly) long long pathIndex;
@property(readonly) double radius;
@property(readonly) int stage;
@property(readonly) double timestamp;

+ (bool)supportsSecureCoding;
+ (id)touchEventWithStage:(int)arg1 location:(struct CGPoint { double x1; double x2; })arg2 radius:(double)arg3 timestamp:(double)arg4 pathIndex:(long long)arg5 forcedKeyCode:(long long)arg6;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)forcedKeyCode;
- (id)initWithCoder:(id)arg1;
- (id)initWithStage:(int)arg1 location:(struct CGPoint { double x1; double x2; })arg2 radius:(double)arg3 timestamp:(double)arg4 pathIndex:(long long)arg5 forcedKeyCode:(long long)arg6;
- (struct CGPoint { double x1; double x2; })location;
- (long long)pathIndex;
- (double)radius;
- (int)stage;
- (double)timestamp;

@end
