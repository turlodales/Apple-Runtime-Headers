//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FPUIManager : NSObject
{
}

+ (id)extensionForPlugin:(id)arg1;
+ (id)uiExtensionPluginForProviderDomain:(id)arg1;
+ (void)getUIExtensionPlugin:(id *)arg1 nonUIExtensionPlugin:(id *)arg2 forProviderDomain:(id)arg3;
+ (BOOL)isAction:(id)arg1 eligibleForItems:(id)arg2;
+ (id)actionsForProviderDomain:(id)arg1;
+ (id)uiActionsForProviderDomain:(id)arg1;
+ (id)authenticationActionForProviderDomain:(id)arg1;

@end

