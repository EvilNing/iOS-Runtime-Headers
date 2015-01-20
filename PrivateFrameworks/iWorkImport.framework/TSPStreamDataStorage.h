/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, SFUCryptoKey;

@interface TSPStreamDataStorage : NSObject <TSPDataStorage> {
}

@property(readonly) unsigned int CRC;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) SFUCryptoKey * decryptionKey;
@property(copy,readonly) NSString * description;
@property(readonly) NSString * documentResourceLocator;
@property(readonly) unsigned long long encodedLength;
@property bool gilligan_isRemote;
@property(readonly) unsigned long long hash;
@property(readonly) bool isMissingData;
@property(readonly) bool isReadable;
@property(readonly) bool needsDownload;
@property(readonly) unsigned char packageIdentifier;
@property(readonly) NSString * packageLocator;
@property(readonly) bool readOnly;
@property(readonly) Class superclass;

- (id)AVAssetWithOptions:(id)arg1 contentTypeUTI:(id)arg2;
- (id)AVAssetWithOptions:(id)arg1 usingResourceLoaderWithContentTypeUTI:(id)arg2;
- (id)NSDataWithOptions:(unsigned long long)arg1;
- (void)archiveInfoMessage:(struct DataInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned long long x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x8; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x9; int x10; unsigned int x11[1]; }*)arg1 archiver:(id)arg2;
- (id)bookmarkDataWithOptions:(unsigned long long)arg1;
- (id)documentResourceLocator;
- (unsigned long long)encodedLength;
- (id)filenameForPreferredFilename:(id)arg1;
- (bool)isInPackage:(id)arg1;
- (bool)isMissingData;
- (bool)isReadable;
- (struct CGDataProvider { }*)newCGDataProvider;
- (struct CGImageSource { }*)newCGImageSource;
- (unsigned char)packageIdentifier;
- (id)packageLocator;
- (void)performIOChannelReadWithAccessor:(id)arg1;
- (bool)readOnly;
- (bool)writeData:(id)arg1 toPackageWriter:(id)arg2 preferredFilename:(id)arg3 filename:(id*)arg4 didCopyDataToPackage:(bool*)arg5 isMissingData:(bool*)arg6;

@end
