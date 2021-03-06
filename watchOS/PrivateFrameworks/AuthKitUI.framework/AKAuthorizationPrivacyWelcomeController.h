//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PepperUICore/PUICTableViewController.h>

#import <AuthKitUI/AKAuthorizationPrivacyWelcomeHeaderViewDelegate-Protocol.h>

@class AKAuthorizationPrivacyWelcomeHeaderView, NSString;
@protocol AKAuthorizationPrivacyWelcomeControllerDelegate;

@interface AKAuthorizationPrivacyWelcomeController : PUICTableViewController <AKAuthorizationPrivacyWelcomeHeaderViewDelegate>
{
    _Bool _needsHeaderUpdate;
    id <AKAuthorizationPrivacyWelcomeControllerDelegate> _delegate;
    AKAuthorizationPrivacyWelcomeHeaderView *_headerView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needsHeaderUpdate; // @synthesize needsHeaderUpdate=_needsHeaderUpdate;
@property(retain, nonatomic) AKAuthorizationPrivacyWelcomeHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <AKAuthorizationPrivacyWelcomeControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tappedLearnMore;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_updateHeaderView;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

