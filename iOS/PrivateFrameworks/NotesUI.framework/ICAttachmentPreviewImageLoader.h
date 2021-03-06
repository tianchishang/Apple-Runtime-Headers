//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, UIImage;

@interface ICAttachmentPreviewImageLoader : NSObject
{
    _Bool _delayLoadingURLs;
    CDUnknownBlockType _imageDidLoadBlock;
    UIImage *_image;
    UIImage *_originalImage;
    UIImage *_orientedImage;
    NSData *_data;
    double _scale;
    NSArray *_previewImageURLs;
    long long _imageOrientation;
}

+ (id)orientedImage:(id)arg1 withTransform:(struct CGAffineTransform)arg2 background:(int)arg3 backgroundTransform:(struct CGAffineTransform)arg4;
+ (id)orientedImage:(id)arg1 withBackground:(int)arg2;
- (void).cxx_destruct;
@property(nonatomic) long long imageOrientation; // @synthesize imageOrientation=_imageOrientation;
@property(nonatomic) _Bool delayLoadingURLs; // @synthesize delayLoadingURLs=_delayLoadingURLs;
@property(copy, nonatomic) NSArray *previewImageURLs; // @synthesize previewImageURLs=_previewImageURLs;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) UIImage *orientedImage; // @synthesize orientedImage=_orientedImage;
@property(retain, nonatomic) UIImage *originalImage; // @synthesize originalImage=_originalImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) CDUnknownBlockType imageDidLoadBlock; // @synthesize imageDidLoadBlock=_imageDidLoadBlock;
- (id)loadOrientedImage;
- (id)loadImage;
- (_Bool)canLoadImage;
- (void)loadData;
- (id)initWithOriginalImage:(id)arg1 orientedImage:(id)arg2 data:(id)arg3 scale:(double)arg4 previewImageURLs:(id)arg5 delayLoadingURLs:(_Bool)arg6;

@end

