//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSString;

@interface HDCodableEntityIdentifier : PBCodable <NSCopying>
{
    long long _identifier;
    NSString *_schema;
    struct {
        unsigned int identifier:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) long long identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *schema; // @synthesize schema=_schema;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasIdentifier;
@property(readonly, nonatomic) _Bool hasSchema;

@end

