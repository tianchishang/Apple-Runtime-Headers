//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol AXHeardServerDelegate, OS_dispatch_queue, OS_xpc_object;

@interface AXHeardServer : NSObject
{
    id <AXHeardServerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_xpc_object> *_xpcConnection;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(nonatomic) __weak id <AXHeardServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleMessageError:(id)arg1 destructive:(BOOL)arg2;
- (void)handleMessageWithPayload:(id)arg1 forIdentifier:(unsigned long long)arg2;
- (void)sendMessageWithPayload:(id)arg1 andIdentifier:(unsigned long long)arg2;
- (void)sendSynchronousMessageWithPayload:(id)arg1 andIdentifier:(unsigned long long)arg2;
- (id)setupServerIfNecessary;
- (void)handleReply:(id)arg1;
- (void)resetConnection;
- (void)terminateConnection;
- (void)startServerWithDelegate:(id)arg1;
- (void)dealloc;

@end

