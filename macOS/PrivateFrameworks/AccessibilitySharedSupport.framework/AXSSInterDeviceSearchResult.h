//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MCPeerID, NSString;

@interface AXSSInterDeviceSearchResult : NSObject
{
    NSString *_deviceType;
    MCPeerID *_peerID;
}

+ (id)searchResultWithPeerID:(id)arg1 deviceType:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MCPeerID *peerID; // @synthesize peerID=_peerID;
@property(copy, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *name;
- (id)initWithPeerID:(id)arg1 deviceType:(id)arg2;

@end

