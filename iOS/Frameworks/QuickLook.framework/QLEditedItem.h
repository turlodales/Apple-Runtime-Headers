//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol QLPreviewItem;

@interface QLEditedItem : NSObject
{
    id <QLPreviewItem> _item;
    NSURL *_editedFileURL;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *editedFileURL; // @synthesize editedFileURL=_editedFileURL;
@property(copy, nonatomic) id <QLPreviewItem> item; // @synthesize item=_item;
- (id)initWithItem:(id)arg1 editedFileURL:(id)arg2;

@end

