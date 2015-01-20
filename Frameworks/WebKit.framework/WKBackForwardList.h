/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, NSString, WKBackForwardListItem;

@interface WKBackForwardList : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebBackForwardList> { 
        struct type { 
            unsigned char __lx[56]; 
        } data; 
    } _list;
}

@property(readonly) struct Object { int (**x1)(); id x2; }* _apiObject;
@property(readonly) WKBackForwardListItem * backItem;
@property(copy,readonly) NSArray * backList;
@property(readonly) WKBackForwardListItem * currentItem;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) WKBackForwardListItem * forwardItem;
@property(copy,readonly) NSArray * forwardList;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (struct Object { int (**x1)(); id x2; }*)_apiObject;
- (id).cxx_construct;
- (void)_clear;
- (void)_removeAllItems;
- (id)backItem;
- (id)backList;
- (id)currentItem;
- (void)dealloc;
- (id)forwardItem;
- (id)forwardList;
- (id)itemAtIndex:(long long)arg1;

@end
