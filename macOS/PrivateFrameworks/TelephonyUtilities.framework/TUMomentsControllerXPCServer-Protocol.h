//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSDictionary, NSString;
@protocol TUMomentsControllerXPCClient;

@protocol TUMomentsControllerXPCServer <NSObject>
- (void)unregisterClient:(id <TUMomentsControllerXPCClient>)arg1;
- (void)registerClient:(id <TUMomentsControllerXPCClient>)arg1;
- (oneway void)endRequestWithTransactionID:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (oneway void)startRequestWithMediaType:(int)arg1 forStreamToken:(long long)arg2 requesteeID:(NSString *)arg3 reply:(void (^)(NSString *, NSError *))arg4;
- (oneway void)unregisterStreamToken:(long long)arg1 reply:(void (^)(NSError *))arg2;
- (oneway void)registerStreamToken:(long long)arg1 requesterID:(NSString *)arg2 remoteIDSDestinations:(NSDictionary *)arg3 remoteMomentsAvailable:(BOOL)arg4 reply:(void (^)(TUMomentsCapabilities *, NSError *))arg5;
- (oneway void)registerXPCClientWithReply:(void (^)(void))arg1;
@end

