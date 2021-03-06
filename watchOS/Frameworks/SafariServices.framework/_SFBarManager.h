//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSTimer;
@protocol _SFBarManagerDelegate;

@interface _SFBarManager : NSObject
{
    NSMapTable *_barToRegistrationMap;
    _Bool _deferUpdateAllRegistrations;
    _Bool _itemEnabledMap[8];
    _Bool _needsUpdateAllRegistrations;
    NSTimer *_coalescedUpdatesTimer;
    double _lastCoalescedUpdatesTime;
    CDUnknownBlockType _coalescedUpdatesBlock;
    _Bool _itemHiddenMap[8];
    _Bool _bookmarksItemSelected;
    id <_SFBarManagerDelegate> _delegate;
    double _downloadsItemProgress;
}

- (void).cxx_destruct;
@property(nonatomic) double downloadsItemProgress; // @synthesize downloadsItemProgress=_downloadsItemProgress;
@property(nonatomic, getter=isBookmarksItemSelected) _Bool bookmarksItemSelected; // @synthesize bookmarksItemSelected=_bookmarksItemSelected;
@property(nonatomic) __weak id <_SFBarManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)test_registrationForBar:(id)arg1;
- (unsigned int)test_numberOfRegistrations;
- (void)_updateRegistration:(id)arg1;
- (void)_updateAllRegistrations;
- (void)barRegistration:(id)arg1 didReceiveTouchDownForBarItem:(int)arg2;
- (void)barRegistration:(id)arg1 didReceiveLongPressForBarItem:(int)arg2;
- (_Bool)barRegistration:(id)arg1 canHandleLongPressForBarItem:(int)arg2;
- (void)barRegistration:(id)arg1 didReceiveTapForBarItem:(int)arg2;
- (void)registerToolbar:(id)arg1 withLayout:(int)arg2 persona:(unsigned int)arg3;
- (void)_invalidateCoalescedUpdatesTimer;
- (void)_performCoalescedUpdatesNow;
- (void)performCoalescedUpdates:(CDUnknownBlockType)arg1;
- (void)setDownloadsItemNeedsLayout;
- (void)pulseDownloadsItem;
- (void)visibleBarItemsNeedUpdate;
- (void)setBarItem:(int)arg1 hidden:(_Bool)arg2;
- (_Bool)isBarItemHidden:(int)arg1;
- (void)setBarItem:(int)arg1 enabled:(_Bool)arg2;
- (_Bool)isBarItemEnabled:(int)arg1;
- (id)init;

@end

