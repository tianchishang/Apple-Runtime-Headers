//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Message/ECMessage-Protocol.h>

@protocol EDIndexableAccount, EDIndexableMailbox;

@protocol EDIndexableMessage <ECMessage>
@property(readonly, nonatomic) unsigned int fileSize;
@property(readonly, nonatomic) id <EDIndexableMailbox> mailbox;
@property(readonly, nonatomic) id <EDIndexableAccount> account;
@end

