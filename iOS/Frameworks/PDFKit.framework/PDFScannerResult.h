//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PDFScannerResultPrivate;

__attribute__((visibility("hidden")))
@interface PDFScannerResult : NSObject
{
    PDFScannerResultPrivate *_private;
}

- (void).cxx_destruct;
- (void)setButtonPressed:(_Bool)arg1;
- (_Bool)pointIsOnButton:(struct CGPoint)arg1 onPageLayer:(id)arg2;
- (_Bool)pointIsOnButton:(struct CGPoint)arg1;
- (_Bool)containsPoint:(struct CGPoint)arg1 onPageLayer:(id)arg2;
- (_Bool)containsPoint:(struct CGPoint)arg1;
- (void)setHighlightRef:(struct __DDHighlight *)arg1;
- (struct __DDHighlight *)highlightRef;
- (_Bool)hasActionsForResult;
- (_Bool)resultIsPastDate;
- (id)rects;
- (struct CGRect)bounds;
- (id)ddResult;
- (id)initWithDDScannerResult:(id)arg1 foundOnPage:(id)arg2;

@end

