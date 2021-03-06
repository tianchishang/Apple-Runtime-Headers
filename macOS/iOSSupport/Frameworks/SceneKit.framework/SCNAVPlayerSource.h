//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNTextureSource.h>

@class AVPlayer, AVPlayerItemVideoOutput;
@protocol MTLTexture;

__attribute__((visibility("hidden")))
@interface SCNAVPlayerSource : SCNTextureSource
{
    AVPlayer *_player;
    AVPlayerItemVideoOutput *_videoOutput;
    struct __CVMetalTextureCache *_textureCache;
    struct __CVBuffer *_pixelBuffer;
    id <MTLTexture> _mtlTexture;
    unsigned long long _texturePixelFormat;
    unsigned char _videoSourceFormat;
    unsigned long long _width;
    unsigned long long _height;
}

-     // Error parsing type: @40@0:8^{__C3DEngineContext=}16^{__C3DTextureSampler={__CFRuntimeBase=QAQ}iiiiii{C3DColor4=(?=[4f]{?=ffff})}fCiQ}24^d32, name: metalTextureWithEngineContext:textureSampler:nextFrameTime:
- (void)connectToProxy:(struct __C3DImageProxy *)arg1;
@property(retain, nonatomic) AVPlayer *player;
- (void)dealloc;
- (void)unregisterPlayer:(id)arg1;
- (void)registerPlayer:(id)arg1;
- (void)setVideoSourceFormat:(unsigned char)arg1;
- (void)discardVideoData;
- (id)init;

@end

