//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSCore/NSObject-Protocol.h>
#import <MPSCore/NSSecureCoding-Protocol.h>

@class MPSImage, MPSImageDescriptor, MPSKernel, NSArray;
@protocol MTLCommandBuffer;

@protocol MPSImageAllocator <NSObject, NSSecureCoding>
- (MPSImage *)imageForCommandBuffer:(id <MTLCommandBuffer>)arg1 imageDescriptor:(MPSImageDescriptor *)arg2 kernel:(MPSKernel *)arg3;

@optional
- (NSArray *)imageBatchForCommandBuffer:(id <MTLCommandBuffer>)arg1 imageDescriptor:(MPSImageDescriptor *)arg2 kernel:(MPSKernel *)arg3 count:(unsigned long long)arg4;
@end

