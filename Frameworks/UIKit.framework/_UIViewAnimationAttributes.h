/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIViewAnimationAttributes : NSObject <NSSecureCoding> {
    long long _curve;
    double _delay;
    double _duration;
    unsigned long long _options;
}

@property(getter=_curve,readonly) long long curve;
@property(getter=_delay,readonly) double delay;
@property(getter=_duration,readonly) double duration;

+ (bool)supportsSecureCoding;

- (long long)_curve;
- (double)_delay;
- (double)_duration;
- (long long)curve;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
