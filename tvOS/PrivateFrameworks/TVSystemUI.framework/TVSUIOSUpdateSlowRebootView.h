//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface TVSUIOSUpdateSlowRebootView : UIView
{
    UILabel *_text;
    UIButton *_restart;
    CDUnknownBlockType _rebootAction;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType rebootAction; // @synthesize rebootAction=_rebootAction;
- (void)_didSelectRestart:(id)arg1;
- (id)preferredFocusEnvironments;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

