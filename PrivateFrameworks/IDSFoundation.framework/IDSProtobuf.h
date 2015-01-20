/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@class IDSMessageContext, NSData, NSMutableDictionary;

@interface IDSProtobuf : NSObject <NSCoding> {
    NSMutableDictionary *_protoBufParams;
    NSData *_uncompressedData;
}

@property(retain) IDSMessageContext * context;
@property(retain) NSData * data;
@property bool isResponse;
@property unsigned short type;
@property(retain) NSData * uncompressedData;

+ (id)keyRepresentationForType:(unsigned short)arg1 isResponse:(bool)arg2;

- (id)context;
- (id)data;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithProtobufData:(id)arg1 type:(unsigned short)arg2 isResponse:(bool)arg3;
- (bool)isResponse;
- (void)setContext:(id)arg1;
- (void)setData:(id)arg1;
- (void)setIsResponse:(bool)arg1;
- (void)setType:(unsigned short)arg1;
- (void)setUncompressedData:(id)arg1;
- (unsigned short)type;
- (id)uncompressedData;

@end
