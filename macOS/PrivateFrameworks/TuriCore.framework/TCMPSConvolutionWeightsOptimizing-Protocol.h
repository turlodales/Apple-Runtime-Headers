//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TuriCore/NSObject-Protocol.h>

@class MPSCNNBatchNormalizationState, MPSCNNConvolutionGradientState, TCMPSBatchNormWeights, TCMPSConvolutionWeights;
@protocol MTLCommandBuffer;

@protocol TCMPSConvolutionWeightsOptimizing <NSObject>
- (void)setLearningRate:(float)arg1;
- (void)encodeToCommandBuffer:(id <MTLCommandBuffer>)arg1 batchNormalizationState:(MPSCNNBatchNormalizationState *)arg2 batchNormData:(TCMPSBatchNormWeights *)arg3;
- (void)encodeToCommandBuffer:(id <MTLCommandBuffer>)arg1 convolutionGradientState:(MPSCNNConvolutionGradientState *)arg2 convolutionWeights:(TCMPSConvolutionWeights *)arg3;
@end

