//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class CDDCloudKitRegisteredClient, NSDate, NSNumber, NSUUID;

__attribute__((visibility("hidden")))
@interface CDDCloudKitScheduledActivity : NSManagedObject
{
}

+ (id)entityName;
- (id)xpcActivityCriteria;
- (void)populateFromCriteria:(id)arg1;
@property(nonatomic) unsigned long long activityType;

// Remaining properties
@property(retain, nonatomic) NSNumber *activityTypeNum; // @dynamic activityTypeNum;
@property(retain, nonatomic) NSUUID *activityUUID; // @dynamic activityUUID;
@property(retain, nonatomic) NSNumber *isUserRequestedBackupTask; // @dynamic isUserRequestedBackupTask;
@property(retain, nonatomic) CDDCloudKitRegisteredClient *registeredClient; // @dynamic registeredClient;
@property(retain, nonatomic) NSDate *scheduledAt; // @dynamic scheduledAt;

@end

