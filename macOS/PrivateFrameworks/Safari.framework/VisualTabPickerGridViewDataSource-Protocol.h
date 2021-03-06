//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class BrowserTabViewItem, NSArray, VisualTabPickerGridView;

@protocol VisualTabPickerGridViewDataSource <NSObject>
- (double)tilesHeightToWidthRatioInVisualTabPickerGridView:(VisualTabPickerGridView *)arg1;
- (BrowserTabViewItem *)selectedTabItemInVisualTabPickerGridView:(VisualTabPickerGridView *)arg1;
- (NSArray *)orderedTabItemsInVisualTabPickerGridView:(VisualTabPickerGridView *)arg1;

@optional
- (double)keyWindowContentFrameAnimationDurationForVisualTabPickerGridView:(VisualTabPickerGridView *)arg1;
- (struct CGRect)keyWindowContentFrameInScreenCoordinatesForVisualTabPickerGridView:(VisualTabPickerGridView *)arg1;
@end

