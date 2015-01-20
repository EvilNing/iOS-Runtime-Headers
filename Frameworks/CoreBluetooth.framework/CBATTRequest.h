/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class CBCentral, CBCharacteristic, NSData, NSMutableData, NSNumber;

@interface CBATTRequest : NSObject {
    CBCentral *_central;
    CBCharacteristic *_characteristic;
    unsigned long long _offset;
    NSNumber *_transactionID;
    NSMutableData *_value;
    bool_ignoreResponse;
}

@property(retain,readonly) CBCentral * central;
@property(retain) CBCharacteristic * characteristic;
@property bool ignoreResponse;
@property(readonly) unsigned long long offset;
@property(readonly) NSNumber * transactionID;
@property(copy) NSData * value;

- (void)appendValueData:(id)arg1;
- (id)central;
- (id)characteristic;
- (void)dealloc;
- (id)description;
- (unsigned long long)endOffset;
- (bool)ignoreResponse;
- (id)initWithCentral:(id)arg1 characteristic:(id)arg2 offset:(unsigned long long)arg3 transactionID:(id)arg4;
- (unsigned long long)offset;
- (void)setCharacteristic:(id)arg1;
- (void)setIgnoreResponse:(bool)arg1;
- (void)setValue:(id)arg1;
- (id)transactionID;
- (id)value;

@end
