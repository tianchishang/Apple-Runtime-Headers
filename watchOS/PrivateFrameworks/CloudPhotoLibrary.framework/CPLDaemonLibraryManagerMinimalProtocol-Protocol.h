//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CPLMomentShare, CPLResource, CPLScopedIdentifier, NSArray, NSDictionary, NSString, NSURL;

@protocol CPLDaemonLibraryManagerMinimalProtocol
- (void)provideCloudResource:(CPLResource *)arg1 completionHandler:(void (^)(CPLResource *, unsigned int))arg2;
- (void)provideRecordWithCloudScopeIdentifier:(CPLScopedIdentifier *)arg1 completionHandler:(void (^)(CPLRecordChange *, unsigned int))arg2;
- (void)provideLibraryInfoForScopeWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(CPLLibraryInfo *, unsigned int))arg2;
- (void)unblockEngineElementOnce:(NSString *)arg1;
- (void)unblockEngineElement:(NSString *)arg1;
- (void)blockEngineElement:(NSString *)arg1;
- (void)reportMiscInformation:(NSDictionary *)arg1;
- (void)reportSetting:(NSString *)arg1 hasBeenSetToValue:(NSString *)arg2;
- (void)addInfoToLog:(NSString *)arg1;
- (void)compactFileCacheWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)getResourcesForItemWithScopedIdentifier:(CPLScopedIdentifier *)arg1 completionHandler:(void (^)(NSError *, NSArray *))arg2;
- (void)cloudCacheGetDescriptionForRecordWithScopedIdentifier:(CPLScopedIdentifier *)arg1 related:(_Bool)arg2 completionHandler:(void (^)(id, id, NSError *))arg3;
- (void)getCloudCacheForRecordWithScopedIdentifier:(CPLScopedIdentifier *)arg1 completionHandler:(void (^)(CPLRecordChange *, NSError *))arg2;
- (void)getStatusesForScopesWithIdentifiers:(NSArray *)arg1 includeStorages:(_Bool)arg2 completionHandler:(void (^)(NSDictionary *, NSError *))arg3;
- (void)getStatusArrayForComponents:(NSArray *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)getStatusForComponents:(NSArray *)arg1 completionHandler:(void (^)(NSString *, NSError *))arg2;
- (void)getListOfComponentsWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)resetCacheWithOption:(unsigned int)arg1 reason:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)setDiagnosticsEnabled:(_Bool)arg1;
- (void)noteClientIsEndingSignificantWork;
- (void)noteClientIsBeginningSignificantWork;
- (void)enableMingling;
- (void)disableMingling;
- (void)setShouldOverride:(_Bool)arg1 forSystemBudgets:(unsigned int)arg2;
- (void)getSystemBudgetsWithCompletionHandler:(void (^)(NSDictionary *, NSError *))arg1;
- (void)enableSynchronizationWithReason:(NSString *)arg1;
- (void)disableSynchronizationWithReason:(NSString *)arg1;
- (void)addStatusChangesForRecordsWithScopedIdentifiers:(NSArray *)arg1 persist:(_Bool)arg2;
- (void)getChangedStatusesWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)getStatusForRecordsWithScopedIdentifiers:(NSArray *)arg1 completionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)checkHasBackgroundDownloadOperationsWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;
- (void)noteClientIsInBackground;
- (void)noteClientIsInForeground;
- (void)resetStatus;
- (void)startSyncSession;
- (void)cancelSyncTaskWithIdentifier:(NSString *)arg1;
- (void)cancelTaskWithIdentifier:(NSString *)arg1;
- (void)forceSyncForScopeIdentifiers:(NSArray *)arg1 reply:(void (^)(NSString *))arg2;
- (void)queryUserIdentitiesWithParticipants:(NSArray *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)acceptMomentShare:(CPLMomentShare *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)fetchMomentShareFromShareURL:(NSURL *)arg1 completionHandler:(void (^)(CPLMomentShare *, NSError *))arg2;
- (void)publishMomentShare:(CPLMomentShare *)arg1 completionHandler:(void (^)(CPLMomentShare *, NSError *))arg2;
- (void)getMappedScopedIdentifiersForScopedIdentifiers:(NSArray *)arg1 inAreLocalIdentifiers:(_Bool)arg2 completionHandler:(void (^)(NSDictionary *, NSError *))arg3;
- (void)beginInMemoryDownloadOfResource:(CPLResource *)arg1 reply:(void (^)(NSString *))arg2;
- (void)rampingRequestForResourceType:(unsigned int)arg1 numRequested:(unsigned int)arg2 completionHandler:(void (^)(_Bool, unsigned int, NSError *))arg3;
- (void)getStreamingURLForResource:(CPLResource *)arg1 intent:(unsigned int)arg2 hints:(NSDictionary *)arg3 completionHandler:(void (^)(NSURL *, NSDate *, NSError *))arg4;
- (void)beginDownloadForResource:(CPLResource *)arg1 clientBundleID:(NSString *)arg2 highPriority:(_Bool)arg3 proposedTaskIdentifier:(NSString *)arg4 reply:(void (^)(NSString *))arg5;
- (void)deactivateLibraryWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)closeLibraryWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)openLibraryWithClientLibraryBaseURL:(NSURL *)arg1 cloudLibraryStateStorageURL:(NSURL *)arg2 cloudLibraryResourceStorageURL:(NSURL *)arg3 libraryIdentifier:(NSString *)arg4 options:(unsigned int)arg5 completionHandler:(void (^)(NSError *, NSDictionary *, unsigned long long, unsigned long long, unsigned int, unsigned int, unsigned int, NSString *, NSString *, NSURL *))arg6;
- (void)connectWithCompletionHandler:(void (^)(void))arg1;
@end

