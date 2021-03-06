//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PagesQuicklook/TSWPTextWrap-Protocol.h>

@class TPDocumentRoot;

@interface TPTextWrapController : NSObject <TSWPTextWrap>
{
    struct CGAffineTransform _canvasSpaceToWrapSpace;
    struct CGAffineTransform _wrapSpaceToCanvasSpace;
    TPDocumentRoot *_documentRoot;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak TPDocumentRoot *documentRoot; // @synthesize documentRoot=_documentRoot;
- (void)p_splitLine:(struct CGRect)arg1 lineSegmentRects:(id)arg2 wrappable:(id)arg3 cookie:(id)arg4 skipHint:(double *)arg5;
- (_Bool)p_shouldTextFlowAroundWrappable:(id)arg1 inTarget:(id)arg2 inColumn:(id)arg3;
- (_Bool)checkForUnobstructedSpan:(struct CGRect)arg1 wrappableAttachments:(id)arg2 userInfo:(id)arg3;
- (double)nextUnobstructedSpanStartingAt:(struct CGRect)arg1 wrappableAttachments:(id)arg2 userInfo:(id)arg3;
- (id)p_wrapDrawables:(id)arg1 userInfo:(id)arg2;
- (void)splitLine:(struct CGRect)arg1 lineSegmentRects:(inout id)arg2 wrappableAttachments:(id)arg3 ignoreFloatingGraphics:(_Bool)arg4 canvasCausedWrap:(out _Bool *)arg5 skipHint:(out double *)arg6 userInfo:(id)arg7;
- (id)p_groupInfoContainingWrappable:(id)arg1;
- (void)setUpCanvasToWrapSpaceAffineTransformation:(struct CGAffineTransform)arg1;
- (id)beginWrappingToColumn:(id)arg1 columnTransformFromWP:(struct CGAffineTransform)arg2 target:(id)arg3 hasWrappables:(out _Bool *)arg4;
- (id)initWithDocumentRoot:(id)arg1;

@end

