/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CKDRepairZonePCSOperation : CKDDatabaseOperation {
    NSMutableArray *_fetchedZones;
    NSMutableArray *_fixedZones;
    NSMutableDictionary *_pcsInfoByZoneID;
    NSArray *_zoneIDs;
    id _zonePCSRepairProgressBlock;
}

@property(retain) NSMutableArray * fetchedZones;
@property(retain) NSMutableArray * fixedZones;
@property(retain) NSMutableDictionary * pcsInfoByZoneID;
@property(retain) NSArray * zoneIDs;
@property(copy) id zonePCSRepairProgressBlock;

- (void).cxx_destruct;
- (id)_checkPCSDataForZone:(id)arg1;
- (void)_checkZonePCS;
- (void)_fetchZones;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_uploadRepairedZones;
- (id)fetchedZones;
- (id)fixedZones;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (bool)makeStateTransition;
- (id)nameForState:(unsigned long long)arg1;
- (id)pcsInfoByZoneID;
- (void)setFetchedZones:(id)arg1;
- (void)setFixedZones:(id)arg1;
- (void)setPcsInfoByZoneID:(id)arg1;
- (void)setZoneIDs:(id)arg1;
- (void)setZonePCSRepairProgressBlock:(id)arg1;
- (id)zoneIDs;
- (id)zonePCSRepairProgressBlock;

@end
