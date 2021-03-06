//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NearField/NFReaderSessionInterface-Protocol.h>

@class NSArray, NSData, NSDictionary;

@protocol NFReaderSessionInternalInterface <NFReaderSessionInterface>
- (oneway void)felicaRequestService:(NSArray *)arg1 callback:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)execRemoteAdminScript:(NSDictionary *)arg1 callback:(void (^)(NSDictionary *, unsigned long long, double, NSError *))arg2;
- (oneway void)felicaStateForSystemCode:(NSData *)arg1 withRequestService:(NSArray *)arg2 withBlockReadList:(NSArray *)arg3 performSearchServiceCode:(BOOL)arg4 callback:(void (^)(NSDictionary *, NSError *))arg5;
- (oneway void)formatNdefWithKey:(NSData *)arg1 callback:(void (^)(NSError *))arg2;
- (oneway void)skipMifareClassification:(void (^)(NSError *))arg1;
- (oneway void)startPollingForTechnology:(unsigned int)arg1 callback:(void (^)(NSError *))arg2;
@end

