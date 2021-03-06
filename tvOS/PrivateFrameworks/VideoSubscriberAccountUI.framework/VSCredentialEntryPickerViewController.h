//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <VideoSubscriberAccountUI/UITableViewDataSource-Protocol.h>
#import <VideoSubscriberAccountUI/UITableViewDelegate-Protocol.h>

@class NSArray, NSString, UILabel, UITableView, UITapGestureRecognizer, VSCredentialEntryPicker, VSFontCenter;
@protocol VSCredentialEntryPickerViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSCredentialEntryPickerViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    id <VSCredentialEntryPickerViewControllerDelegate> _delegate;
    VSCredentialEntryPicker *_picker;
    NSString *_footerMessageText;
    NSArray *_credentialEntryButtons;
    UITableView *_tableView;
    UILabel *_headerLabel;
    UITapGestureRecognizer *_menuRecognizer;
    NSArray *_buttons;
    UILabel *_footerLabel;
    VSFontCenter *_fontCenter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VSFontCenter *fontCenter; // @synthesize fontCenter=_fontCenter;
@property(retain, nonatomic) UILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) UITapGestureRecognizer *menuRecognizer; // @synthesize menuRecognizer=_menuRecognizer;
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *credentialEntryButtons; // @synthesize credentialEntryButtons=_credentialEntryButtons;
@property(retain, nonatomic) NSString *footerMessageText; // @synthesize footerMessageText=_footerMessageText;
@property(retain, nonatomic) VSCredentialEntryPicker *picker; // @synthesize picker=_picker;
@property(nonatomic) __weak id <VSCredentialEntryPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;
- (id)indexPathForPreferredFocusedViewInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)credentialEntryButtonPressed:(id)arg1;
- (void)menuPressed:(id)arg1;
- (void)dealloc;
- (id)initWithCredentialEntryButtons:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

