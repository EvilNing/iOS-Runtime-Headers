/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class CXNamespace;

@interface CXNamespace : NSObject {
    struct _xmlDoc { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; int x10; int x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; int x20; struct _xmlDict {} *x21; void *x22; int x23; int x24; } *mDocument;
    struct _xmlNs { struct _xmlNs {} *x1; int x2; char *x3; char *x4; void *x5; struct _xmlDoc {} *x6; } *mDocumentNamespace;
    CXNamespace *mFallbackNamespace;
    const char *mUri;
}

@property(retain) CXNamespace * fallbackNamespace;

+ (void)clearRegisteredNamespaces;
+ (bool)isNamespaceSupported:(const char *)arg1;
+ (bool)isPrefixSupportedFromNodeContext:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 prefix:(const char *)arg2;
+ (bool)isPrefixSupportedFromStream:(struct _xmlTextReader { }*)arg1 prefix:(const char *)arg2;
+ (void)registerNamespace:(id)arg1;

- (bool)containsAttribute:(struct _xmlAttr { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlAttr {} *x7; struct _xmlAttr {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; int x11; void *x12; }*)arg1;
- (bool)containsNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1;
- (void)dealloc;
- (id)fallbackNamespace;
- (const char *)fallbackUri;
- (id)init;
- (id)initUnsupportedNsWithUri:(const char *)arg1;
- (id)initWithUri:(const char *)arg1 fallbackNamespace:(id)arg2;
- (id)initWithUri:(const char *)arg1;
- (void)setFallbackNamespace:(id)arg1;
- (const char *)uri;

@end
