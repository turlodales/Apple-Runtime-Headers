//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUServiceGridViewController.h>

@class HMAccessory, HUNearbyAccessoriesItemManager, NSArray, UILabel;
@protocol HUNearbyAccessoriesViewControllerDelegate;

@interface HUNearbyAccessoriesViewController : HUServiceGridViewController
{
    BOOL _supportsQuickControls;
    id <HUNearbyAccessoriesViewControllerDelegate> _nearbyAccessoriesDelegate;
    HMAccessory *_currentAccessory;
    UILabel *_userInfoHeading;
    UILabel *_userInfoDescription;
    NSArray *_userInfoConstraints;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL supportsQuickControls; // @synthesize supportsQuickControls=_supportsQuickControls;
@property(retain, nonatomic) NSArray *userInfoConstraints; // @synthesize userInfoConstraints=_userInfoConstraints;
@property(retain, nonatomic) UILabel *userInfoDescription; // @synthesize userInfoDescription=_userInfoDescription;
@property(retain, nonatomic) UILabel *userInfoHeading; // @synthesize userInfoHeading=_userInfoHeading;
@property(retain, nonatomic) HMAccessory *currentAccessory; // @synthesize currentAccessory=_currentAccessory;
@property(nonatomic) __weak id <HUNearbyAccessoriesViewControllerDelegate> nearbyAccessoriesDelegate; // @synthesize nearbyAccessoriesDelegate=_nearbyAccessoriesDelegate;
- (id)layoutOptionsForSection:(long long)arg1;
- (BOOL)presentationCoordinatorShouldProvideCancellationFeedback:(id)arg1;
- (BOOL)presentationCoordinator:(id)arg1 shouldBeginPresentationWithContext:(id)arg2;
- (void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (void)doneButtonPressed:(id)arg1;
- (void)updateViewConstraints;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithSourceItem:(id)arg1 supportsQuickControls:(BOOL)arg2;

// Remaining properties
@property(readonly, nonatomic) HUNearbyAccessoriesItemManager *itemManager; // @dynamic itemManager;

@end

