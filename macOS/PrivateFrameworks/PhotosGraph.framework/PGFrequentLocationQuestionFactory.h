//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGSurveyQuestionFactory.h>

@class PHFetchResult;

@interface PGFrequentLocationQuestionFactory : PGSurveyQuestionFactory
{
    PHFetchResult *_existingFrequentLocationQuestions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PHFetchResult *existingFrequentLocationQuestions; // @synthesize existingFrequentLocationQuestions=_existingFrequentLocationQuestions;
- (id)_assetWithLocationFromMomentNode:(id)arg1;
- (id)_selectedAssetForQuestionFromMomentNodes:(id)arg1;
- (BOOL)_distanceTooCloseBetweenCoordinate:(struct CLLocationCoordinate2D)arg1 otherCoordinate:(struct CLLocationCoordinate2D)arg2;
- (BOOL)_addIfNeededFrequentLocationQuestionForAsset:(id)arg1 withLocationTypeName:(id)arg2 toQuestions:(id)arg3;
- (double)_localFactoryScoreForLocationTypeName:(id)arg1;
- (id)generateQuestionsWithLimit:(unsigned long long)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (long long)questionOptions;
- (unsigned short)questionType;

@end

