//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ArouetCandidatesResult, NSString;

@interface ArouetCandidateSelectionSession : NSObject
{
    _Bool _wantsCandidatesListVisible;
    _Bool _isForExplicitSelection;
    _Bool _candidatesListIsVisible;
    _Bool _insertingSelectedCandidate;
    ArouetCandidatesResult *_candidatesResult;
    int _selectedCandidateIndex;
    NSString *_resultingFullString;
    struct _NSRange _replacementRange;
    struct _NSRange _resultingInsertedRange;
}

- (void).cxx_destruct;
@property(nonatomic) struct _NSRange resultingInsertedRange; // @synthesize resultingInsertedRange=_resultingInsertedRange;
@property(copy, nonatomic) NSString *resultingFullString; // @synthesize resultingFullString=_resultingFullString;
@property(readonly, nonatomic) struct _NSRange replacementRange; // @synthesize replacementRange=_replacementRange;
@property(nonatomic) _Bool insertingSelectedCandidate; // @synthesize insertingSelectedCandidate=_insertingSelectedCandidate;
@property(nonatomic) int selectedCandidateIndex; // @synthesize selectedCandidateIndex=_selectedCandidateIndex;
@property(nonatomic) _Bool candidatesListIsVisible; // @synthesize candidatesListIsVisible=_candidatesListIsVisible;
@property(nonatomic) _Bool isForExplicitSelection; // @synthesize isForExplicitSelection=_isForExplicitSelection;
@property(nonatomic) _Bool wantsCandidatesListVisible; // @synthesize wantsCandidatesListVisible=_wantsCandidatesListVisible;
@property(readonly, nonatomic) ArouetCandidatesResult *candidatesResult; // @synthesize candidatesResult=_candidatesResult;
- (id)description;
@property(readonly, nonatomic) struct _NSRange selectedCandidateRange;
- (id)initWithCandidatesResult:(id)arg1 replacementRange:(struct _NSRange)arg2;

@end

