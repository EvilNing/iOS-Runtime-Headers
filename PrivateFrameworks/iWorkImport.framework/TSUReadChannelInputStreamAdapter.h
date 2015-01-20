/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSUReadChannel>, <TSUStreamReadChannel>, NSObject<OS_dispatch_data>, NSObject<OS_dispatch_queue>, NSString;

@interface TSUReadChannelInputStreamAdapter : NSObject <SFUInputStream> {
    NSObject<OS_dispatch_data> *_leftoverData;
    long long _offset;
    <TSUReadChannel> *_readChannel;
    NSObject<OS_dispatch_queue> *_readQueue;
    <TSUStreamReadChannel> *_streamReadChannel;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithReadChannel:(id)arg1 streamReadChannel:(id)arg2;
- (bool)canSeek;
- (void)close;
- (id)closeLocalStream;
- (void)dealloc;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (id)initWithReadChannel:(id)arg1;
- (id)initWithStreamReadChannel:(id)arg1;
- (long long)offset;
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;
- (void)seekToOffset:(long long)arg1;

@end
