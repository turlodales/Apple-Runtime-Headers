//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XQuery/XQueryExpr.h>

#import <XQuery/XQueryExprBehavior-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface XQueryNameTest : XQueryExpr <XQueryExprBehavior>
{
    NSString *_name;
    id _qName;
    BOOL _attribute;
}

+ (id)nameTest:(id)arg1;
- (id)evaluateWithContext:(id)arg1;
- (BOOL)isValidNode:(id)arg1 context:(id)arg2;
- (void)bindInfoForProlog:(id)arg1;
- (id)qNameForContext:(id)arg1;
- (void)setAttribute:(BOOL)arg1;
- (BOOL)attribute;
- (id)name;
- (id)initWithName:(id)arg1;
- (void)finalize;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

