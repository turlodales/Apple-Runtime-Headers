//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreML/MLFeatureValueConstraint-Protocol.h>
#import <CoreML/NSCopying-Protocol.h>
#import <CoreML/NSSecureCoding-Protocol.h>

@class MLMultiArrayShapeConstraint, NSArray;

@interface MLMultiArrayConstraint : NSObject <MLFeatureValueConstraint, NSCopying, NSSecureCoding>
{
    NSArray *_shape;
    int _dataType;
    MLMultiArrayShapeConstraint *_shapeConstraint;
}

+ (_Bool)supportsSecureCoding;
+ (id)constraintWithShape:(id)arg1 dataType:(int)arg2;
+ (id)constraintWithShape:(id)arg1 dataType:(int)arg2 shapeConstraint:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) MLMultiArrayShapeConstraint *shapeConstraint; // @synthesize shapeConstraint=_shapeConstraint;
@property(readonly, nonatomic) int dataType; // @synthesize dataType=_dataType;
@property(readonly, nonatomic) NSArray *shape; // @synthesize shape=_shape;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isAllowedValue:(id)arg1 error:(id *)arg2;
- (_Bool)isAllowedValue:(id)arg1 isNeuralNetworkInput:(_Bool)arg2 usingRank5Mapping:(_Bool)arg3 featureName:(id)arg4 error:(id *)arg5;
- (_Bool)isAllowedDataType:(int)arg1 error:(id *)arg2;
- (_Bool)isAllowedShape:(id)arg1 error:(id *)arg2;
- (id)initWithShape:(id)arg1 dataType:(int)arg2 shapeConstraint:(id)arg3;

@end

