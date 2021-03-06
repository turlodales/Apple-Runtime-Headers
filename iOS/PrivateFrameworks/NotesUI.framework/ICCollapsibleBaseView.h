//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint;

@interface ICCollapsibleBaseView : UIView
{
    _Bool _collapsed;
    _Bool _setupComplete;
    double _leadingSpace;
    double _trailingSpace;
    UIView *_contentView;
    NSLayoutConstraint *_zeroWidthConstraint;
    NSLayoutConstraint *_leadingConstraint;
    NSLayoutConstraint *_trailingConstraint;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool setupComplete; // @synthesize setupComplete=_setupComplete;
@property(retain, nonatomic) NSLayoutConstraint *trailingConstraint; // @synthesize trailingConstraint=_trailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingConstraint; // @synthesize leadingConstraint=_leadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *zeroWidthConstraint; // @synthesize zeroWidthConstraint=_zeroWidthConstraint;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic, getter=isCollapsed) _Bool collapsed; // @synthesize collapsed=_collapsed;
@property(nonatomic) double trailingSpace; // @synthesize trailingSpace=_trailingSpace;
@property(nonatomic) double leadingSpace; // @synthesize leadingSpace=_leadingSpace;
- (void)ic_setNeedsUpdateConstraints;
- (void)performSetUpWithContentView:(id)arg1;
- (void)performSetup;
- (void)setUpIfNeeded;
- (void)awakeFromNib;
- (_Bool)wantsLayer;

@end

