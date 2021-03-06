//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EmailCore/ECTransferActionReplayer.h>

#import <Message/ECTransferActionReplayerSubclassMethods-Protocol.h>

@class MFDAMessageStore, NSString;

@interface MFDATransferActionReplayer : ECTransferActionReplayer <ECTransferActionReplayerSubclassMethods>
{
    MFDAMessageStore *_store;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MFDAMessageStore *store; // @synthesize store=_store;
- (_Bool)isRecoverableError:(id)arg1;
- (_Bool)downloadFailed;
- (id)fetchBodyDataForRemoteID:(id)arg1 mailboxURL:(id)arg2;
- (id)moveItems:(id)arg1 destinationMailboxURL:(id)arg2;
- (id)copyItems:(id)arg1 destinationMailboxURL:(id)arg2;
- (_Bool)deleteSourceMessagesFromTransferItems:(id)arg1;
- (id)appendItem:(id)arg1 mailboxURL:(id)arg2;
- (id)replayActionUsingStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

