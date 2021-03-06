//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSMutableArray, NSString, UIColor, UIFont, UIMorphingLabelGlyphSet, _UIViewAnimationAttributes;

@interface UIMorphingLabel : UIView
{
    UIMorphingLabelGlyphSet *_srcGlyphSet;
    UIMorphingLabelGlyphSet *_dstGlyphSet;
    NSMutableArray *_hiddenGlyphViews;
    UIView *_colorView;
    unsigned int _alignmentSrc[100];
    unsigned int _alignmentDst[100];
    _Bool _alignmentIsEqual[100];
    unsigned int _alignmentSize;
    float _alignmentDelays[100];
    _UIViewAnimationAttributes *_textAnimationAttributes;
    _UIViewAnimationAttributes *_textColorAnimationAttributes;
    float _lastUpdateTime;
    float _slowdown;
    float _rippleFactor;
    float _scaleFactor;
    _Bool _isDoingFastAnimation;
    _Bool _textDidChange;
    _Bool _textColorDidChange;
    _Bool _suppressLayoutSubviews;
    _Bool _enableAnimation;
    NSString *_text;
    UIFont *_font;
    UIColor *_textColor;
    int _textAlignment;
    float _initialScale;
    float _glyphScaleAnimationSpeed;
    double _rippleDuration;
    struct CGRect _visibleRect;
}

+ (id)preferredFontWithSize:(float)arg1;
@property(nonatomic) double rippleDuration; // @synthesize rippleDuration=_rippleDuration;
@property(nonatomic) float glyphScaleAnimationSpeed; // @synthesize glyphScaleAnimationSpeed=_glyphScaleAnimationSpeed;
@property(nonatomic) float initialScale; // @synthesize initialScale=_initialScale;
@property(nonatomic) _Bool enableAnimation; // @synthesize enableAnimation=_enableAnimation;
@property(nonatomic) _Bool suppressLayoutSubviews; // @synthesize suppressLayoutSubviews=_suppressLayoutSubviews;
@property(nonatomic) struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;
@property(nonatomic) int textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void)contentSizeDidChange:(id)arg1;
- (float)requiredWidthForText:(id)arg1;
- (float)flushAmount;
- (_Bool)canFitText:(id)arg1;
- (void)layoutSubviews;
- (id)attributedString;
- (id)attributedStringForText:(id)arg1;
- (void)animateTextColor;
- (void)animateGlyphs;
- (void)animateAlignmentHunkAtIndex:(unsigned int)arg1;
- (void)initAlignmentHunkAtIndex:(unsigned int)arg1;
- (void)animateMovementAlignmentHunkAtIndex:(unsigned int)arg1;
- (void)initMovementAlignmentHunkAtIndex:(unsigned int)arg1;
- (void)copyStateFromGlyph:(id)arg1 toGlyph:(id)arg2;
- (void)animateSubstitutionAlignmentHunkAtIndex:(unsigned int)arg1;
- (void)initSubstitutionAlignmentHunkAtIndex:(unsigned int)arg1;
- (void)animateDeletionAlignmentHunkAtIndex:(unsigned int)arg1;
- (void)initDeletionAlignmentHunkAtIndex:(unsigned int)arg1;
- (void)animateInsertionAlignmentHunkAtIndex:(unsigned int)arg1;
- (void)initInsertionAlignmentHunkAtIndex:(unsigned int)arg1;
- (void)animateChangeInWidthOutsideAlignmentHunkAtIndex:(unsigned int)arg1;
- (void)animateGlyphsInRange:(struct _NSRange)arg1 ofGlyphSet:(id)arg2 byOffset:(float)arg3 delay:(float)arg4;
- (float)changeInWidthDueToAlignmentHunkAtIndex:(unsigned int)arg1;
- (float)totalRightOffsetForAlignmentHunkAtIndex:(unsigned int)arg1;
- (float)totalLeftOffsetForAlignmentHunkAtIndex:(unsigned int)arg1;
- (void)animateHideGlyph:(id)arg1 alphaDuration:(float)arg2 delay:(float)arg3;
- (void)animateShowGlyph:(id)arg1 alpha:(float)arg2 alphaDuration:(float)arg3 delay:(float)arg4;
- (void)animateShowGlyph:(id)arg1 alphaDuration:(float)arg2 delay:(float)arg3;
- (void)animateGlyph:(id)arg1 toScale:(float)arg2 delay:(float)arg3;
- (void)animateGlyph:(id)arg1 toAlpha:(float)arg2 duration:(float)arg3 delay:(float)arg4;
- (void)animateGlyph:(id)arg1 toPosition:(struct CGPoint)arg2 delay:(float)arg3;
- (float)currentMediaTime;
- (id)uniqueStringWithPrefix:(id)arg1;
- (void)hideGlyph:(id)arg1;
- (id)glyphViewWithImage:(id)arg1 isColorGlyph:(_Bool)arg2;
- (struct _NSRange)dstRangeOfAlignmentHunkAtIndex:(unsigned int)arg1;
- (struct _NSRange)srcRangeOfAlignmentHunkAtIndex:(unsigned int)arg1;
- (void)calculateGlyphAlignment;
- (unsigned int)calculateHardAlignmentAtIndex:(unsigned int)arg1 fromGlyphsInRange:(struct _NSRange)arg2 toGlyphsInRange:(struct _NSRange)arg3;
- (_Bool)_isRTL;
- (double)_rippleDurationForEndInsertion:(_Bool)arg1;
- (float)alphaForFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)baseInit;

@end

