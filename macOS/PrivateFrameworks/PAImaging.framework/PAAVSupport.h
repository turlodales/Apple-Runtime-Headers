//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PAAVSupport : NSObject
{
}

+ (id)defaultSloMoOperationIfNeededForAsset:(id)arg1 trim:(id)arg2 wantsInset:(BOOL)arg3;
+ (id)_ensureSloMoIsPresentInPlaybackSettings:(id)arg1 asset:(id)arg2 error:(id *)arg3;
+ (id)_ensureNaturalDurationIsPresentForPlaybackSettings:(id)arg1 asset:(id)arg2 assetURL:(id)arg3 error:(id *)arg4;
+ (id)finalizePlaybackSettings:(id)arg1 assetURL:(id)arg2 error:(id *)arg3;

@end

