//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, _DASActivity;

@interface CSLPrelaunchActivity : NSObject
{
    _Bool _firstPrelaunch;
    NSString *_bundleID;
    int _priority;
    NSDate *_schedule;
    _DASActivity *_duetActivity;
    double _leeway;
}

+ (double)leewayForPriority:(int)arg1;
+ (id)prelaunchActivityFor:(id)arg1 priority:(int)arg2 schedule:(id)arg3 firstPrelaunch:(_Bool)arg4;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) _DASActivity *duetActivity; // @synthesize duetActivity=_duetActivity;
@property(readonly, nonatomic) _Bool firstPrelaunch; // @synthesize firstPrelaunch=_firstPrelaunch;
@property(readonly, nonatomic) double leeway; // @synthesize leeway=_leeway;
@property(readonly, nonatomic) NSDate *schedule; // @synthesize schedule=_schedule;
@property(readonly, nonatomic) int priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (unsigned int)duetPriority;
- (id)name;
- (id)description;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)init;
- (id)initWithBundleID:(id)arg1 priority:(int)arg2 schedule:(id)arg3 leeway:(double)arg4 firstPrelaunch:(_Bool)arg5;

@end

