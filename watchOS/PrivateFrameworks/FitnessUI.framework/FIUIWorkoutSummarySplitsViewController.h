//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PepperUICore/PUICTableViewController.h>

@class FIUIFormattingManager, HKUnit, HKWorkout, NSArray;

@interface FIUIWorkoutSummarySplitsViewController : PUICTableViewController
{
    NSArray *_splits;
    HKWorkout *_workout;
    HKUnit *_unit;
    FIUIFormattingManager *_formattingManager;
}

- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_updateUnitPreferences;
- (void)dealloc;
- (void)_updateSplits;
- (id)initWithWorkout:(id)arg1 formattingManager:(id)arg2;

@end

