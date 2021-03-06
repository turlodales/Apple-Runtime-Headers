//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PepperUICore/NSObject-Protocol.h>

@class CNContact, NCABContactListViewController, NSIndexPath;

@protocol NCABContactListViewControllerDelegate <NSObject>

@optional
- (_Bool)contactListViewController:(NCABContactListViewController *)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2;
- (void)contactListViewController:(NCABContactListViewController *)arg1 didPickContact:(void *)arg2;
- (void)contactListViewController:(NCABContactListViewController *)arg1 updatedNoContactsState:(_Bool)arg2;
- (void)contactListViewController:(NCABContactListViewController *)arg1 didSelectContact:(CNContact *)arg2;
- (_Bool)contactListViewController:(NCABContactListViewController *)arg1 shouldSelectContact:(CNContact *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (_Bool)contactListViewController:(NCABContactListViewController *)arg1 canSelectContact:(CNContact *)arg2;
@end

