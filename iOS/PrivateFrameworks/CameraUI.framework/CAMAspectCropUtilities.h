//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAMAspectCropUtilities : NSObject
{
}

+ (struct CGSize)finalExpectedSizeWithCaptureDimensions:(CDStruct_79c71658)arg1 orientation:(int)arg2 aspectRatio:(long long)arg3;
+ (struct CGSize)finalExpectedSizeWithPhotoMetadata:(id)arg1 aspectRatio:(long long)arg2;
+ (id)cropFilterForAspectRatio:(long long)arg1 imageSize:(struct CGSize)arg2;
+ (struct CGRect)cropRectForAspectRatio:(long long)arg1 inImageBounds:(struct CGRect)arg2;

@end

