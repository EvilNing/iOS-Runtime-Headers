/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class FigCaptureSinkConfiguration, FigCaptureSourceConfiguration, NSString;

@interface FigCaptureConnectionConfiguration : NSObject <FigXPCCoding, NSCopying> {
    NSString *_connectionID;
    unsigned int _mediaType;
    FigCaptureSinkConfiguration *_sinkConfiguration;
    FigCaptureSourceConfiguration *_sourceConfiguration;
    bool_enabled;
}

@property(copy) NSString * connectionID;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property bool enabled;
@property(readonly) unsigned long long hash;
@property unsigned int mediaType;
@property(retain) FigCaptureSinkConfiguration * sinkConfiguration;
@property(retain) FigCaptureSourceConfiguration * sourceConfiguration;
@property(readonly) Class superclass;

+ (void)initialize;

- (id)connectionID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (bool)enabled;
- (id)init;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned int)mediaType;
- (void)setConnectionID:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setMediaType:(unsigned int)arg1;
- (void)setSinkConfiguration:(id)arg1;
- (void)setSourceConfiguration:(id)arg1;
- (id)sinkConfiguration;
- (id)sourceConfiguration;

@end
