//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/NSObject-Protocol.h>

@class CAMDynamicShutterControl;

@protocol CAMDynamicShutterControlDelegate <NSObject>

@optional
- (void)shutterControlTouchAttemptedWhileDisabled:(CAMDynamicShutterControl *)arg1;
- (void)dynamicShutterControlDidDismissCounter:(CAMDynamicShutterControl *)arg1;
- (void)dynamicShutterControlDidPresentCounter:(CAMDynamicShutterControl *)arg1;
- (void)dynamicShutterControlDidPressLockButton:(CAMDynamicShutterControl *)arg1;
- (void)dynamicShutterControlDidStop:(CAMDynamicShutterControl *)arg1;
- (void)dynamicShutterControlDidStart:(CAMDynamicShutterControl *)arg1;
- (void)dynamicShutterControlGesturesDidCancel:(CAMDynamicShutterControl *)arg1;
- (void)dynamicShutterControlGesturesDidEnd:(CAMDynamicShutterControl *)arg1;
- (void)dynamicShutterControlGesturesDidBegin:(CAMDynamicShutterControl *)arg1;
- (void)dynamicShutterControlDidShortPress:(CAMDynamicShutterControl *)arg1;
- (_Bool)dynamicShutterControlShouldBeginGesture:(CAMDynamicShutterControl *)arg1;
@end

