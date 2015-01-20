/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@class NSDate, NSMutableArray, NSString;

@interface AXHearingAidFakeDevice : AXHearingAidDevice {
    NSString *_deviceUUID;
    double _leftBatteryLevel;
    NSDate *_leftBatteryLowDate;
    NSMutableArray *_leftFakePrograms;
    NSString *_leftFirmwareVersion;
    NSString *_leftHardwareVersion;
    NSString *_leftUUID;
    NSString *_manufacturer;
    NSString *_model;
    NSString *_name;
    double _rightBatteryLevel;
    NSDate *_rightBatteryLowDate;
    NSMutableArray *_rightFakePrograms;
    NSString *_rightFirmwareVersion;
    NSString *_rightHardwareVersion;
    NSString *_rightUUID;
    int _type;
    bool_connected;
    bool_isConnecting;
}

@property bool connected;
@property(retain) NSString * deviceUUID;
@property bool isConnecting;
@property bool isPaired;
@property double leftBatteryLevel;
@property(retain) NSDate * leftBatteryLowDate;
@property(retain) NSString * leftFirmwareVersion;
@property(retain) NSString * leftHardwareVersion;
@property(retain) NSString * leftUUID;
@property(retain) NSString * manufacturer;
@property(retain) NSString * model;
@property(retain) NSString * name;
@property double rightBatteryLevel;
@property(retain) NSDate * rightBatteryLowDate;
@property(retain) NSString * rightFirmwareVersion;
@property(retain) NSString * rightHardwareVersion;
@property(retain) NSString * rightUUID;
@property int type;

- (void)connect;
- (bool)connected;
- (void)createPrograms;
- (void)dealloc;
- (id)deviceUUID;
- (bool)didLoadBasicProperties;
- (bool)didLoadRequiredProperties;
- (void)disconnect;
- (bool)hasConnection;
- (id)initWithDeviceType:(int)arg1;
- (bool)isConnected;
- (bool)isConnecting;
- (bool)isPaired;
- (bool)isPersistent;
- (bool)leftAvailable;
- (double)leftBatteryLevel;
- (id)leftBatteryLowDate;
- (id)leftFirmwareVersion;
- (id)leftHardwareVersion;
- (id)leftPrograms;
- (id)leftUUID;
- (id)manufacturer;
- (id)manufacturerForType;
- (id)model;
- (id)modelForType;
- (id)name;
- (void)persist;
- (id)persistentRepresentation;
- (bool)rightAvailable;
- (double)rightBatteryLevel;
- (id)rightBatteryLowDate;
- (id)rightFirmwareVersion;
- (id)rightHardwareVersion;
- (id)rightPrograms;
- (id)rightUUID;
- (void)setConnected:(bool)arg1;
- (void)setDeviceUUID:(id)arg1;
- (void)setIsConnecting:(bool)arg1;
- (void)setLeftBatteryLevel:(double)arg1;
- (void)setLeftBatteryLowDate:(id)arg1;
- (void)setLeftFirmwareVersion:(id)arg1;
- (void)setLeftHardwareVersion:(id)arg1;
- (void)setLeftUUID:(id)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRightBatteryLevel:(double)arg1;
- (void)setRightBatteryLowDate:(id)arg1;
- (void)setRightFirmwareVersion:(id)arg1;
- (void)setRightHardwareVersion:(id)arg1;
- (void)setRightUUID:(id)arg1;
- (void)setType:(int)arg1;
- (void)setValue:(id)arg1 forProperty:(long long)arg2;
- (int)type;
- (id)valueForProperty:(long long)arg1;
- (void)writeInt:(unsigned char)arg1 toPeripheral:(id)arg2 forProperty:(long long)arg3;

@end
