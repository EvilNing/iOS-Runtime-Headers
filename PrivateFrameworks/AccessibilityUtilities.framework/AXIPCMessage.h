/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@class NSDictionary, NSString;

@interface AXIPCMessage : NSObject <NSSecureCoding> {
    struct { 
        unsigned int val[8]; 
    } _auditToken;
    unsigned int _clientPort;
    int _key;
    NSDictionary *_payload;
}

@property struct { unsigned int x1[8]; } auditToken;
@property unsigned int clientPort;
@property int key;
@property(retain) NSDictionary * payload;
@property(readonly) NSString * senderBundleId;

+ (id)archivedMessageFromData:(id)arg1;
+ (bool)supportsSecureCoding;

- (struct { unsigned int x1[8]; })auditToken;
- (unsigned int)clientPort;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(int)arg1 payload:(id)arg2 keyDebugInfo:(id)arg3;
- (id)initWithKey:(int)arg1 payload:(id)arg2;
- (id)initWithKey:(int)arg1;
- (int)key;
- (id)payload;
- (id)senderBundleId;
- (void)setAuditToken:(struct { unsigned int x1[8]; })arg1;
- (void)setClientPort:(unsigned int)arg1;
- (void)setKey:(int)arg1;
- (void)setPayload:(id)arg1;

@end
