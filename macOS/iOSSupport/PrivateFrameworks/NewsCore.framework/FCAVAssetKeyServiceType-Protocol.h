//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, NSURL;

@protocol FCAVAssetKeyServiceType
- (void)fetchContentKeyWithURI:(NSURL *)arg1 spcData:(NSData *)arg2 completionHandler:(void (^)(NSData *, NSDate *, NSError *))arg3;
- (void)fetchAppCertificateWithCompletionHandler:(void (^)(NSData *, NSError *))arg1;
@end

