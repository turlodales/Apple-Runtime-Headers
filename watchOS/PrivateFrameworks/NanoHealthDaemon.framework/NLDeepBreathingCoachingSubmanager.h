//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoHealthDaemon/NLBridgeSettingsObserver-Protocol.h>
#import <NanoHealthDaemon/NLCoachingSubmanager-Protocol.h>

@class FITypicalDayActivityModel, NLActivityAlarmMonitor, NLBridgeSettings, NSString;
@protocol HDHealthDaemon, NLCoachingSubmanagerDelegate, OS_dispatch_queue;

@interface NLDeepBreathingCoachingSubmanager : NSObject <NLBridgeSettingsObserver, NLCoachingSubmanager>
{
    id <HDHealthDaemon> _healthDaemon;
    NLBridgeSettings *_bridgeSettings;
    NLActivityAlarmMonitor *_alarmMonitor;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _isDeepBreathingAppInstalled;
    struct os_unfair_lock_s _lock;
    _Bool _shouldFireOnNextPoll;
    id <NLCoachingSubmanagerDelegate> coachingSubmanagerDelegate;
    FITypicalDayActivityModel *typicalDayModel;
}

+ (id)submanagerIdentifier;
- (void).cxx_destruct;
@property _Bool shouldFireOnNextPoll; // @synthesize shouldFireOnNextPoll=_shouldFireOnNextPoll;
@property(nonatomic) __weak FITypicalDayActivityModel *typicalDayModel; // @synthesize typicalDayModel;
@property(nonatomic) __weak id <NLCoachingSubmanagerDelegate> coachingSubmanagerDelegate; // @synthesize coachingSubmanagerDelegate;
- (_Bool)_hasDeepBreathingAppBeenInstalled;
- (void)_setDeepBreathingAppInstalled:(_Bool)arg1;
- (void)cancelScheduledTask;
- (void)_applicationsUninstalled:(id)arg1;
- (void)_applicationsInstalled:(id)arg1;
- (void)privacySettingsDidChange:(id)arg1;
- (void)settingsDidChange:(id)arg1;
- (_Bool)requiresCoachingConditionsOnRequests;
- (int)minimumRecentActiveDays;
- (_Bool)requiresMoveGoal;
- (void)coachingAlertRequestDidCompleteWithResponse:(id)arg1;
- (void)coachingAlertRequestsWereProcessed:(id)arg1 acceptedRequests:(id)arg2;
- (id)coachingAlertRequestsForPollingReason:(unsigned int)arg1;
- (_Bool)alertsEnabled;
- (id)coachingAlertRequestsWhenForcedWithArguments:(id)arg1;
- (void)wristOnStateChangedTo:(_Bool)arg1;
- (void)daemonAndCoachingManagerReady;
- (void)_setScheduledAlertDate:(id)arg1;
- (id)_nextFireDateForIntervalWithFirstOnWristTodayDate:(id)arg1 baseDate:(id)arg2;
- (double)_alertInterval;
- (int)_remindersPerDay;
- (void)_rescheduleAlert;
- (id)initWithHealthDaemon:(id)arg1 bridgeSettings:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

