//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsToday/NSCopying-Protocol.h>
#import <NewsToday/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@protocol NTHeadlinePersonalizationMetadata <NSSecureCoding, NSCopying>
@property(readonly, copy, nonatomic) NSDictionary *scoredTopicIDs;
@property(readonly, copy, nonatomic) NSString *publisherID;
@property(readonly, copy, nonatomic) NSString *articleID;
@end

