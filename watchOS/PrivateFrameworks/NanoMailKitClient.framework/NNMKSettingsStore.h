//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NPSDomainAccessor, NSString;

@interface NNMKSettingsStore : NSObject
{
    _Bool _askBeforeDeleting;
    _Bool _loadRemoteImages;
    _Bool _organizeByThread;
    unsigned int _linesOfPreview;
    NSString *_swipeRightAction;
    NSString *_signature;
    NPSDomainAccessor *_domainAccessor;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NPSDomainAccessor *domainAccessor; // @synthesize domainAccessor=_domainAccessor;
@property(retain, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSString *swipeRightAction; // @synthesize swipeRightAction=_swipeRightAction;
@property(nonatomic) _Bool organizeByThread; // @synthesize organizeByThread=_organizeByThread;
@property(nonatomic) _Bool loadRemoteImages; // @synthesize loadRemoteImages=_loadRemoteImages;
@property(nonatomic) _Bool askBeforeDeleting; // @synthesize askBeforeDeleting=_askBeforeDeleting;
@property(nonatomic) unsigned int linesOfPreview; // @synthesize linesOfPreview=_linesOfPreview;
- (void)_setValue:(id)arg1 forKey:(id)arg2;
- (id)_getValueForKey:(id)arg1;
- (id)_signature;
- (id)_swipeRightAction;
- (_Bool)_organizeByThread;
- (_Bool)_loadRemoteImages;
- (_Bool)_askBeforeDeleting;
- (unsigned int)_linesOfPreview;
- (void)dealloc;
- (id)init;

@end

