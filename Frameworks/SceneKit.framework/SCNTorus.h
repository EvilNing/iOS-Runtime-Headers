/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface SCNTorus : SCNGeometry {
    id _reserved;
    double _toruspipeRadius;
    long long _toruspipeSegmentCount;
    long long _torusprimitiveType;
    double _torusradialSpan;
    double _torusringRadius;
    long long _torusringSegmentCount;
}

@property double pipeRadius;
@property long long pipeSegmentCount;
@property double ringRadius;
@property long long ringSegmentCount;

+ (id)SCNJSExportProtocol;
+ (bool)supportsSecureCoding;
+ (id)torusWithRingRadius:(double)arg1 pipeRadius:(double)arg2;

- (struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned char x_1_2_2[4]; unsigned int x_1_2_3; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; long long x_1_1_6; long long x_1_1_7; } x1; struct __C3DMesh {} *x2; struct __C3DMaterial {} *x3; struct __CFArray {} *x4; struct __CFArray {} *x5; struct __CFSet {} *x6; struct __CFArray {} *x7; struct __C3DAABB {} *x8; int (*x9)(); struct { boolx_10_1_1; boolx_10_1_2; unsigned short x_10_1_3; unsigned short x_10_1_4; float x_10_1_5; float x_10_1_6; unsigned char x_10_1_7; unsigned char x_10_1_8; unsigned char x_10_1_9; unsigned char x_10_1_10; struct __C3DMeshElement {} *x_10_1_11; struct __C3DMeshSource {} *x_10_1_12; struct __C3DMesh {} *x_10_1_13; boolx_10_1_14; boolx_10_1_15; void *x_10_1_16; void *x_10_1_17; } x10; }*)__createCFObject;
- (void)_setupObjCModelFrom:(id)arg1;
- (void)_syncObjCModel:(struct __C3DParametricGeometry { struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_3_1; unsigned char x_1_3_2[4]; unsigned int x_1_3_3; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; long long x_1_2_6; long long x_1_2_7; } x_1_1_1; struct __C3DMesh {} *x_1_1_2; struct __C3DMaterial {} *x_1_1_3; struct __CFArray {} *x_1_1_4; struct __CFArray {} *x_1_1_5; struct __CFSet {} *x_1_1_6; struct __CFArray {} *x_1_1_7; struct __C3DAABB {} *x_1_1_8; int (*x_1_1_9)(); struct { boolx_10_2_1; boolx_10_2_2; unsigned short x_10_2_3; unsigned short x_10_2_4; float x_10_2_5; float x_10_2_6; unsigned char x_10_2_7; unsigned char x_10_2_8; unsigned char x_10_2_9; unsigned char x_10_2_10; struct __C3DMeshElement {} *x_10_2_11; struct __C3DMeshSource {} *x_10_2_12; struct __C3DMesh {} *x_10_2_13; boolx_10_2_14; boolx_10_2_15; void *x_10_2_16; void *x_10_2_17; } x_1_1_10; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; float x_2_1_5; float x_2_1_6; float x_2_1_7; float x_2_1_8; float x_2_1_9; float x_2_1_10; float x_2_1_11; float x_2_1_12; int x_2_1_13; int x_2_1_14; int x_2_1_15; int x_2_1_16; int x_2_1_17; int x_2_1_18; int x_2_1_19; int x_2_1_20; int x_2_1_21; int x_2_1_22; int x_2_1_23; unsigned int x_2_1_24; } x2; struct { int (*x_3_1_1)(); int (*x_3_1_2)(); int (*x_3_1_3)(); int (*x_3_1_4)(); int (*x_3_1_5)(); int (*x_3_1_6)(); } x3; struct __CFData {} *x4; }*)arg1;
- (id)copy;
- (struct __C3DAnimationChannel { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct __C3DAnimation {} *x2; struct __CFArray {} *x3; void *x4; struct __C3DModelTarget {} *x5; struct __CFString {} *x6; }*)copyAnimationChannelForKeyPath:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)getBoundingBoxMin:(struct SCNVector3 { float x1; float x2; float x3; }*)arg1 max:(struct SCNVector3 { float x1; float x2; float x3; }*)arg2;
- (bool)getBoundingSphereCenter:(struct SCNVector3 { float x1; float x2; float x3; }*)arg1 radius:(double*)arg2;
- (id)init;
- (id)initPresentationParametricGeometryWithParametricGeometryRef:(struct __C3DParametricGeometry { struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_3_1; unsigned char x_1_3_2[4]; unsigned int x_1_3_3; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; long long x_1_2_6; long long x_1_2_7; } x_1_1_1; struct __C3DMesh {} *x_1_1_2; struct __C3DMaterial {} *x_1_1_3; struct __CFArray {} *x_1_1_4; struct __CFArray {} *x_1_1_5; struct __CFSet {} *x_1_1_6; struct __CFArray {} *x_1_1_7; struct __C3DAABB {} *x_1_1_8; int (*x_1_1_9)(); struct { boolx_10_2_1; boolx_10_2_2; unsigned short x_10_2_3; unsigned short x_10_2_4; float x_10_2_5; float x_10_2_6; unsigned char x_10_2_7; unsigned char x_10_2_8; unsigned char x_10_2_9; unsigned char x_10_2_10; struct __C3DMeshElement {} *x_10_2_11; struct __C3DMeshSource {} *x_10_2_12; struct __C3DMesh {} *x_10_2_13; boolx_10_2_14; boolx_10_2_15; void *x_10_2_16; void *x_10_2_17; } x_1_1_10; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; float x_2_1_5; float x_2_1_6; float x_2_1_7; float x_2_1_8; float x_2_1_9; float x_2_1_10; float x_2_1_11; float x_2_1_12; int x_2_1_13; int x_2_1_14; int x_2_1_15; int x_2_1_16; int x_2_1_17; int x_2_1_18; int x_2_1_19; int x_2_1_20; int x_2_1_21; int x_2_1_22; int x_2_1_23; unsigned int x_2_1_24; } x2; struct { int (*x_3_1_1)(); int (*x_3_1_2)(); int (*x_3_1_3)(); int (*x_3_1_4)(); int (*x_3_1_5)(); int (*x_3_1_6)(); } x3; struct __CFData {} *x4; }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithParametricGeometryRef:(struct __C3DParametricGeometry { struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_3_1; unsigned char x_1_3_2[4]; unsigned int x_1_3_3; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; long long x_1_2_6; long long x_1_2_7; } x_1_1_1; struct __C3DMesh {} *x_1_1_2; struct __C3DMaterial {} *x_1_1_3; struct __CFArray {} *x_1_1_4; struct __CFArray {} *x_1_1_5; struct __CFSet {} *x_1_1_6; struct __CFArray {} *x_1_1_7; struct __C3DAABB {} *x_1_1_8; int (*x_1_1_9)(); struct { boolx_10_2_1; boolx_10_2_2; unsigned short x_10_2_3; unsigned short x_10_2_4; float x_10_2_5; float x_10_2_6; unsigned char x_10_2_7; unsigned char x_10_2_8; unsigned char x_10_2_9; unsigned char x_10_2_10; struct __C3DMeshElement {} *x_10_2_11; struct __C3DMeshSource {} *x_10_2_12; struct __C3DMesh {} *x_10_2_13; boolx_10_2_14; boolx_10_2_15; void *x_10_2_16; void *x_10_2_17; } x_1_1_10; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; float x_2_1_5; float x_2_1_6; float x_2_1_7; float x_2_1_8; float x_2_1_9; float x_2_1_10; float x_2_1_11; float x_2_1_12; int x_2_1_13; int x_2_1_14; int x_2_1_15; int x_2_1_16; int x_2_1_17; int x_2_1_18; int x_2_1_19; int x_2_1_20; int x_2_1_21; int x_2_1_22; int x_2_1_23; unsigned int x_2_1_24; } x2; struct { int (*x_3_1_1)(); int (*x_3_1_2)(); int (*x_3_1_3)(); int (*x_3_1_4)(); int (*x_3_1_5)(); int (*x_3_1_6)(); } x3; struct __CFData {} *x4; }*)arg1;
- (double)pipeRadius;
- (long long)pipeSegmentCount;
- (id)presentationGeometry;
- (id)presentationTorus;
- (long long)primitiveType;
- (double)radialSpan;
- (double)ringRadius;
- (long long)ringSegmentCount;
- (void)setPipeRadius:(double)arg1;
- (void)setPipeSegmentCount:(long long)arg1;
- (void)setPrimitiveType:(long long)arg1;
- (void)setRadialSpan:(double)arg1;
- (void)setRingRadius:(double)arg1;
- (void)setRingSegmentCount:(long long)arg1;

@end
