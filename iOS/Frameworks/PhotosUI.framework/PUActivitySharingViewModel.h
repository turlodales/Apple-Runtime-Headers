//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

@class NSString, PHFetchResult, PUPhotoSelectionManager, PXPhotosDataSource;
@protocol PXDisplayAsset;

__attribute__((visibility("hidden")))
@interface PUActivitySharingViewModel : PXObservable
{
    _Bool _actionSheet;
    PHFetchResult *_collectionListFetchResult;
    PXPhotosDataSource *_photosDataSource;
    NSString *_localizedTitle;
    NSString *_localizedSubtitle;
    id <PXDisplayAsset> _keyAsset;
    unsigned long long _sourceOrigin;
    PUPhotoSelectionManager *_selectionManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PUPhotoSelectionManager *selectionManager; // @synthesize selectionManager=_selectionManager;
@property(readonly, nonatomic) unsigned long long sourceOrigin; // @synthesize sourceOrigin=_sourceOrigin;
@property(readonly, nonatomic) id <PXDisplayAsset> keyAsset; // @synthesize keyAsset=_keyAsset;
@property(readonly, copy, nonatomic) NSString *localizedSubtitle; // @synthesize localizedSubtitle=_localizedSubtitle;
@property(readonly, copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(readonly, nonatomic, getter=isActionSheet) _Bool actionSheet; // @synthesize actionSheet=_actionSheet;
@property(readonly, nonatomic) PXPhotosDataSource *photosDataSource; // @synthesize photosDataSource=_photosDataSource;
@property(readonly, nonatomic) PHFetchResult *collectionListFetchResult; // @synthesize collectionListFetchResult=_collectionListFetchResult;
- (void)setActionSheet:(_Bool)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)mutableChangeObject;
- (id)init;
- (id)initWithActivitySharingConfiguration:(id)arg1;

@end

