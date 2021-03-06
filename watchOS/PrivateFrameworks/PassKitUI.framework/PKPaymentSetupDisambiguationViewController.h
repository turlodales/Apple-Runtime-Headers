//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKPaymentSetupTableViewController.h>

#import <PassKitUI/UITableViewDelegate-Protocol.h>

@class NSArray, NSString, PKDisambiguationFooterView, PKPaymentSetupProduct, PKTableHeaderView, UIBarButtonItem;
@protocol PKPaymentSetupDisambiguationViewControllerDelegate;

@interface PKPaymentSetupDisambiguationViewController : PKPaymentSetupTableViewController <UITableViewDelegate>
{
    NSArray *_products;
    UIBarButtonItem *_nextBarButtonItem;
    PKTableHeaderView *_headerView;
    PKDisambiguationFooterView *_footerView;
    id <PKPaymentSetupDisambiguationViewControllerDelegate> _delegate;
    PKPaymentSetupProduct *_selectedProduct;
    NSString *_enteredCardNumber;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *enteredCardNumber; // @synthesize enteredCardNumber=_enteredCardNumber;
@property(readonly, retain, nonatomic) PKPaymentSetupProduct *selectedProduct; // @synthesize selectedProduct=_selectedProduct;
@property(retain, nonatomic) NSArray *products; // @synthesize products=_products;
@property(nonatomic) id <PKPaymentSetupDisambiguationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_setupLater:(id)arg1;
- (void)_popToCameraCapture:(id)arg1;
- (void)_notifyDelegateDidSelectProduct:(id)arg1;
- (void)_nextTapped:(id)arg1;
- (void)clearSelectedProduct;
- (void)_updateSelectedProduct:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)_productAtIndexPath:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithProducts:(id)arg1 context:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

