/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class _NSUndoObject;

@interface _NSUndoStack : NSObject {
    unsigned long long _count;
    _NSUndoObject *_head;
    unsigned long long _max;
    unsigned long long _nestingLevel;
}

- (id)_beginMark;
- (void)_removeBottom;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (id)groupIdentifier;
- (id)init;
- (bool)isDiscardable;
- (void)markBegin;
- (void)markEnd;
- (unsigned long long)max;
- (unsigned long long)nestingLevel;
- (bool)popAndInvoke;
- (id)popUndoObject;
- (void)push:(id)arg1;
- (void)removeAllObjects;
- (void)removeAllObjectsWithTarget:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)setDiscardable:(bool)arg1;
- (void)setGroupIdentifier:(id)arg1;
- (void)setMax:(unsigned long long)arg1;
- (id)topUndoObject;

@end
