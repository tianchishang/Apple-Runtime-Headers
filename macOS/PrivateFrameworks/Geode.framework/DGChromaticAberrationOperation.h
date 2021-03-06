//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Geode/DGOperation.h>

@class NSNumber;

@interface DGChromaticAberrationOperation : DGOperation
{
    NSNumber *_inputRedCyan;
    NSNumber *_inputBlueYellow;
}

+ (id)outputKeys;
+ (id)inputKeys;
+ (id)attributes;
+ (id)_stringsTableName;
@property(copy, nonatomic) NSNumber *inputBlueYellow; // @synthesize inputBlueYellow=_inputBlueYellow;
@property(copy, nonatomic) NSNumber *inputRedCyan; // @synthesize inputRedCyan=_inputRedCyan;
- (BOOL)needsInputImageWithoutGeometry;
- (BOOL)allowDough;
- (id)initWithOperation:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)_filter;

@end

