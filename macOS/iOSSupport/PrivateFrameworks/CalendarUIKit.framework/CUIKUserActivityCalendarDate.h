//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarUIKit/CUIKUserActivity.h>

@class NSDate;

@interface CUIKUserActivityCalendarDate : CUIKUserActivity
{
    NSDate *_date;
    unsigned long long _view;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long view; // @synthesize view=_view;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) BOOL isTomorrow;
- (void)updateActivity:(id)arg1;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDate:(id)arg1 view:(unsigned long long)arg2;
- (id)initWithDate:(id)arg1 view:(unsigned long long)arg2 calendar:(id)arg3;

@end

