//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFNetAddressInternal.h>

__attribute__((visibility("hidden")))
@interface _HMFNetAddressIPV6 : HMFNetAddressInternal
{
    struct sockaddr_in6 *_internal;
}

@property(readonly, nonatomic) struct sockaddr_in6 *internal; // @synthesize internal=_internal;
- (id)dataUsingEncoding:(unsigned int)arg1;
- (id)addressString;
- (unsigned int)addressFamily;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)initWithSocketAddress:(const struct sockaddr *)arg1;
- (id)init;

@end

