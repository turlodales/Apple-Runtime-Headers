//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <LoginUILogViewer/NSObject-Protocol.h>

@class LUILogContentViewController, NSDate;

@protocol LUILogContentViewControllerDelegate <NSObject>
- (NSDate *)logContentViewControllerLogEndDate:(LUILogContentViewController *)arg1;
- (NSDate *)logContentViewControllerLogStartDate:(LUILogContentViewController *)arg1;
- (void)logContentViewController:(LUILogContentViewController *)arg1 didSelectDateForLog:(NSDate *)arg2;
- (void)logContentViewController:(LUILogContentViewController *)arg1 didSelectLogOptionWithTimeInterval:(double)arg2;
@end

