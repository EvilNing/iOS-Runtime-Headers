/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@class NSArray;

@interface AXEventHandInfoRepresentation : NSObject <NSSecureCoding, NSCopying> {
    struct CGPoint { 
        double x; 
        double y; 
    unsigned short _currentFingerCount;
    unsigned int _eventType;
    unsigned int _handEventMask;
    unsigned int _handIdentity;
    unsigned int _handIndex;
    } _handPosition;
    unsigned short _initialFingerCount;
    NSArray *_paths;
    unsigned char _swipe;
    unsigned char _systemGesturePossible;
}

@property unsigned short currentFingerCount;
@property unsigned int eventType;
@property unsigned int handEventMask;
@property unsigned int handIdentity;
@property unsigned int handIndex;
@property struct CGPoint { double x1; double x2; } handPosition;
@property unsigned short initialFingerCount;
@property(retain) NSArray * paths;
@property unsigned char swipe;
@property unsigned char systemGesturePossible;

+ (id)representationWithHandInfo:(struct { int x1; unsigned short x2; unsigned short x3; float x4; float x5; float x6; float x7; float x8; float x9; unsigned char x10; unsigned char x11; unsigned char x12; struct { unsigned char x_13_1_1; unsigned char x_13_1_2; unsigned char x_13_1_3; float x_13_1_4; float x_13_1_5; struct CGPoint { double x_6_2_1; double x_6_2_2; } x_13_1_6; unsigned int x_13_1_7; void *x_13_1_8; } x13[0]; }*)arg1;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned short)currentFingerCount;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)eventType;
- (unsigned int)handEventMask;
- (unsigned int)handIdentity;
- (unsigned int)handIndex;
- (struct CGPoint { double x1; double x2; })handPosition;
- (id)initWithCoder:(id)arg1;
- (unsigned short)initialFingerCount;
- (unsigned long long)length;
- (id)paths;
- (void)setCurrentFingerCount:(unsigned short)arg1;
- (void)setEventType:(unsigned int)arg1;
- (void)setHandEventMask:(unsigned int)arg1;
- (void)setHandIdentity:(unsigned int)arg1;
- (void)setHandIndex:(unsigned int)arg1;
- (void)setHandPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInitialFingerCount:(unsigned short)arg1;
- (void)setPaths:(id)arg1;
- (void)setSwipe:(unsigned char)arg1;
- (void)setSystemGesturePossible:(unsigned char)arg1;
- (unsigned char)swipe;
- (unsigned char)systemGesturePossible;
- (void)writeToHandInfo:(struct { int x1; unsigned short x2; unsigned short x3; float x4; float x5; float x6; float x7; float x8; float x9; unsigned char x10; unsigned char x11; unsigned char x12; struct { unsigned char x_13_1_1; unsigned char x_13_1_2; unsigned char x_13_1_3; float x_13_1_4; float x_13_1_5; struct CGPoint { double x_6_2_1; double x_6_2_2; } x_13_1_6; unsigned int x_13_1_7; void *x_13_1_8; } x13[0]; }*)arg1;

@end
