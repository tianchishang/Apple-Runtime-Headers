//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariSharedUI/WBSTouchIconCache.h>

__attribute__((visibility("hidden")))
@interface TouchIconCache : WBSTouchIconCache
{
}

+ (id)_deprecatedImageDirectoryURL;
+ (id)_imageDirectoryURL;
+ (void)deleteDeprecatedCacheDirectory;
+ (id)sharedCache;
+ (id)_generateDefaultFavoritesIcon;
+ (id)_paddedUncoloredFavoritesGlyph;
+ (id)_monogramConfiguration;
- (void)_willSaveTouchIcon:(id)arg1 withCacheSettingsEntry:(id)arg2;
- (void)_didLoadTouchIcon:(id)arg1 withCacheSettingsEntry:(id)arg2;
- (id)_operationWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_didGenerateResponse:(id)arg1 forRequest:(id)arg2;
- (id)initWithImageDirectoryURL:(id)arg1;

@end

