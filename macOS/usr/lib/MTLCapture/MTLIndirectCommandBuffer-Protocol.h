//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MTLCapture/MTLResource-Protocol.h>

@protocol MTLIndirectRenderCommand;

@protocol MTLIndirectCommandBuffer <MTLResource>
@property(readonly) unsigned long long size;
- (id <MTLIndirectRenderCommand>)indirectRenderCommandAtIndex:(unsigned long long)arg1;
- (void)resetWithRange:(struct _NSRange)arg1;
@end

