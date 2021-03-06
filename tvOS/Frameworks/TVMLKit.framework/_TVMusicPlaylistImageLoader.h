//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVMLKit/TVImageLoader-Protocol.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _TVMusicPlaylistImageLoader : NSObject <TVImageLoader>
{
    NSMutableArray *_pendingQueue;
    NSObject<OS_dispatch_queue> *_serialProcessingQueue;
    unsigned long long _maxConcurrentCount;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_executeRequest:(id)arg1;
- (void)_processFirstRequest:(id)arg1;
- (void)cancelLoad:(id)arg1;
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)imageKeyForObject:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

