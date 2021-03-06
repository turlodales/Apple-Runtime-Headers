//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController, UIWindow;

@interface CKStarkManager : NSObject
{
    UIViewController *_starkRootViewController;
    UIWindow *_starkWindow;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) UIWindow *starkWindow; // @synthesize starkWindow=_starkWindow;
@property(retain, nonatomic) UIViewController *starkRootViewController; // @synthesize starkRootViewController=_starkRootViewController;
@property(readonly, nonatomic) _Bool isStarkConnected;
- (id)_assistantContextForRecipientID:(id)arg1;
- (void)activateForRecipient:(id)arg1;
- (id)_assistantContextForConversation:(id)arg1;
- (void)activateForConversation:(id)arg1;
- (void)detachStarkFromWindow:(id)arg1;
- (void)attachStarkToWindow:(id)arg1;

@end

