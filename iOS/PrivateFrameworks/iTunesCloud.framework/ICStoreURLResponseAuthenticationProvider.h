//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesCloud/ICURLResponseAuthenticationProvider.h>

#import <iTunesCloud/NSSecureCoding-Protocol.h>

@interface ICStoreURLResponseAuthenticationProvider : ICURLResponseAuthenticationProvider <NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;
- (void)_adjustedAuthenticationPolicyForResponse:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_performAuthenticationUsingRequestContext:(id)arg1 usingVerificationInteractionLevel:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (_Bool)isEqual:(id)arg1;
- (void)performAuthenticationUsingRequestContext:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)performAuthenticationToHandleResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;

@end

