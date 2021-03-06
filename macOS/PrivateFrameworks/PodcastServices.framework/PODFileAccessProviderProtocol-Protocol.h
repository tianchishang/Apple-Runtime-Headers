//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PodcastServices/NSObject-Protocol.h>

@class NSString, NSURL;

@protocol PODFileAccessProviderProtocol <NSObject>
- (void)requestITunesManagedLibraryLocation:(void (^)(NSURL *, NSError *))arg1;
- (void)obtainSecurityScopedURL:(NSURL *)arg1 response:(void (^)(NSData *, NSError *))arg2;
- (void)requestContentImportStateForDomain:(NSString *)arg1 response:(void (^)(long long))arg2;
@end

