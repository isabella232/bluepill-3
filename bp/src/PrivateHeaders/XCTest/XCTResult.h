//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 11 2021 09:30:43).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface XCTResult : NSObject
{
    id _value;
    NSError *_error;
}

+ (id)resultWithError:(id)arg1;
+ (id)resultWithValue:(id)arg1;
+ (id)result;
+ (id)resultWithValue:(id)arg1 error:(id)arg2;
- (void).cxx_destruct;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) id value; // @synthesize value=_value;
@property(readonly) _Bool hasError;
@property(readonly) _Bool hasValue;
- (id)initWithValue:(id)arg1 error:(id)arg2;

@end

