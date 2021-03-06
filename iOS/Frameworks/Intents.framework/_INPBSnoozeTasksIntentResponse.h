//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSnoozeTasksIntentResponse-Protocol.h>

@class NSArray, NSString;

@interface _INPBSnoozeTasksIntentResponse : PBCodable <_INPBSnoozeTasksIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;
    _Bool __encodeLegacyGloryData;
    NSArray *_snoozedTasks;
}

+ (_Bool)supportsSecureCoding;
+ (Class)snoozedTasksType;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(copy, nonatomic) NSArray *snoozedTasks; // @synthesize snoozedTasks=_snoozedTasks;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)snoozedTasksAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long snoozedTasksCount;
- (void)addSnoozedTasks:(id)arg1;
- (void)clearSnoozedTasks;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

