//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface HKElectrocardiogramGridOptions : NSObject
{
    unsigned int _unitMultiple;
    unsigned int _axis;
    UIColor *_lineColor;
    float _lineWidth;
}

- (void).cxx_destruct;
@property(nonatomic) float lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(nonatomic) unsigned int axis; // @synthesize axis=_axis;
@property(nonatomic) unsigned int unitMultiple; // @synthesize unitMultiple=_unitMultiple;
@property(readonly, nonatomic) struct CGAffineTransform scale;
- (id)initWithUnitMultiple:(int)arg1 axis:(unsigned int)arg2 lineColor:(id)arg3 lineWidth:(float)arg4;

@end

