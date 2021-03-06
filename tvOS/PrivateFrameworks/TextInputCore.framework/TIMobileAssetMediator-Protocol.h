//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TextInputCore/NSObject-Protocol.h>

@class NSArray, TIAsset;

@protocol TIMobileAssetMediator <NSObject>
- (void)downloadUninstalledAssetsMatching:(NSArray *)arg1 continuation:(void (^)(void))arg2;
- (_Bool)tryToPurgeAsset:(TIAsset *)arg1;
- (NSArray *)fetchLatestInstalledAssetsMatchingAny:(NSArray *)arg1;
- (NSArray *)fetchLatestAssetsMatchingAny:(NSArray *)arg1;
- (NSArray *)fetchInstalledAssetInformation;
@end

