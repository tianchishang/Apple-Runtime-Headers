//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASWebAuthenticationSession;

@interface SFAuthenticationSession : NSObject
{
    ASWebAuthenticationSession *_session;
}

- (void).cxx_destruct;
- (void)cancel;
- (BOOL)start;
- (void)dealloc;
- (id)initWithURL:(id)arg1 callbackURLScheme:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

