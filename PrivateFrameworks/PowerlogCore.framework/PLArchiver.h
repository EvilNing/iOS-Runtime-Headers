/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@class NSDate, NSMutableArray, NSNumber, PLSQLiteConnection, PLStorageOperator;

@interface PLArchiver : NSObject {
    PLSQLiteConnection *_connection;
    NSDate *_lastArchiveDate;
    NSNumber *_minDaysMainDB;
    NSNumber *_minDaysTotalLogDuration;
    NSMutableArray *_notificationBlocks;
    PLStorageOperator *_storageOperator;
    bool_enabled;
}

@property(retain) PLSQLiteConnection * connection;
@property bool enabled;
@property(retain) NSDate * lastArchiveDate;
@property(retain) NSNumber * minDaysMainDB;
@property(retain) NSNumber * minDaysTotalLogDuration;
@property(retain) NSMutableArray * notificationBlocks;
@property PLStorageOperator * storageOperator;

+ (id)archivePathFromMetadataPath:(id)arg1;
+ (id)archivePaths;
+ (id)compressedArchivePaths;
+ (void)linkAllArchiveDBToCRFolder;
+ (id)metadataPathFromArchivePath:(id)arg1;
+ (id)metadataPathWithStartDate:(id)arg1 endDate:(id)arg2 andUUIDString:(id)arg3;
+ (id)metadataPaths;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)archive;
- (void)cleanupArchives;
- (void)compressAnyUncompressedArchives;
- (void)compressFileAtPath:(id)arg1;
- (id)connection;
- (void)crashMoverDidFinish;
- (void)dealloc;
- (bool)enabled;
- (id)init;
- (id)lastArchiveDate;
- (void)logArchiveEventFromStartDate:(id)arg1 toEndDate:(id)arg2;
- (id)minDaysMainDB;
- (id)minDaysTotalLogDuration;
- (id)notificationBlocks;
- (void)registerForArchivingNotificationUsingBlock:(id)arg1;
- (void)removeAllShmAndWal;
- (void)runActivity;
- (void)setConnection:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setLastArchiveDate:(id)arg1;
- (void)setMinDaysMainDB:(id)arg1;
- (void)setMinDaysTotalLogDuration:(id)arg1;
- (void)setNotificationBlocks:(id)arg1;
- (void)setStorageOperator:(id)arg1;
- (void)start;
- (void)stop;
- (id)storageOperator;
- (id)storageQueue;
- (void)systemTimeChangedByOffset:(double)arg1;
- (id)workQueue;

@end
