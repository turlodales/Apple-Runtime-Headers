//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXCuratedLibraryLayoutAnimationHelper.h>

@interface _PXCuratedLibraryLayoutSkimmingSlideshowAnimationHelper : PXCuratedLibraryLayoutAnimationHelper
{
    unsigned long long _userInterfaceDirection;
    struct PXSimpleIndexPath _fromIndexPath;
    struct PXSimpleIndexPath _toIndexPath;
}

- (void)_adjustGeometries:(inout CDStruct_ac168a83 *)arg1 styles:(inout CDStruct_506f5052 *)arg2 infos:(inout CDStruct_9d1ebe49 *)arg3 spriteIndexRange:(struct _PXGSpriteIndexRange)arg4 appearing:(_Bool)arg5;
- (void)animation:(id)arg1 adjustGeometries:(inout CDStruct_ac168a83 *)arg2 styles:(inout CDStruct_506f5052 *)arg3 infos:(inout CDStruct_9d1ebe49 *)arg4 forSpriteDisappearingFromRootIndexRange:(struct _PXGSpriteIndexRange)arg5;
- (void)animation:(id)arg1 adjustGeometries:(inout CDStruct_ac168a83 *)arg2 styles:(inout CDStruct_506f5052 *)arg3 infos:(inout CDStruct_9d1ebe49 *)arg4 forSpriteAppearingIntoRootIndexRange:(struct _PXGSpriteIndexRange)arg5;
- (id)animation:(id)arg1 doubleSidedAnimatedSpriteIndexesForModifiedSpriteIndexes:(id)arg2 rootLayout:(id)arg3 presentedGeometries:(const CDStruct_ac168a83 *)arg4 styles:(const CDStruct_506f5052 *)arg5 infos:(const CDStruct_9d1ebe49 *)arg6;
- (_Bool)_shoulAnimateSpriteWithInfo:(const CDStruct_9d1ebe49 *)arg1 matchingSectionIndexPath:(struct PXSimpleIndexPath)arg2 spriteKind:(out unsigned char *)arg3;
- (double)animationDuration;
- (long long)animationCurve;
- (_Bool)wantsDoubleSidedAnimations;
- (void)setUserData:(id)arg1;
- (id)initWithLayout:(id)arg1;

@end

