/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGLTextureLoader : TSCH3DResourceLoader {
}

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)loader;

- (bool)activateResource:(id)arg1 insideSession:(id)arg2 unit:(long long)arg3 type:(int)arg4 attributes:(const struct TextureAttributes { int x1; int x2; boolx3; boolx4; boolx5; long long x6; struct TextureSizeHint { int x_7_1_1; struct tvec2<int> { union { int x_1_3_1; int x_1_3_2; int x_1_3_3; } x_2_2_1; union { int x_2_3_1; int x_2_3_2; int x_2_3_3; } x_2_2_2; } x_7_1_2; } x7; boolx8; }*)arg5;
- (id)autorelease;
- (void)bindHandle:(id)arg1 config:(void*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)deactivateHandle:(id)arg1 insideContext:(id)arg2;
- (id)generateHandleWithConfig:(void*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)p_convertDataBuffer:(id)arg1 format:(struct TSCH3DGLTextureFormat { int x1; })arg2 returningConvertedFormat:(struct TSCH3DGLTextureFormat { int x1; }*)arg3;
- (void)postbindHandle:(id)arg1 config:(void*)arg2;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (bool)shouldReuploadHandle:(id)arg1 config:(void*)arg2;
- (unsigned long long)uploadDataBuffer:(id)arg1 handle:(id)arg2 insideSession:(id)arg3 config:(void*)arg4;
- (unsigned long long)uploadResource:(id)arg1 handle:(id)arg2 insideSession:(id)arg3 config:(void*)arg4;

@end
