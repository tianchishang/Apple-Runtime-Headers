//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaServices/NSObject-Protocol.h>

@class NSData;
@protocol NSSecureCoding;

@protocol MSVSegmentedSubEncoder <NSObject>
@property(readonly) NSData *encodedData;
@property(readonly, nonatomic) _Bool hasTopLevelData;
- (void)finishEncodingPartialTopLevelObject;
- (void)beginEncodingPartialTopLevelObject:(id <NSSecureCoding>)arg1;
@end

