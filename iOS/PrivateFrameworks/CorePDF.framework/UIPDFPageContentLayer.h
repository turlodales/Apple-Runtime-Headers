//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import <CorePDF/UIPDFSelectionLayer-Protocol.h>

__attribute__((visibility("hidden")))
@interface UIPDFPageContentLayer : CALayer <UIPDFSelectionLayer>
{
    CALayer *_selectionLayer;
}

- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)layoutSublayers;
- (void)setNeedsDisplay;
- (void)setSelectionNeedsDisplay;
- (void)dealloc;
- (id)init;

@end

