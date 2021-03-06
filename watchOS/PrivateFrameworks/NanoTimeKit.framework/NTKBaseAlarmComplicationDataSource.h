//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKit/NTKComplicationDataSource.h>

@class MTAlarmManager, NTKNextAlarm, NTKTimelineEntryModel;

@interface NTKBaseAlarmComplicationDataSource : NTKComplicationDataSource
{
    _Bool _listeningForNotifications;
    MTAlarmManager *_alarmManager;
    NTKTimelineEntryModel *_currentAlarmModel;
    NTKNextAlarm *_nextAlarm;
}

+ (id)_nextTriggerForAlarm:(id)arg1 afterDate:(id)arg2;
+ (_Bool)acceptsComplicationFamily:(int)arg1 forDevice:(id)arg2;
+ (_Bool)acceptsComplicationType:(unsigned int)arg1 forDevice:(id)arg2;
- (void).cxx_destruct;
@property(retain) NTKNextAlarm *nextAlarm; // @synthesize nextAlarm=_nextAlarm;
@property(retain) NTKTimelineEntryModel *currentAlarmModel; // @synthesize currentAlarmModel=_currentAlarmModel;
@property(retain, nonatomic) MTAlarmManager *alarmManager; // @synthesize alarmManager=_alarmManager;
- (void)_alarmStoreChangedNotification:(id)arg1;
- (void)_stopObserving;
- (void)_startObserving;
- (id)_activeAlarmEntryForNextAlarm:(id)arg1 date:(id)arg2;
- (id)_alarmComplicationFutureWithDate:(id)arg1;
- (void)resume;
- (void)pause;
- (id)emptyEntryModel;
- (id)currentTimelineEntry;
- (void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (id)complicationApplicationIdentifier;
- (void)getCurrentTimelineEntryWithHandler:(CDUnknownBlockType)arg1;
- (id)currentSwitcherTemplate;
- (void)getSupportedTimeTravelDirectionsWithHandler:(CDUnknownBlockType)arg1;
- (Class)richComplicationDisplayViewClassForDevice:(id)arg1;
- (void)dealloc;
- (id)initWithComplication:(id)arg1 family:(int)arg2 forDevice:(id)arg3;

@end

