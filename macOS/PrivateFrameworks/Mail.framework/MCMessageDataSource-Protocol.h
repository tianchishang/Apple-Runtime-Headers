//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mail/MCActivityTarget-Protocol.h>
#import <Mail/NSCopying-Protocol.h>

@class MCMessage, NSArray, NSColor, NSData, NSDictionary, NSMutableSet, NSString, NSURL;
@protocol MCMailAccount, MCMailbox;

@protocol MCMessageDataSource <MCActivityTarget, NSCopying>
@property(readonly, nonatomic) id <MCMailbox> mailbox;
@property(readonly, nonatomic) id <MCMailAccount> account;
@property(readonly, nonatomic) BOOL canCompact;
@property(readonly) BOOL isReadOnly;
- (NSData *)bodyDataForMessage:(MCMessage *)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3 allowPartial:(BOOL)arg4;
- (NSData *)bodyDataForMessage:(MCMessage *)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;
- (NSData *)headerDataForMessage:(MCMessage *)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;
- (void)getTopLevelMimePart:(id *)arg1 headers:(id *)arg2 body:(id *)arg3 forMessage:(MCMessage *)arg4 fetchIfNotAvailable:(BOOL)arg5 updateFlags:(BOOL)arg6 allowPartial:(BOOL)arg7 skipSignatureVerification:(BOOL)arg8;
- (NSString *)uniquedString:(NSString *)arg1;
- (void)flushAllCaches;
- (void)invalidateMessage:(MCMessage *)arg1;
- (void)sendResponseType:(BOOL)arg1 forMeetingMessage:(MCMessage *)arg2 completionHandler:(void (^)(void))arg3;
- (NSArray *)routeMessages:(NSArray *)arg1 fetchingBodies:(BOOL)arg2 messagesNeedingBodies:(NSMutableSet *)arg3;
- (void)doCompact;
- (void)deleteMessages:(NSArray *)arg1 moveToTrash:(BOOL)arg2;
- (void)saveSnippetsForMessages:(NSDictionary *)arg1;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(MCMessage *)arg4;
- (NSURL *)attachmentsDirectoryForMessage:(MCMessage *)arg1 partNumber:(NSString *)arg2;
- (NSString *)attachmentsDirectoryForMessage:(MCMessage *)arg1;
- (void)setColor:(NSColor *)arg1 highlightTextOnly:(BOOL)arg2 forMessages:(NSArray *)arg3;
- (NSArray *)setJunkMailLevel:(long long)arg1 forMessages:(NSArray *)arg2 trainJunkMailDatabase:(BOOL)arg3 userRecorded:(BOOL)arg4;
- (void)messageFlagsDidChange:(NSArray *)arg1 flags:(NSDictionary *)arg2;
- (NSArray *)setPersistenceConversationFlags:(unsigned long long)arg1 forMessages:(NSArray *)arg2;
- (void)unmuteConversationForMessages:(NSArray *)arg1;
- (void)muteConversationForMessages:(NSArray *)arg1;
- (void)setFlagWithKey:(NSString *)arg1 state:(BOOL)arg2 forMessages:(NSArray *)arg3;
- (void)async_setFlagWithKey:(NSString *)arg1 state:(BOOL)arg2 forMessages:(NSArray *)arg3;
- (NSArray *)setFlagsFromDictionary:(NSDictionary *)arg1 forMessages:(NSArray *)arg2;
- (void)async_setFlagsFromDictionary:(NSDictionary *)arg1 forMessages:(NSArray *)arg2;
- (MCMessage *)messageForMessageID:(NSString *)arg1;

@optional
- (void)async_deleteMessages:(NSArray *)arg1 moveToTrash:(BOOL)arg2;
@end

