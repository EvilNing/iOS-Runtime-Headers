/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class BRCAccountSession, BRCBookmark, BRCGenerationID, BRCLocalContainer, BRCRelativePath, NSData, NSDirectoryEnumerator, NSNumber, NSString, NSURL;

@interface BRCRelativePath : NSObject <NSSecureCoding> {
    struct timespec { 
        long long tv_sec; 
        long long tv_nsec; 
    struct timespec { 
        long long tv_sec; 
        long long tv_nsec; 
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    unsigned int _isExcluded : 1;
    unsigned int _isInPackage : 1;
    unsigned int _isPackageRoot : 1;
    unsigned int _readFault : 1;
    unsigned int _hasFinderTags : 1;
    unsigned int _isBusy : 1;
    unsigned int _isAlias : 1;
    unsigned int _qtnResolved : 1;
    NSString *_absolutePath;
    BRCAccountSession *_accountSession;
    BRCRelativePath *_basePath;
    } _birthtime;
    BRCBookmark *_bookmark;
    unsigned long long _componentsCountToRoot;
    BRCLocalContainer *_container;
    NSDirectoryEnumerator *_descendantsEnumerator;
    int _deviceID;
    struct { int x1; long long x2; long long x3; char *x4; int x5; long long x6; long long x7; int x8; struct _opaque_pthread_mutex_t { long long x_9_1_1; BOOL x_9_1_2[56]; } x9; struct _telldir {} *x10; } *_dir;
    unsigned int _documentID;
    int _fd;
    unsigned long long _fileID;
    unsigned char _finderInfo[32];
    unsigned int _flags;
    unsigned int _fsGenerationID;
    BRCGenerationID *_generationID;
    unsigned short _mode;
    } _mtime;
    } _mutex;
    unsigned int _nlink;
    unsigned long long _parentFileID;
    NSData *_quarantineInfo;
    NSString *_relativePath;
    long long _size;
    NSString *_symlinkContent;
    NSNumber *_volumeID;
    /* Warning: Unrecognized filer type: 'A' using 'void*' */ void*_openRefCount;
}

@property(readonly) NSString * absolutePath;
@property(readonly) BRCAccountSession * accountSession;
@property(readonly) long long birthTime;
@property(readonly) BRCBookmark * bookmark;
@property(readonly) BRCLocalContainer * container;
@property(readonly) int deviceID;
@property(readonly) unsigned int documentID;
@property(readonly) bool exists;
@property(readonly) NSString * faultDisplayName;
@property(readonly) unsigned long long fileID;
@property(readonly) NSNumber * fileObjectID;
@property(readonly) unsigned int fileType;
@property(readonly) NSString * filename;
@property(readonly) unsigned int fsGenerationID;
@property(readonly) BRCGenerationID * generationID;
@property(readonly) unsigned int hardlinkCount;
@property(readonly) bool hasFinderTags;
@property(readonly) unsigned long long hash;
@property(readonly) bool isAlias;
@property(readonly) bool isBusy;
@property(readonly) bool isContainer;
@property(readonly) bool isDocument;
@property(readonly) bool isExcluded;
@property(readonly) bool isExecutable;
@property(readonly) bool isFault;
@property(readonly) bool isFile;
@property(readonly) bool isHiddenExtension;
@property(readonly) bool isHiddenFile;
@property(readonly) bool isInPackage;
@property(readonly) bool isPackageRoot;
@property(readonly) bool isParentedToContainer;
@property(readonly) bool isRoot;
@property(readonly) bool isSymLink;
@property(readonly) bool isUnixDir;
@property(readonly) bool isWritable;
@property(readonly) long long modificationTime;
@property(readonly) unsigned long long parentFileID;
@property(readonly) unsigned long long parentHash;
@property(readonly) NSString * pathRelativeToContainer;
@property(readonly) NSString * pathRelativeToPackageRoot;
@property(readonly) NSString * pathRelativeToRoot;
@property(readonly) NSData * quarantineInfo;
@property(readonly) BRCRelativePath * root;
@property(readonly) long long size;
@property(readonly) NSString * symlinkContent;
@property(readonly) NSURL * url;
@property(readonly) NSNumber * volumeID;

+ (int)locateByFileID:(unsigned long long)arg1 inContainer:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_close;
- (bool)_fixupRelativePath;
- (id)_initWithPath:(id)arg1 relativeToRoot:(id)arg2;
- (bool)_resolveAndKeepOpenMustExist:(bool)arg1 error:(int*)arg2;
- (int)_resolveBasePath;
- (int)_resolveContainer;
- (int)_resolveSymlinkRelativeTo:(int)arg1 path:(id)arg2;
- (int)_resolveWhenDoesntExist;
- (int)_resolveWhenExists;
- (bool)_shouldKeepBasePathOpen;
- (id)absolutePath;
- (id)accountSession;
- (long long)birthTime;
- (id)bookmark;
- (void)close;
- (void)closeDirectoryScan;
- (id)container;
- (void)dealloc;
- (id)description;
- (int)deviceID;
- (unsigned int)documentID;
- (void)encodeWithCoder:(id)arg1;
- (bool)exists;
- (id)faultDisplayName;
- (unsigned long long)fileID;
- (id)fileObjectID;
- (unsigned int)fileType;
- (id)filename;
- (bool)flock:(int)arg1;
- (unsigned int)fsGenerationID;
- (id)generationID;
- (unsigned int)hardlinkCount;
- (bool)hasFinderTags;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileID:(unsigned long long)arg1 inContainer:(id)arg2;
- (id)initWithPath:(id)arg1 inContainer:(id)arg2;
- (id)initWithRootPath:(id)arg1 accountSession:(id)arg2;
- (bool)isAlias;
- (bool)isBusy;
- (bool)isContainer;
- (bool)isDocument;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRelativePath:(id)arg1;
- (bool)isExcluded;
- (bool)isExecutable;
- (bool)isFault;
- (bool)isFile;
- (bool)isHiddenExtension;
- (bool)isHiddenFile;
- (bool)isInPackage;
- (bool)isPackageRoot;
- (bool)isParentedToContainer;
- (bool)isResolved;
- (bool)isRoot;
- (bool)isSymLink;
- (bool)isUnixDir;
- (bool)isWritable;
- (id)logicalURLWithLogicalName:(id)arg1;
- (long long)modificationTime;
- (id)nextChild;
- (id)nextDescendant;
- (bool)openDirectoryForRecursiveScan;
- (bool)openDirectoryForScanWithError:(int*)arg1;
- (unsigned long long)parentFileID;
- (unsigned long long)parentHash;
- (id)pathOfPackageRoot;
- (id)pathOfParent;
- (id)pathRelativeToContainer;
- (id)pathRelativeToPackageRoot;
- (id)pathRelativeToRoot;
- (id)pathWithChildAtPath:(id)arg1;
- (bool)performOnOpenFileDescriptor:(id)arg1 error:(int*)arg2;
- (bool)performOnOpenParentFileDescriptor:(id)arg1 error:(int*)arg2;
- (id)quarantineInfo;
- (id)refreshFromPathMustExist:(bool)arg1;
- (bool)resolveAndKeepOpenMustExist:(bool)arg1 error:(int*)arg2;
- (bool)resolveMustExist:(bool)arg1 error:(int*)arg2;
- (id)root;
- (long long)size;
- (id)symlinkContent;
- (id)url;
- (id)volumeID;

@end
