/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <VKMercatorTerrainHeightProvider>;

@interface VKMercatorTerrainHeightCache : NSObject {
    struct map<vk::Anchor *, float, std::__1::less<vk::Anchor *>, std::__1::allocator<std::__1::pair<vk::Anchor *const, float> > > { 
        struct __tree<std::__1::__value_type<vk::Anchor *, float>, std::__1::__map_value_compare<vk::Anchor *, std::__1::__value_type<vk::Anchor *, float>, std::__1::less<vk::Anchor *>, true>, std::__1::allocator<std::__1::__value_type<vk::Anchor *, float> > > { 
            struct __tree_node<std::__1::__value_type<vk::Anchor *, float>, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<vk::Anchor *, float>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<vk::Anchor *, std::__1::__value_type<vk::Anchor *, float>, std::__1::less<vk::Anchor *>, true> > { 
                unsigned long long __first_; 
            } __pair3_; 
        } __tree_; 
    } _anchorToHeight;
    <VKMercatorTerrainHeightProvider> *_heightProvider;
}

@property <VKMercatorTerrainHeightProvider> * heightProvider;

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)heightForAnchor:(struct Anchor { int (**x1)(); struct VKPoint { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; struct { double x_3_1_1; double x_3_1_2; } x3; id x4; }*)arg1;
- (id)heightProvider;
- (void)invalidateRect:(const struct { double x1; double x2; double x3; double x4; }*)arg1;
- (void)removeCachedValueForAnchor:(struct Anchor { int (**x1)(); struct VKPoint { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; struct { double x_3_1_1; double x_3_1_2; } x3; id x4; }*)arg1;
- (void)setHeightProvider:(id)arg1;

@end
