//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreWiFi/NSObject-Protocol.h>

@class CWFXPCConnection, CWFXPCListener, CWFXPCRequest;

@protocol CWFXPCListenerDelegate <NSObject>
- (void)XPCListener:(CWFXPCListener *)arg1 invalidatedXPCConnection:(CWFXPCConnection *)arg2;
- (void)XPCListener:(CWFXPCListener *)arg1 XPCConnection:(CWFXPCConnection *)arg2 receivedXPCRequest:(CWFXPCRequest *)arg3;
@end

