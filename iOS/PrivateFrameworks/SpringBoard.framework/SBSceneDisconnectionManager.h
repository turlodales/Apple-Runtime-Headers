//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SBSceneDisconnectionManager : NSObject
{
    _Bool _isExecuting;
    unsigned long long _numberOfRecentScenesExcludedFromDisconnection;
}

+ (id)sharedManager;
@property(nonatomic) _Bool isExecuting; // @synthesize isExecuting=_isExecuting;
@property(nonatomic) unsigned long long numberOfRecentScenesExcludedFromDisconnection; // @synthesize numberOfRecentScenesExcludedFromDisconnection=_numberOfRecentScenesExcludedFromDisconnection;
- (unsigned long long)positionOf:(id)arg1 inSwitcher:(id)arg2;
- (id)liveScenesForApplication:(id)arg1;
- (id)sceneManager;
- (void)disconnectScenes:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)shouldDisconnectScene:(id)arg1 inSwitcher:(id)arg2;
- (void)_beginSceneCleanupWithBackgroundedSceneEntities:(id)arg1;
- (id)init;

@end

