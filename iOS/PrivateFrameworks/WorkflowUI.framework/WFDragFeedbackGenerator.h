//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _UIDragSnappingFeedbackGenerator;

@interface WFDragFeedbackGenerator : NSObject
{
    long long _activeDragSessions;
    _UIDragSnappingFeedbackGenerator *_feedbackGenerator;
}

- (void).cxx_destruct;
@property(nonatomic) __weak _UIDragSnappingFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(nonatomic) long long activeDragSessions; // @synthesize activeDragSessions=_activeDragSessions;
- (void)objectSnapped;
- (void)draggedObjectLanded;
- (void)draggedObjectLifted;
- (void)dropTargetUpdated;
- (void)positionUpdated;
- (void)userInteractionCancelled;
- (void)userInteractionEnded;
- (void)userInteractionStarted;
- (void)performFeedbackWithDelay:(double)arg1 insideBlock:(CDUnknownBlockType)arg2;
- (void)draggingItemDropped;
- (void)draggingCancelled;
- (void)draggingItemSnapped;
- (void)draggingPositionUpdated;
- (void)draggingStarted;
- (id)initWithCollectionView:(id)arg1;

@end

