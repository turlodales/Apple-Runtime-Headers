//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CABehavior.h>

@class NSArray;

@interface CADynamicsBehavior : CABehavior
{
}

+ (id)defaultValueForKey:(id)arg1;
@property _Bool reactsToCollisions;
@property float angularDrag;
@property float drag;
@property float springScale;
@property double collisionInterval;
@property float stoppedAngularVelocity;
@property float stoppedVelocity;
@property double minimumTimeStep;
@property double timeStep;
@property(copy) NSArray *forceFields;
@property(copy) NSArray *springs;
- (struct Object *)CA_copyRenderValue;

@end

