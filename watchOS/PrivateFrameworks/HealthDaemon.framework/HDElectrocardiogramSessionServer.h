//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDStandardTaskServer.h>

#import <HealthDaemon/HKElectrocardiogramSessionServerInterface-Protocol.h>

@class HKElectrocardiogramSessionConfiguration, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HDElectrocardiogramSessionServer : HDStandardTaskServer <HKElectrocardiogramSessionServerInterface>
{
    HKElectrocardiogramSessionConfiguration *_sessionConfiguration;
    NSObject<OS_dispatch_queue> *_queue;
    int _sessionState;
}

+ (_Bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id *)arg3;
+ (Class)configurationClass;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;
- (void).cxx_destruct;
- (void)_queue_notifyClientDidDetectEmergencyCallbackModeWithEndDate:(id)arg1;
- (void)_queue_notifyClientDidEndWithEndReason:(int)arg1 error:(id)arg2;
- (void)_queue_notifyClientDidDetectContactAtDate:(id)arg1;
- (void)_queue_abortSensorSession;
- (void)_queue_abortWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_startWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_abortWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_startWithCompletion:(CDUnknownBlockType)arg1;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

