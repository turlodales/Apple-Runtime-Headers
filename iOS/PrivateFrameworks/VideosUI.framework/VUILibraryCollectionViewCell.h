//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIViewController, VUISeparatorView;

__attribute__((visibility("hidden")))
@interface VUILibraryCollectionViewCell : UICollectionViewCell
{
    UIViewController *_viewController;
    VUISeparatorView *_topSeparatorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VUISeparatorView *topSeparatorView; // @synthesize topSeparatorView=_topSeparatorView;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (void)layoutSubviews;
- (void)prepareForReuse;

@end

