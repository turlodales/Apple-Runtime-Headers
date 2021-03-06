//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCPersonalizationFeature.h>

@class NSArray, NSString;

@interface FCPublisherTopicFeature : FCPersonalizationFeature
{
    NSString *_publisherTagID;
    NSString *_topicTagID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *topicTagID; // @synthesize topicTagID=_topicTagID;
@property(retain, nonatomic) NSString *publisherTagID; // @synthesize publisherTagID=_publisherTagID;
@property(readonly, nonatomic) NSArray *features;
- (id)fr_description;
- (id)initWithPublisherTagID:(id)arg1 topicTagID:(id)arg2;
- (id)initWithPersonalizationIdentifier:(id)arg1;
- (id)init;

@end

