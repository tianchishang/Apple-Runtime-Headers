//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSCGSDockNotifications : NSObject
{
}

+ (void)addSelectWindowHandler:(CDUnknownBlockType)arg1;
+ (void)addResolutionChangedHandler:(CDUnknownBlockType)arg1;
+ (void)addRectChangedHandlerWithOrder:(long long)arg1 block:(CDUnknownBlockType)arg2;
+ (void)addRectChangedHandler:(CDUnknownBlockType)arg1;
+ (void)addRestoreEffectDoneHandler:(CDUnknownBlockType)arg1;
+ (void)addMinimizeEffectDoneHandler:(CDUnknownBlockType)arg1;
+ (void)addMiniViewShownHandler:(CDUnknownBlockType)arg1;
+ (void)addMiniViewHiddenHandler:(CDUnknownBlockType)arg1;
+ (void)addMaximizedWindowsHandler:(CDUnknownBlockType)arg1;
+ (void)addGetAppMenuHandler:(CDUnknownBlockType)arg1;
+ (void)addDockDiedHandler:(CDUnknownBlockType)arg1;
+ (void)addDockAliveHandlerWithOrder:(long long)arg1 block:(CDUnknownBlockType)arg2;
+ (void)addDockAliveHandler:(CDUnknownBlockType)arg1;
+ (void)addDoMenuCommandHandler:(CDUnknownBlockType)arg1;

@end

