//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (FCAdditions)
+ (id)fc_fileURLForWidgetReferralItemWithName:(id)arg1;
+ (id)fc_safeURLWithString:(id)arg1;
+ (id)fc_URLWithResourceID:(id)arg1;
- (id)fc_URLByAddingQueryItem:(id)arg1;
- (id)fc_URLByDeletingFragment;
- (id)fc_URLByDeletingQuery;
- (BOOL)_isFeldsparOldChannelURL;
- (BOOL)_isFeldsparOldTopicURL;
- (BOOL)fc_isEqualToURL:(id)arg1;
- (id)fc_feldsparTagID;
- (BOOL)fc_isNewsTagURL;
- (BOOL)fc_isFeldsparInterstitialPreviewURL;
- (BOOL)_isFeldsparOldArticleURL;
- (BOOL)fc_isNewsURL;
- (id)fc_NewsIssueID;
- (id)fc_NewsArticleID;
- (BOOL)fc_isHardPaywallNewsArticleURL:(out id *)arg1;
- (BOOL)fc_isNewsIssueURL;
- (BOOL)fc_isNewsArticleURL;
- (id)fc_resourceID;
- (BOOL)fc_isResourceURL;
@end

