//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DeviceManagement/CATOperation.h>

@class CATOperationQueue;

@interface CRKWaitForProgressOperation : CATOperation
{
    CATOperationQueue *_operationQueue;
    CATOperation *_operation;
    long long _expectedTotalUnitCount;
    long long _expctedCompletedUnitCount;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long expctedCompletedUnitCount; // @synthesize expctedCompletedUnitCount=_expctedCompletedUnitCount;
@property(readonly, nonatomic) long long expectedTotalUnitCount; // @synthesize expectedTotalUnitCount=_expectedTotalUnitCount;
@property(readonly, nonatomic) CATOperation *operation; // @synthesize operation=_operation;
@property(readonly, nonatomic) CATOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void)observedOperationDidFail:(id)arg1;
- (void)observedOperationDidProgress:(id)arg1;
- (void)main;
- (void)cancel;
- (_Bool)isAsynchronous;
- (id)initWithOperationQueue:(id)arg1 operation:(id)arg2 expectedCompletedUnitCount:(long long)arg3 expectedTotalUnitCount:(long long)arg4;

@end

