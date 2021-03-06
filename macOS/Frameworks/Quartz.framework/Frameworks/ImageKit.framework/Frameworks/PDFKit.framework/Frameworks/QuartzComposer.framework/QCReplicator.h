//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzComposer/QCPatch.h>

@class QCIndexPort, QCInterpolationPort, QCNumberPort;

__attribute__((visibility("hidden")))
@interface QCReplicator : QCPatch
{
    QCIndexPort *inputCopies;
    QCInterpolationPort *inputInterpolation;
    QCNumberPort *inputScale;
    QCNumberPort *inputOrientationX;
    QCNumberPort *inputOrientationY;
    QCNumberPort *inputOrientationZ;
    QCNumberPort *inputOriginX;
    QCNumberPort *inputOriginY;
    QCNumberPort *inputOriginZ;
    QCNumberPort *inputRotationX;
    QCNumberPort *inputRotationY;
    QCNumberPort *inputRotationZ;
    QCNumberPort *inputTranslationX;
    QCNumberPort *inputTranslationY;
    QCNumberPort *inputTranslationZ;
}

+ (BOOL)supportsOptimizedExecutionForIdentifier:(id)arg1;
+ (int)executionModeWithIdentifier:(id)arg1;
+ (BOOL)isSafe;
- (BOOL)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (BOOL)setup:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

