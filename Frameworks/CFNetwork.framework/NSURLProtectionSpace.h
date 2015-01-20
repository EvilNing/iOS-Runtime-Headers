/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@class NSString, NSURLProtectionSpaceInternal;

@interface NSURLProtectionSpace : NSObject <NSSecureCoding, NSCopying> {
    NSURLProtectionSpaceInternal *_internal;
}

@property(copy,readonly) NSString * authenticationMethod;
@property(copy,readonly) NSString * host;
@property(readonly) bool isProxy;
@property(readonly) long long port;
@property(copy,readonly) NSString * protocol;
@property(copy,readonly) NSString * proxyType;
@property(copy,readonly) NSString * realm;
@property(readonly) bool receivesCredentialSecurely;

+ (id)safari_HTMLFormProtectionSpaceForURL:(id)arg1;
+ (bool)supportsSecureCoding;

- (struct _CFURLProtectionSpace { }*)_CFURLProtectionSpace;
- (struct _CFURLProtectionSpace { }*)_cfurlprtotectionspace;
- (id)_initWithCFURLProtectionSpace:(struct _CFURLProtectionSpace { }*)arg1;
- (id)_internalInit;
- (id)authenticationMethod;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)distinguishedNames;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)host;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithHost:(id)arg1 port:(long long)arg2 protocol:(id)arg3 realm:(id)arg4 authenticationMethod:(id)arg5;
- (id)initWithProxyHost:(id)arg1 port:(long long)arg2 type:(id)arg3 realm:(id)arg4 authenticationMethod:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isProxy;
- (long long)port;
- (id)protocol;
- (id)proxyType;
- (id)realm;
- (bool)receivesCredentialSecurely;
- (id)safari_URL;
- (id)safari_addressString;
- (bool)safari_allowsCredentialSaving;
- (id)safari_protectionSpaceByReplacingHostWithHighlevelDomain;
- (struct __SecTrust { }*)serverTrust;

@end
