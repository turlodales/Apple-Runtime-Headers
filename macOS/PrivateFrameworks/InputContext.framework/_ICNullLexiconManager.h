//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InputContext/_ICLexiconManaging-Protocol.h>

@class NSMutableArray;

@interface _ICNullLexiconManager : NSObject <_ICLexiconManaging>
{
    NSMutableArray *_contactObservers;
}

- (void).cxx_destruct;
- (void)hibernate;
- (void)warmUp;
- (void)unloadLexicons;
- (id)loadLexiconsUsingFilter:(CDUnknownBlockType)arg1;
- (id)loadLexicons:(CDUnknownBlockType)arg1;
- (void)removeContactObserver:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)addContactObserver:(CDUnknownBlockType)arg1;
- (id)init;

@end

