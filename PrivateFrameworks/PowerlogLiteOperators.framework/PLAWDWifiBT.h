/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@class NSMutableSet, PLEntryNotificationOperatorComposition, PLOperator;

@interface PLAWDWifiBT : PLAWDAuxMetrics {
    PLEntryNotificationOperatorComposition *_btEventCallback;
    PLEntryNotificationOperatorComposition *_btPowerCallback;
    PLEntryNotificationOperatorComposition *_btRailCallback;
    long long _btSubmitCnt;
    PLEntryNotificationOperatorComposition *_wifiEventCallback;
    PLEntryNotificationOperatorComposition *_wifiRailCallback;
    long long _wifiSubmitCnt;
    bool_isBTRailStart;
    bool_isBTStart;
    bool_isWiFiRailStart;
    bool_isWiFiStart;
}

@property(retain) PLEntryNotificationOperatorComposition * btEventCallback;
@property(retain) PLEntryNotificationOperatorComposition * btPowerCallback;
@property(retain) PLEntryNotificationOperatorComposition * btRailCallback;
@property long long btSubmitCnt;
@property bool isBTRailStart;
@property bool isBTStart;
@property bool isWiFiRailStart;
@property bool isWiFiStart;
@property PLOperator * operator;
@property(retain) NSMutableSet * runningMetrics;
@property(retain) PLEntryNotificationOperatorComposition * wifiEventCallback;
@property(retain) PLEntryNotificationOperatorComposition * wifiRailCallback;
@property long long wifiSubmitCnt;

+ (id)entryAggregateDefinitionAwdBT;
+ (id)entryAggregateDefinitionAwdWifi;
+ (id)entryAggregateDefinitions;
+ (id)getSharedObjWithOperator:(id)arg1;

- (void).cxx_destruct;
- (void)addEntryToBTTable:(id)arg1 withValue:(double)arg2;
- (void)addEntryToWiFiTable:(id)arg1 withValue:(double)arg2 andBand:(id)arg3;
- (id)btEventCallback;
- (id)btPowerCallback;
- (id)btRailCallback;
- (long long)btSubmitCnt;
- (void)handleBTCallback:(id)arg1;
- (void)handleBTPowerCallback:(id)arg1;
- (void)handleBTRailCallback:(id)arg1;
- (void)handleWifiCallback:(id)arg1;
- (void)handleWifiRailCallback:(id)arg1;
- (bool)isBTRailStart;
- (bool)isBTStart;
- (bool)isWiFiRailStart;
- (bool)isWiFiStart;
- (void)resetBTTable;
- (void)resetWifiTable;
- (void)setBtEventCallback:(id)arg1;
- (void)setBtPowerCallback:(id)arg1;
- (void)setBtRailCallback:(id)arg1;
- (void)setBtSubmitCnt:(long long)arg1;
- (void)setIsBTRailStart:(bool)arg1;
- (void)setIsBTStart:(bool)arg1;
- (void)setIsWiFiRailStart:(bool)arg1;
- (void)setIsWiFiStart:(bool)arg1;
- (void)setWifiEventCallback:(id)arg1;
- (void)setWifiRailCallback:(id)arg1;
- (void)setWifiSubmitCnt:(long long)arg1;
- (void)startBtMetricCollection;
- (void)startMetricCollection:(id)arg1;
- (void)startWifiMetricCollection;
- (void)stopMetricCollection:(id)arg1;
- (bool)submitBtDataToAWDServer:(id)arg1 withAwdConn:(id)arg2;
- (bool)submitDataToAWDServer:(id)arg1 withAwdConn:(id)arg2;
- (bool)submitWiFiDataToAWDServer:(id)arg1 withAwdConn:(id)arg2;
- (id)wifiEventCallback;
- (id)wifiRailCallback;
- (long long)wifiSubmitCnt;

@end
