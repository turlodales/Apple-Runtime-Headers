//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class NSDateInterval;

@interface GEORoutePreloaderStatistics : NSObject <NSSecureCoding>
{
    NSDateInterval *_dateInterval;
    int _transportType;
    unsigned int _tilesPreloaded;
    unsigned int _tilesUsed;
    unsigned int _tilesMissed;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) unsigned int tilesMissed; // @synthesize tilesMissed=_tilesMissed;
@property(nonatomic) unsigned int tilesUsed; // @synthesize tilesUsed=_tilesUsed;
@property(nonatomic) unsigned int tilesPreloaded; // @synthesize tilesPreloaded=_tilesPreloaded;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(readonly, copy, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateInterval:(id)arg1 transportType:(int)arg2 tilesPreloaded:(unsigned int)arg3 tilesUsed:(unsigned int)arg4 tilesMissed:(unsigned int)arg5;

@end

