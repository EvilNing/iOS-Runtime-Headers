/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSSet;

@interface WKRemoteObjectDecoder : NSCoder {
    struct RetainPtr<_WKRemoteObjectInterface> { 
        void *m_ptr; 
    NSSet *_allowedClasses;
    const struct ImmutableDictionary { int (**x1)(); id x2; struct HashMap<WTF::String, WTF::RefPtr<API::Object>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RefPtr<API::Object> > > { struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::RefPtr<API::Object> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::RefPtr<API::Object> > >, WTF::StringHash, WTF::HashMap<WTF::String, WTF::RefPtr<API::Object>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RefPtr<API::Object> > >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > { struct KeyValuePair<WTF::String, WTF::RefPtr<API::Object> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_3_1_1; } x3; } *_currentDictionary;
    } _interface;
    const struct Array { int (**x1)(); id x2; struct Vector<WTF::RefPtr<API::Object>, 0, WTF::CrashOnOverflow> { struct RefPtr<API::Object> {} *x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; } x3; } *_objectStream;
    unsigned long long _objectStreamPosition;
    const struct ImmutableDictionary { int (**x1)(); id x2; struct HashMap<WTF::String, WTF::RefPtr<API::Object>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RefPtr<API::Object> > > { struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::RefPtr<API::Object> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::RefPtr<API::Object> > >, WTF::StringHash, WTF::HashMap<WTF::String, WTF::RefPtr<API::Object>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RefPtr<API::Object> > >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > { struct KeyValuePair<WTF::String, WTF::RefPtr<API::Object> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_3_1_1; } x3; } *_rootDictionary;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)allowedClasses;
- (bool)allowsKeyedCoding;
- (bool)containsValueForKey:(id)arg1;
- (bool)decodeBoolForKey:(id)arg1;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2;
- (double)decodeDoubleForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (long long)decodeIntegerForKey:(id)arg1;
- (id)decodeObjectForKey:(id)arg1;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void*)arg2;
- (id)initWithInterface:(id)arg1 rootObjectDictionary:(const struct ImmutableDictionary { int (**x1)(); id x2; struct HashMap<WTF::String, WTF::RefPtr<API::Object>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RefPtr<API::Object> > > { struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::RefPtr<API::Object> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::RefPtr<API::Object> > >, WTF::StringHash, WTF::HashMap<WTF::String, WTF::RefPtr<API::Object>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RefPtr<API::Object> > >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > { struct KeyValuePair<WTF::String, WTF::RefPtr<API::Object> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_3_1_1; } x3; }*)arg2;
- (bool)requiresSecureCoding;

@end
