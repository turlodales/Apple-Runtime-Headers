//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL;

@interface MFMessageFileLocations : NSObject
{
    BOOL _isPartial;
    NSURL *_primaryEmlxURL;
    NSURL *_attachmentDirectory;
    long long _libraryID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long libraryID; // @synthesize libraryID=_libraryID;
@property(readonly, nonatomic) BOOL isPartial; // @synthesize isPartial=_isPartial;
@property(retain, nonatomic) NSURL *attachmentDirectory; // @synthesize attachmentDirectory=_attachmentDirectory;
@property(readonly, nonatomic) NSURL *primaryEmlxURL; // @synthesize primaryEmlxURL=_primaryEmlxURL;
- (BOOL)_transferToNewFileLocation:(id)arg1 renameOrCopyBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (BOOL)moveToNewFileLocation:(id)arg1 error:(id *)arg2;
- (BOOL)copyToNewFileLocation:(id)arg1 replaceIfExists:(BOOL)arg2 error:(id *)arg3;
@property(readonly, copy, nonatomic) NSDictionary *attachmentURLsByPartNumber;
@property(readonly, copy, nonatomic) NSDictionary *emlxPartURLsByPartNumber;
- (id)description;
- (id)init;
- (id)initWithPrimaryEmlxURL:(id)arg1;

@end

