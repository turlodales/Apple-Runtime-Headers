//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDDeviceManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_deviceIDs;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *deviceIDs; // @synthesize deviceIDs=_deviceIDs;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)deviceIdentifierForContext:(id)arg1 skipInMemoryCache:(_Bool)arg2 createIfNecessary:(_Bool)arg3;
- (id)deviceIdentifierForContext:(id)arg1;
- (void)_deleteDeviceIdentifierForContext:(id)arg1;
- (void)_saveDeviceIdentifier:(id)arg1 forContext:(id)arg2;
- (struct __CFDictionary *)createQueryForDeviceIdentifierInContext:(id)arg1;
- (id)_savedDeviceIdentifierForContext:(id)arg1;
- (id)_lookupKeyForContext:(id)arg1;
- (id)_serviceForContext:(id)arg1;
- (id)init;

@end

