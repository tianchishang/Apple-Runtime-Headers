//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSTimer;

__attribute__((visibility("hidden")))
@interface VUINowPlayingTimerFeatureInfo : NSObject
{
    NSTimer *_repeatingTimer;
    NSTimer *_oneTimeTimer;
    NSDate *_startDate;
    NSDate *_backgroundedDate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *backgroundedDate; // @synthesize backgroundedDate=_backgroundedDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) __weak NSTimer *oneTimeTimer; // @synthesize oneTimeTimer=_oneTimeTimer;
@property(nonatomic) __weak NSTimer *repeatingTimer; // @synthesize repeatingTimer=_repeatingTimer;

@end

