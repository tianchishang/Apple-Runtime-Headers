//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/NSObject-Protocol.h>

@class PHImageRequest, PHMediaRequestContext;

@protocol PHMediaRequestContextDelegate <NSObject>
- (void)mediaRequestContextDidFinish:(PHMediaRequestContext *)arg1;
- (void)mediaRequestContext:(PHMediaRequestContext *)arg1 isQueryingCacheForRequest:(PHImageRequest *)arg2 didWait:(_Bool *)arg3 didFindImage:(_Bool *)arg4 resultHandler:(void (^)(struct CGImage *, _Bool, NSError *))arg5;
@end

