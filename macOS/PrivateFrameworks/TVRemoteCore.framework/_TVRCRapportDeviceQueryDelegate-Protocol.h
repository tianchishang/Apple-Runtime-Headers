//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVRemoteCore/NSObject-Protocol.h>

@class _TVRCRPCompanionLinkClientWrapper, _TVRCRapportDeviceQuery;

@protocol _TVRCRapportDeviceQueryDelegate <NSObject>

@optional
- (void)rapportDeviceQuery:(_TVRCRapportDeviceQuery *)arg1 removedDevice:(_TVRCRPCompanionLinkClientWrapper *)arg2;
- (void)rapportDeviceQuery:(_TVRCRapportDeviceQuery *)arg1 addedDevice:(_TVRCRPCompanionLinkClientWrapper *)arg2;
@end

