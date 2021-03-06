//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKit/WKFormRotatingAccessoryPopover.h>

#import <WebKit/WKFormControl-Protocol.h>

@class UITableViewController;

__attribute__((visibility("hidden")))
@interface WKSelectPopover : WKFormRotatingAccessoryPopover <WKFormControl>
{
    struct RetainPtr<WKSelectTableViewController> _tableViewController;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) UITableViewController *tableViewController;
- (void)_userActionDismissedPopover:(id)arg1;
- (void)controlEndEditing;
- (void)controlBeginEditing;
- (id)controlView;
- (void)dealloc;
- (id)initWithView:(id)arg1 hasGroups:(_Bool)arg2;
- (void)selectRow:(int)arg1 inComponent:(int)arg2 extendingSelection:(_Bool)arg3;

@end

