//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class PKPaymentSetupProduct;

@interface NPKPaymentProvisioningFlowControllerDigitalIssuancePaymentStepContext : NPKPaymentProvisioningFlowStepContext
{
    PKPaymentSetupProduct *_product;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) PKPaymentSetupProduct *product; // @synthesize product=_product;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestContext:(id)arg1;

@end

