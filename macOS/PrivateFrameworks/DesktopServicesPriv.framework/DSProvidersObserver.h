//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface DSProvidersObserver : NSObject
{
    struct TNodePtr fParentNode;
    struct TNSRef<NSObject, void> _token;
    TNSRef_55d335d4 _providers;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setProviders:(id)arg1;
- (TNSRef_55d335d4)providers;
- (void)stopObserving;
- (void)startObserving;

@end

