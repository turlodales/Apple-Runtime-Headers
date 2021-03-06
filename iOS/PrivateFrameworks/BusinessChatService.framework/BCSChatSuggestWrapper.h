//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BusinessChatService/NSCopying-Protocol.h>

@class BCSChatSuggestMessage, NSString;

__attribute__((visibility("hidden")))
@interface BCSChatSuggestWrapper : PBCodable <NSCopying>
{
    BCSChatSuggestMessage *_message;
    NSString *_phone;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BCSChatSuggestMessage *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *phone; // @synthesize phone=_phone;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasMessage;
@property(readonly, nonatomic) _Bool hasPhone;

@end

