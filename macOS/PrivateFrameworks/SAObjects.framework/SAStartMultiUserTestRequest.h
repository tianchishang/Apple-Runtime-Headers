//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SAStartRequest.h>

@class NSString, SAConfidenceScores;

@interface SAStartMultiUserTestRequest : SAStartRequest
{
}

+ (id)startMultiUserTestRequestWithDictionary:(id)arg1 context:(id)arg2;
- (BOOL)requiresResponse;
@property(retain, nonatomic) SAConfidenceScores *voiceIDConfidenceScores;
@property(copy, nonatomic) NSString *expectedSelectedSharedUserId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

