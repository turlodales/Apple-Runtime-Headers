//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <PassKitUI/PKPassViewerDelegate-Protocol.h>

@class NSButton, NSString, NSTextField, NSWindow, PKPass, PKPassViewerViewController;

@interface PKPassWindowController : NSWindowController <PKPassViewerDelegate>
{
    NSWindow *_clientWindow;
    NSWindow *_backgroundMaskWindow;
    NSWindow *_passChildWindow;
    BOOL _clientWindowIsResizable;
    BOOL _active;
    BOOL _attachedToParentWindow;
    BOOL _hasFocus;
    struct CGRect _serviceWindowFrameBeforeAnimation;
    struct CGRect _serviceWindowFrameAfterAnimation;
    NSTextField *_titleTextField;
    NSTextField *_moreInfoTextField;
    NSButton *_cancelButton;
    NSButton *_addToPassbookButton;
    double _slideUpYDelta;
    BOOL _attachToHostWindow;
    BOOL _didAddPass;
    PKPassViewerViewController *_passViewController;
    PKPass *_pass;
    NSButton *_closeButton;
    long long _openAnimationStyle;
    long long _closeAnimationStyle;
    struct CGRect _positionRelativeToRect;
}

- (void).cxx_destruct;
@property BOOL didAddPass; // @synthesize didAddPass=_didAddPass;
@property BOOL attachToHostWindow; // @synthesize attachToHostWindow=_attachToHostWindow;
@property long long closeAnimationStyle; // @synthesize closeAnimationStyle=_closeAnimationStyle;
@property long long openAnimationStyle; // @synthesize openAnimationStyle=_openAnimationStyle;
@property struct CGRect positionRelativeToRect; // @synthesize positionRelativeToRect=_positionRelativeToRect;
@property(readonly) NSButton *closeButton; // @synthesize closeButton=_closeButton;
@property(readonly) PKPass *pass; // @synthesize pass=_pass;
@property(readonly) PKPassViewerViewController *passViewController; // @synthesize passViewController=_passViewController;
@property(getter=isActive) BOOL active; // @synthesize active=_active;
@property(retain) NSWindow *clientWindow; // @synthesize clientWindow=_clientWindow;
- (void)passViewer:(id)arg1 didChangePass:(id)arg2;
- (void)passViewer:(id)arg1 didAddToPassbook:(id)arg2;
- (void)passViewer:(id)arg1 closeClicked:(id)arg2;
- (void)endWithAnimationStyle:(long long)arg1;
- (void)performShowAnimation;
- (id)_closeWindowAninationWithStyle:(long long)arg1;
- (id)_windowShowAnimation;
- (struct CGRect)_zoomedOutRectWithFrame:(struct CGRect)arg1;
- (struct CGRect)_windowFrameAfterAnimation;
- (struct CGRect)_hostFrame;
- (void)clientWindowWillMiniaturize:(id)arg1;
- (void)clientWindowWillClose:(id)arg1;
- (void)clientWindowDidResize:(id)arg1;
- (void)clientWindowDidBecomeKey:(id)arg1;
- (void)relinquishFocusFromServiceUI;
- (void)giveFocusToServiceUIAndNotifyHelper:(BOOL)arg1;
- (void)_removeChildWindows;
- (void)_addChildWindows;
- (void)_synchronizeBackgroundWindowFrame;
- (struct CGRect)clientWindowFrame;
- (BOOL)clientWindowAvailable;
- (void)layoutForPass:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)windowDidLoad;
- (struct CGRect)_centeredRectWithSize:(struct CGSize)arg1 inRect:(struct CGRect)arg2;
- (id)initWithPass:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

