//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileHandle, SSLogFileOptions;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SSRollableLog : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _lastFileStatTime;
    NSFileHandle *_fileHandle;
    NSObject<OS_dispatch_source> *_fileObserverSource;
    SSLogFileOptions *_options;
}

- (void)_rollLogFiles;
- (void)_openLogFile;
- (id)_logFilePathWithIndex:(long long)arg1;
- (void)_closeLogFile;
- (void)_checkLogFileSize;
- (id)_activeLogFilePath;
- (void)writeString:(id)arg1;
@property(readonly) SSLogFileOptions *logOptions;
- (void)dealloc;
- (id)initWithLogOptions:(id)arg1;

@end

