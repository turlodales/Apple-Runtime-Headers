//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary;

@interface DEManifest : NSObject
{
    NSDictionary *_contents;
    NSData *_summary;
    NSData *_version;
    NSData *_keyVersion;
}

+ (id)manifestWithContentsOfURL:(id)arg1 encrypted:(BOOL)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *keyVersion; // @synthesize keyVersion=_keyVersion;
@property(retain, nonatomic) NSData *version; // @synthesize version=_version;
@property(retain, nonatomic) NSData *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) NSDictionary *contents; // @synthesize contents=_contents;
- (BOOL)writeToURL:(id)arg1;
- (BOOL)writeToURL:(id)arg1 keyId:(unsigned long long)arg2 multipart:(BOOL)arg3;
- (id)init;
- (id)initWithContents:(id)arg1 summary:(id)arg2;
- (id)initWithContents:(id)arg1 summary:(id)arg2 version:(id)arg3 keyVersion:(id)arg4;

@end

