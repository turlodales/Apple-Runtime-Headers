//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface ATXFeedbackStateBuilder : NSObject
{
    NSMutableData *_data;
    int _predictionCount;
    _Bool _finished;
}

- (void).cxx_destruct;
- (id)finish;
- (void)recordPrediction:(id)arg1 actionHash:(unsigned int)arg2 totalScore:(float)arg3 scoreInputs:(const float *)arg4;
- (id)init;
- (id)initWithABGroup:(id)arg1 assetVersion:(long)arg2;

@end

