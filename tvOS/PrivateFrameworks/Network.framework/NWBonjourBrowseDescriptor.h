//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Network/NWBrowseDescriptor.h>

@class NSString;

@interface NWBonjourBrowseDescriptor : NWBrowseDescriptor
{
}

+ (id)descriptorWithType:(id)arg1 domain:(id)arg2;
+ (unsigned int)descriptorType;
@property(readonly, nonatomic) NSString *domain;
@property(readonly, nonatomic) NSString *type;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;

@end

