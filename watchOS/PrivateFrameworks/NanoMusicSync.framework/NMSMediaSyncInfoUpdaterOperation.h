//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPAsyncOperation.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface NMSMediaSyncInfoUpdaterOperation : MPAsyncOperation
{
    NSDictionary *_syncInfo;
}

+ (id)sharedLibraryRequestQueue;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *syncInfo; // @synthesize syncInfo=_syncInfo;
- (void)execute;

@end

