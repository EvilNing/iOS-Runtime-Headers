/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPSearchResultDeserializer : PBDataReader {
    unsigned long long _byteVector;
    bool_munmapAtDealloc;
}

- (void)dealloc;
- (bool)deserializeNextSection:(id*)arg1;
- (id)initWithMallocRegion:(unsigned long long)arg1 length:(unsigned long long)arg2;
- (id)initWithMappedRegion:(unsigned long long)arg1 length:(unsigned long long)arg2;
- (id)initWithSerializer:(id)arg1;

@end
