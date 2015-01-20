/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class <ICDeviceDelegate>, DeviceManager, NSString;

@interface ICDevice : NSObject {
    void *_deviceProperties;
}

@property(copy) NSString * UUIDString;
@property bool autoOpenSession;
@property bool closeSessionPending;
@property <ICDeviceDelegate> * delegate;
@property DeviceManager * deviceManager;
@property bool hasOpenSession;
@property(readonly) struct CGImage { }* icon;
@property(copy) NSString * name;
@property bool openSessionPending;
@property(copy) NSString * productKind;
@property(copy) NSString * transportType;
@property int usbLocationID;
@property int usbProductID;
@property int usbVendorID;

- (id)UUIDString;
- (bool)autoOpenSession;
- (bool)closeSessionPending;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)deviceManager;
- (void)finalize;
- (void)handleCommandCompletionNotification:(id)arg1;
- (void)handleImageCaptureEventNotification:(id)arg1;
- (bool)hasOpenSession;
- (struct CGImage { }*)icon;
- (id)init;
- (bool)isCameraDevice;
- (id)name;
- (bool)openSessionPending;
- (id)productKind;
- (void)requestCloseSession;
- (void)requestOpenSession;
- (void)setAutoOpenSession:(bool)arg1;
- (void)setCloseSessionPending:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceManager:(id)arg1;
- (void)setHasOpenSession:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setOpenSessionPending:(bool)arg1;
- (void)setProductKind:(id)arg1;
- (void)setTransportType:(id)arg1;
- (void)setUUIDString:(id)arg1;
- (void)setUsbLocationID:(int)arg1;
- (void)setUsbProductID:(int)arg1;
- (void)setUsbVendorID:(int)arg1;
- (id)transportType;
- (int)usbLocationID;
- (int)usbProductID;
- (int)usbVendorID;
- (id)valueForUndefinedKey:(id)arg1;

@end
