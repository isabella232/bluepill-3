//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 11 2021 09:30:43).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSPredicate.h>

@class NSSet;

@interface NSPredicate (XCTAutomationSupport)
- (id)xct_matchedValuesOfClass:(Class)arg1 forKeyPath:(id)arg2;
- (id)_xct_requiredKeyPathsOrError:(id *)arg1;
@property(readonly, copy) NSSet *_xct_allExpressions;
@property(readonly) _Bool _xct_containsBlockOrFunctionPredicatesOrExpressions;
@property(readonly) _Bool _xct_supportsSecureCoding;
@end

