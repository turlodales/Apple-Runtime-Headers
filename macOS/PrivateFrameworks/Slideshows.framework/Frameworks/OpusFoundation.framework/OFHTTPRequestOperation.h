//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusFoundation/OFHTTPOperation.h>

@class NSData, NSMutableData;

@interface OFHTTPRequestOperation : OFHTTPOperation
{
    unsigned long long _method;
    NSData *_body;
    NSMutableData *_receivedData;
}

+ (id)operationWithURL:(id)arg1 headers:(id)arg2 method:(unsigned long long)arg3;
+ (id)operationWithURL:(id)arg1 headers:(id)arg2 body:(id)arg3;
@property(retain) NSMutableData *receivedData; // @synthesize receivedData=_receivedData;
@property(retain) NSData *body; // @synthesize body=_body;
@property unsigned long long method; // @synthesize method=_method;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)cleanupOperation;
- (void)finishOperation;
- (void)cancelOperation;
- (unsigned long long)launchOperation;
- (void)dealloc;
- (id)initWithURL:(id)arg1 headers:(id)arg2 method:(unsigned long long)arg3;
- (id)initWithURL:(id)arg1 headers:(id)arg2 body:(id)arg3;
- (id)init;

@end

