//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mail/MFEWSNetworkTaskOperation.h>

@class ECLocalMessageAction, NSProgress;
@protocol MFEWSMessageActionSyncOperationDelegate;

@interface MFEWSMessageActionSyncOperation : MFEWSNetworkTaskOperation
{
    ECLocalMessageAction *_messageAction;
    NSProgress *_progress;
    id <MFEWSMessageActionSyncOperationDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MFEWSMessageActionSyncOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) ECLocalMessageAction *messageAction; // @synthesize messageAction=_messageAction;
- (id)folderIDStringForMailboxURLString:(id)arg1;
- (id)folderIDStringForMailbox:(id)arg1;
- (BOOL)isRecoverableError:(id)arg1;
- (id)init;
- (id)initWithMessageAction:(id)arg1;

@end

