/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@class CECInterface, NSDictionary, NSMutableSet, NSString;

@interface CECRouter : NSObject <CECInterfaceDelegate> {
    NSMutableSet *_interfaces;
    NSDictionary *_properties;
    CECInterface *_sinkInterface;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (id)routerWithSinkInterface:(id)arg1;

- (id)initWithSinkInterface:(id)arg1;
- (void)interface:(id)arg1 receivedFrame:(struct CECFrame { unsigned char x1[16]; unsigned int x2 : 5; unsigned int x3 : 3; })arg2;
- (bool)interface:(id)arg1 sendFrame:(struct CECFrame { unsigned char x1[16]; unsigned int x2 : 5; unsigned int x3 : 3; })arg2 withRetryCount:(unsigned char)arg3 error:(id*)arg4;
- (bool)interface:(id)arg1 setAddressMask:(unsigned short)arg2 error:(id*)arg3;
- (bool)interface:(id)arg1 setPromiscMode:(bool)arg2 error:(id*)arg3;
- (void)interfacePropertiesChanged:(id)arg1;
- (id)newRouterInterface;
- (id)properties;

@end
