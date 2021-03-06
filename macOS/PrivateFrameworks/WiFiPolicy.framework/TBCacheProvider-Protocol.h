//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WiFiPolicy/NSObject-Protocol.h>

@protocol TBFetchRequest, TBFetchResponse;

@protocol TBCacheProvider <NSObject>
- (void)removeWithFetchRequest:(id <TBFetchRequest>)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)prune3BarsNetworks:(unsigned long long)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)removeAllWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)cacheFetchResponse:(id <TBFetchResponse>)arg1 completionHandler:(void (^)(NSError *))arg2;
@end

