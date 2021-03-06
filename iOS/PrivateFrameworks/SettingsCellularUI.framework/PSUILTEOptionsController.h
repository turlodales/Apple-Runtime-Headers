//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListItemsController.h>

#import <SettingsCellularUI/UIAlertViewDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PSUILTEOptionsController : PSListItemsController <UIAlertViewDelegate>
{
}

+ (_Bool)isOnCallOfSubType:(struct __CFString *)arg1;
+ (void)setVoice:(id)arg1 enabled:(_Bool)arg2;
+ (_Bool)shouldShowVoiceOptions:(id)arg1;
+ (_Bool)isProvisioning:(id)arg1;
+ (unsigned long long)voiceAvailability:(id)arg1;
+ (_Bool)isVoiceEnabled:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)presentOnCallAlertIfNeededForService:(unsigned long long)arg1 okayCompletion:(CDUnknownBlockType)arg2;
- (void)presentCallCarrierAlert:(id)arg1;
- (void)updateProvisioning;
- (void)listItemSelected:(id)arg1;
- (id)specifiers;
- (void)dealloc;
- (id)init;
- (void)setSpecifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

