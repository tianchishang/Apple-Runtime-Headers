//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCTest/NSObject-Protocol.h>

@class NSArray, XCTWaiter, XCTestExpectation;

@protocol XCTWaiterDelegate <NSObject>
- (void)nestedWaiter:(XCTWaiter *)arg1 wasInterruptedByTimedOutWaiter:(XCTWaiter *)arg2;
- (void)waiter:(XCTWaiter *)arg1 didFulfillInvertedExpectation:(XCTestExpectation *)arg2;
- (void)waiter:(XCTWaiter *)arg1 fulfillmentDidViolateOrderingConstraintsForExpectation:(XCTestExpectation *)arg2 requiredExpectation:(XCTestExpectation *)arg3;
- (void)waiter:(XCTWaiter *)arg1 didTimeoutWithUnfulfilledExpectations:(NSArray *)arg2;
@end

