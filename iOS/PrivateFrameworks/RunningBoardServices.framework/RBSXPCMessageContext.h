//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

@interface RBSXPCMessageContext : NSObject
{
    NSObject<OS_xpc_object> *_handoffToken;
    NSObject<OS_xpc_object> *_connection;
}

+ (id)currentContext;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
- (void)_unset;
- (void)_set;
- (void)handoffToQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)_initWithHandoffToken:(id)arg1;

@end

