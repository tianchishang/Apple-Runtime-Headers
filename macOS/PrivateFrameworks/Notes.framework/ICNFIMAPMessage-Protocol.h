//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Notes/NSObject-Protocol.h>

@class NSDate, NSString;

@protocol ICNFIMAPMessage <NSObject>
@property(readonly, copy, nonatomic) NSString *mailboxName;
@property(readonly, copy) NSDate *dateReceived;
@property(readonly, copy) NSString *subject;
@property(readonly) unsigned long long messageSize;
@property(readonly) CDStruct_07ba05d6 remoteFlags;
@property BOOL hasTemporaryUid;
@property BOOL partsHaveBeenCached;
@property BOOL isPartial;
@property(readonly, copy, nonatomic) NSString *messageID;
@property(nonatomic) unsigned int uid;
@end

