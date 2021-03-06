//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngine/RETrainingContext.h>

@class NSArray, NSMutableDictionary;

@interface REUITrainingContext : RETrainingContext
{
    NSMutableDictionary *_becameVisibleDates;
    NSMutableDictionary *_visibilityDurations;
    _Bool _resetsWhenResignsCurrent;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool resetsWhenResignsCurrent; // @synthesize resetsWhenResignsCurrent=_resetsWhenResignsCurrent;
- (_Bool)performSimulationCommand:(id)arg1 withOptions:(id)arg2;
- (void)_willResignCurrent;
- (id)_lowerElementsThanElement:(id)arg1;
- (id)_higherElementsThanElement:(id)arg1;
- (id)_visibleElements;
- (id)_interactionForElement:(id)arg1;
- (void)resetContext;
- (_Bool)isDisplayingElementWithIdentifier:(id)arg1;
- (void)elementWithIdentifierDidEndDisplay:(id)arg1;
- (void)_trainDwellForElement:(id)arg1 withInterval:(double)arg2;
- (void)elementWithIdentifierDidDisplay:(id)arg1;
- (void)selectElementWithIdentifier:(id)arg1;
- (id)init;
- (id)interactionTypeForElement:(id)arg1;
- (_Bool)elementIsAvailable:(id)arg1;
- (id)elementsOrdered:(unsigned long long)arg1 relativeToElement:(id)arg2;
@property(readonly, nonatomic) NSArray *visibleElementIdentifiers;
@property(readonly, nonatomic) unsigned long long onScreenElementCount;
@property(readonly, nonatomic) double minimumPositiveDwellTime;
@property(readonly, nonatomic) double maximumNegativeDwellTime;

@end

