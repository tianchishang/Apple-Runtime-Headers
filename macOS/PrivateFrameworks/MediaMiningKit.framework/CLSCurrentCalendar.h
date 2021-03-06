//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaMiningKit/CLSAutoupdatingCurrentCalendar.h>

@interface CLSCurrentCalendar : CLSAutoupdatingCurrentCalendar
{
}

+ (BOOL)nextWeekendLocalStartDate:(out id *)arg1 interval:(out double *)arg2 options:(unsigned long long)arg3 afterDate:(id)arg4;
+ (BOOL)rangeOfWeekendLocalStartDate:(out id *)arg1 interval:(out double *)arg2 containingDate:(id)arg3;
+ (BOOL)closestWeekendLocalStartDate:(out id *)arg1 interval:(out double *)arg2 afterDate:(id)arg3;
+ (BOOL)dateIntervalIntersectsWeekend:(id)arg1;
+ (BOOL)isWeekendDate:(id)arg1;
+ (void)update;
+ (id)calendar;
+ (void)initialize;

@end

