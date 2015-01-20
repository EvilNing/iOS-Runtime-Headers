/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATFairPlaySession : NSObject {
    unsigned int _contextId;
}

- (struct FairPlayHWInfo_ { unsigned int x1; unsigned char x2[20]; })_fpHWInfoFromString:(id)arg1;
- (bool)contextIsValid;
- (void)dealloc;
- (id)deviceCertificate:(id*)arg1;
- (struct DeviceKeyTypeSupport { int x1; unsigned int x2; })deviceKeyTypeSupport;
- (id)generateKeybagRequest:(id*)arg1;
- (id)hostSyncPrepareKeybagResponseForRequest:(id)arg1 withDeviceCertificate:(id)arg2 hwInfoString:(id)arg3 deviceType:(unsigned int)arg4 supportVersion:(unsigned int)arg5;
- (id)hwInfoString;
- (id)importKeybag:(id)arg1;
- (id)init;
- (id)keybagData;

@end
