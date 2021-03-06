//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMSnapshotView;
@protocol CAMViewfinderTransitionable;

@interface CAMViewfinderFlipTransition : NSObject
{
    id <CAMViewfinderTransitionable> __transitionableViewfinder;
    CAMSnapshotView *__frontSnapshotView;
    CAMSnapshotView *__backSnapshotView;
    CAMSnapshotView *__targetSnapshotView;
    unsigned long long __currentAnimationID;
}

- (void).cxx_destruct;
@property(nonatomic, setter=_setCurrentAnimationID:) unsigned long long _currentAnimationID; // @synthesize _currentAnimationID=__currentAnimationID;
@property(retain, nonatomic, setter=_setTargetSnapshotView:) CAMSnapshotView *_targetSnapshotView; // @synthesize _targetSnapshotView=__targetSnapshotView;
@property(retain, nonatomic, setter=_setBackSnapshotView:) CAMSnapshotView *_backSnapshotView; // @synthesize _backSnapshotView=__backSnapshotView;
@property(retain, nonatomic, setter=_setFrontSnapshotView:) CAMSnapshotView *_frontSnapshotView; // @synthesize _frontSnapshotView=__frontSnapshotView;
@property(readonly, nonatomic) __weak id <CAMViewfinderTransitionable> _transitionableViewfinder; // @synthesize _transitionableViewfinder=__transitionableViewfinder;
- (void)completeTransitionToLivePreviewWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_snapshotFlipAnimationFromValue:(double)arg1 toValue:(double)arg2;
- (double)_backSnapshotTargetRadiansForDirection:(unsigned long long)arg1 frontSnapshotRadians:(double)arg2;
- (double)_frontSnapshotTargetRadiansForDirection:(unsigned long long)arg1 fromRadians:(double)arg2;
- (void)_getCurrentRadians:(out double *)arg1 targetRadians:(out double *)arg2 forDirection:(unsigned long long)arg3 withAnimation:(id)arg4 onFrontSnapshotLayer:(id)arg5;
- (void)performFlipTransitionWithDirection:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_cleanupFromFlipTransition;
- (id)initWithTransitionableViewfinder:(id)arg1;

@end

