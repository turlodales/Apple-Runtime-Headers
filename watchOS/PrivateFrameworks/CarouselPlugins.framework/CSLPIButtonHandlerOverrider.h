//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CSLPIButtonHandlerOverride;

@interface CSLPIButtonHandlerOverrider : NSObject
{
    float _priority;
    id <CSLPIButtonHandlerOverride> _override;
}

+ (id)overriderWithOverride:(id)arg1 andPriority:(float)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <CSLPIButtonHandlerOverride> override; // @synthesize override=_override;
@property(nonatomic) float priority; // @synthesize priority=_priority;

@end

