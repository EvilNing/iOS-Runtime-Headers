/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@class NSData, NSString;

@interface SCNGeometrySource : NSObject <NSSecureCoding> {
    long long _bytesPerComponent;
    long long _componentsPerVector;
    NSData *_data;
    long long _dataOffset;
    long long _dataStride;
    struct __C3DMeshSource { struct __C3DGenericSource { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_3_1; unsigned char x_1_3_2[4]; unsigned int x_1_3_3; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; long long x_1_2_6; long long x_1_2_7; } x_1_1_1; struct __C3DSourceAccessor {} *x_1_1_2; union { struct __CFData {} *x_3_2_1; void *x_3_2_2; } x_1_1_3; unsigned int x_1_1_4 : 1; unsigned int x_1_1_5 : 1; unsigned int x_1_1_6 : 1; } x1; unsigned short x2; unsigned short x3; } *_meshSource;
    id _reserved;
    NSString *_semantic;
    long long _vectorCount;
    bool_floatComponents;
}

@property(readonly) long long bytesPerComponent;
@property(readonly) long long componentsPerVector;
@property(readonly) NSData * data;
@property(readonly) long long dataOffset;
@property(readonly) long long dataStride;
@property(readonly) bool floatComponents;
@property(readonly) NSString * semantic;
@property(readonly) long long vectorCount;

+ (id)SCNJSExportProtocol;
+ (id)dataWithPointArray:(const struct CGPoint { double x1; double x2; }*)arg1 count:(long long)arg2 bytesPerComponent:(long long*)arg3;
+ (id)dataWithVector3Array:(const struct SCNVector3 { float x1; float x2; float x3; }*)arg1 count:(long long)arg2 bytesPerComponent:(long long*)arg3;
+ (id)geometrySourceWithData:(id)arg1 semantic:(id)arg2 vectorCount:(long long)arg3 floatComponents:(bool)arg4 componentsPerVector:(long long)arg5 bytesPerComponent:(long long)arg6 dataOffset:(long long)arg7 dataStride:(long long)arg8;
+ (id)geometrySourceWithNormals:(const struct SCNVector3 { float x1; float x2; float x3; }*)arg1 count:(long long)arg2;
+ (id)geometrySourceWithTextureCoordinates:(const struct CGPoint { double x1; double x2; }*)arg1 count:(long long)arg2;
+ (id)geometrySourceWithVertices:(const struct SCNVector3 { float x1; float x2; float x3; }*)arg1 count:(long long)arg2;
+ (bool)supportsSecureCoding;

- (short)baseTypeForDataFormat;
- (long long)bytesPerComponent;
- (long long)componentsPerVector;
- (id)data;
- (long long)dataOffset;
- (long long)dataStride;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)floatComponents;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 semantic:(id)arg2 vectorCount:(long long)arg3 floatComponents:(bool)arg4 componentsPerVector:(long long)arg5 bytesPerComponent:(long long)arg6 dataOffset:(long long)arg7 dataStride:(long long)arg8;
- (id)initWithMeshSource:(struct __C3DMeshSource { struct __C3DGenericSource { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_3_1; unsigned char x_1_3_2[4]; unsigned int x_1_3_3; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; long long x_1_2_6; long long x_1_2_7; } x_1_1_1; struct __C3DSourceAccessor {} *x_1_1_2; union { struct __CFData {} *x_3_2_1; void *x_3_2_2; } x_1_1_3; unsigned int x_1_1_4 : 1; unsigned int x_1_1_5 : 1; unsigned int x_1_1_6 : 1; } x1; unsigned short x2; unsigned short x3; }*)arg1;
- (struct __C3DMeshSource { struct __C3DGenericSource { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_3_1; unsigned char x_1_3_2[4]; unsigned int x_1_3_3; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; long long x_1_2_6; long long x_1_2_7; } x_1_1_1; struct __C3DSourceAccessor {} *x_1_1_2; union { struct __CFData {} *x_3_2_1; void *x_3_2_2; } x_1_1_3; unsigned int x_1_1_4 : 1; unsigned int x_1_1_5 : 1; unsigned int x_1_1_6 : 1; } x1; unsigned short x2; unsigned short x3; }*)meshSource;
- (id)semantic;
- (long long)vectorCount;

@end
