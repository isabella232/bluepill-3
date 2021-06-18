//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 11 2021 09:30:43).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCTest/XCTestExpectation.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface XCTKVOExpectation : XCTestExpectation
{
    _Bool _hasCleanedUp;
    CDUnknownBlockType _handler;
    NSString *_keyPath;
    id _observedObject;
    id _expectedValue;
    unsigned long long _options;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property _Bool hasCleanedUp; // @synthesize hasCleanedUp=_hasCleanedUp;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) unsigned long long options; // @synthesize options=_options;
@property(readonly) id expectedValue; // @synthesize expectedValue=_expectedValue;
@property(readonly) id observedObject; // @synthesize observedObject=_observedObject;
@property(readonly, copy) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (void)cleanup;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(copy) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (id)initWithKeyPath:(id)arg1 object:(id)arg2;
- (id)initWithKeyPath:(id)arg1 object:(id)arg2 expectedValue:(id)arg3;
- (id)initWithKeyPath:(id)arg1 object:(id)arg2 expectedValue:(id)arg3 options:(unsigned long long)arg4;
- (void)dealloc;

@end

