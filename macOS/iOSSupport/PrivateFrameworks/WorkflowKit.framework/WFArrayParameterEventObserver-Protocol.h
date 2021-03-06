//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFParameterEventObserver-Protocol.h>

@class WFArrayParameter, WFPropertyListParameterValue;

@protocol WFArrayParameterEventObserver <WFParameterEventObserver>

@optional
- (void)arrayParameter:(WFArrayParameter *)arg1 confirmDeletionOfItemAtIndex:(unsigned long long)arg2 withHandler:(void (^)(BOOL))arg3;
- (void)arrayParameter:(WFArrayParameter *)arg1 itemWasDeletedAtIndex:(unsigned long long)arg2;
- (void)arrayParameter:(WFArrayParameter *)arg1 itemWasUpdatedAtIndex:(unsigned long long)arg2 toValue:(WFPropertyListParameterValue *)arg3;
- (void)arrayParameter:(WFArrayParameter *)arg1 itemWasMovedFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)arrayParameter:(WFArrayParameter *)arg1 itemWasAppended:(WFPropertyListParameterValue *)arg2;
@end

