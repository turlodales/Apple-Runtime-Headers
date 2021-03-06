//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFAccessoryVendor-Protocol.h>
#import <Home/NSObject-Protocol.h>

@class HFRoomBuilder, NAFuture, NSArray, NSString;
@protocol HFIconDescriptor;

@protocol HFServiceLikeBuilder <HFAccessoryVendor, NSObject>
@property(retain, nonatomic) HFRoomBuilder *room;
@property(readonly, nonatomic) BOOL supportsFavoriting;
@property(readonly, nonatomic) NSString *originalName;
@property(copy, nonatomic) NSString *name;
- (NAFuture *)removeItemFromHome;

@optional
@property(readonly, nonatomic) NSArray *availableIconDescriptors;
@property(retain, nonatomic) id <HFIconDescriptor> iconDescriptor;
@property(nonatomic) BOOL isFavorite;
@end

