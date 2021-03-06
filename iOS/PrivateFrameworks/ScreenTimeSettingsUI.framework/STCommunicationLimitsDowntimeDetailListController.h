//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <ScreenTimeSettingsUI/CNUIFamilyMemberContactsPresentation-Protocol.h>

@class CNUIFamilyMemberWhitelistedContactsController, NSMutableArray, NSString, PSSpecifier, STCommunicationLimits;

__attribute__((visibility("hidden")))
@interface STCommunicationLimitsDowntimeDetailListController : PSListController <CNUIFamilyMemberContactsPresentation>
{
    _Bool _syncingWhitelistedContacts;
    PSSpecifier *_allowedCommunicationGroupSpecifier;
    PSSpecifier *_allowEveryoneSpecifier;
    PSSpecifier *_allowContactsOnlySpecifier;
    PSSpecifier *_allowGroupsWithOneContactSpecifier;
    PSSpecifier *_allowSpecificContactsSpecifier;
    PSSpecifier *_allowedContactsGroupSpecifier;
    PSSpecifier *_addContactsSpecifier;
    NSMutableArray *_allowedContactsSpecifiers;
    STCommunicationLimits *_communicationLimits;
    CNUIFamilyMemberWhitelistedContactsController *_whitelistedContactsController;
}

- (void).cxx_destruct;
@property _Bool syncingWhitelistedContacts; // @synthesize syncingWhitelistedContacts=_syncingWhitelistedContacts;
@property(retain) CNUIFamilyMemberWhitelistedContactsController *whitelistedContactsController; // @synthesize whitelistedContactsController=_whitelistedContactsController;
@property(retain) STCommunicationLimits *communicationLimits; // @synthesize communicationLimits=_communicationLimits;
@property(retain) NSMutableArray *allowedContactsSpecifiers; // @synthesize allowedContactsSpecifiers=_allowedContactsSpecifiers;
@property(retain) PSSpecifier *addContactsSpecifier; // @synthesize addContactsSpecifier=_addContactsSpecifier;
@property(retain) PSSpecifier *allowedContactsGroupSpecifier; // @synthesize allowedContactsGroupSpecifier=_allowedContactsGroupSpecifier;
@property(retain) PSSpecifier *allowSpecificContactsSpecifier; // @synthesize allowSpecificContactsSpecifier=_allowSpecificContactsSpecifier;
@property(retain) PSSpecifier *allowGroupsWithOneContactSpecifier; // @synthesize allowGroupsWithOneContactSpecifier=_allowGroupsWithOneContactSpecifier;
@property(retain) PSSpecifier *allowContactsOnlySpecifier; // @synthesize allowContactsOnlySpecifier=_allowContactsOnlySpecifier;
@property(retain) PSSpecifier *allowEveryoneSpecifier; // @synthesize allowEveryoneSpecifier=_allowEveryoneSpecifier;
@property(retain) PSSpecifier *allowedCommunicationGroupSpecifier; // @synthesize allowedCommunicationGroupSpecifier=_allowedCommunicationGroupSpecifier;
- (void)_didFinishSyncingWhitelistedContacts;
- (void)_startSyncingWhitelistedContacts;
- (id)_allowedCommunicationGroupFooterText:(id)arg1;
- (void)_updateAllowedCommunicationGroupFooterText;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_selectLeastRestrictiveOptionIfNecessary;
- (void)dismissPresentedViewController:(id)arg1;
- (void)presentViewController:(id)arg1;
- (void)familyMemberContactsDidChange;
- (long long)_downtimeCommunicationLimitForSpecifier:(id)arg1;
- (id)_allowedContactDetailLabelText:(id)arg1;
- (id)_allowedContactsSpecifiers;
- (id)specifiers;
- (void)_didFinishEditingCommunicationLimit;
- (void)willResignActive;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

