//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/NSCopying-Protocol.h>

@protocol PUPhotoEditResourceLoaderDelegate;

@interface PUPhotoEditResourceLoadRequest : NSObject <NSCopying>
{
    _Bool _requireLocalResources;
    _Bool _requireAdjustments;
    _Bool _assetLoadingAsRaw;
    id <PUPhotoEditResourceLoaderDelegate> _delegate;
    long long _version;
    long long __resolvedVersion;
    struct CGSize _targetSize;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool assetLoadingAsRaw; // @synthesize assetLoadingAsRaw=_assetLoadingAsRaw;
@property(nonatomic, setter=_setResolvedVersion:) long long _resolvedVersion; // @synthesize _resolvedVersion=__resolvedVersion;
@property(nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(nonatomic) __weak id <PUPhotoEditResourceLoaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool requireAdjustments; // @synthesize requireAdjustments=_requireAdjustments;
@property(nonatomic) _Bool requireLocalResources; // @synthesize requireLocalResources=_requireLocalResources;
- (void)_assertWorkVersionResolved;
- (_Bool)_isWorkVersionResolved;
- (void)_resolveVersionIfNeededWithWorkVersion:(long long)arg1;
- (_Bool)_needsLoadAdjustments;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

