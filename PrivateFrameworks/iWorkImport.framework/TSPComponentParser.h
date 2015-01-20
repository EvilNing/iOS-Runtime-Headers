/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <TSPComponentParserDelegate>;

@interface TSPComponentParser : NSObject {
    struct ArchiveInfo { 
        int (**_vptr$MessageLite)(); 
        struct UnknownFieldSet { 
            struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *fields_; 
        } _unknown_fields_; 
        unsigned long long identifier_; 
        struct RepeatedPtrField<TSP::MessageInfo> { 
            void **elements_; 
            int current_size_; 
            int allocated_size_; 
            int total_size_; 
        } message_infos_; 
        int _cached_size_; 
        unsigned int _has_bits_[1]; 
    } _archiveInfo;
    unsigned int _archiveInfoLength;
    <TSPComponentParserDelegate> *_delegate;
    unsigned int _messagesLength;
    unsigned long long _state;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (unsigned long long)readArchiveFromStream:(struct DispatchDataInputStream { int (**x1)(); id x2; unsigned long long x3; unsigned long long x4; id x5; unsigned long long x6; char *x7; }*)arg1 error:(id*)arg2;
- (unsigned long long)readArchiveInfoFromStream:(struct DispatchDataInputStream { int (**x1)(); id x2; unsigned long long x3; unsigned long long x4; id x5; unsigned long long x6; char *x7; }*)arg1 error:(id*)arg2;
- (unsigned long long)readArchiveInfoLengthFromStream:(struct DispatchDataInputStream { int (**x1)(); id x2; unsigned long long x3; unsigned long long x4; id x5; unsigned long long x6; char *x7; }*)arg1 error:(id*)arg2;
- (bool)readFromStream:(struct DispatchDataInputStream { int (**x1)(); id x2; unsigned long long x3; unsigned long long x4; id x5; unsigned long long x6; char *x7; }*)arg1 error:(id*)arg2;
- (void)readWithChannel:(id)arg1 completionQueue:(id)arg2 completion:(id)arg3;

@end
