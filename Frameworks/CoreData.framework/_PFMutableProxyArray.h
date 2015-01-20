/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableArray, _PFArray;

@interface _PFMutableProxyArray : NSMutableArray {
    int _cd_rc;
    unsigned int _editCount;
    struct __CFArray { } *_indicesVeneer;
    unsigned int _limit;
    unsigned int _offset;
    _PFArray *_originalArray;
    NSMutableArray *_updatedObjectsArray;
}

- (bool)_isDeallocating;
- (void)_rehash;
- (bool)_tryRetain;
- (void)addObject:(id)arg1;
- (id)arrayFromObjectIDs;
- (unsigned long long)count;
- (void)dealloc;
- (void)finalize;
- (unsigned long long)indexOfManagedObjectForObjectID:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)indexOfObject:(id)arg1;
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1;
- (id)initWithPFArray:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithPFArray:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)managedObjectIDAtIndex:(unsigned long long)arg1;
- (id)newArrayFromObjectIDs;
- (id)objectAtIndex:(unsigned long long)arg1;
- (oneway void)release;
- (void)removeLastObject;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (id)retain;
- (unsigned long long)retainCount;
- (id)subarrayWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
