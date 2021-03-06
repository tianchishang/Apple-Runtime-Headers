//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSMutableDictionary;

@interface NMUButton : UIButton
{
    NSMutableDictionary *_backgroundColors;
    NSMutableDictionary *_imageTintColors;
    NSMutableDictionary *_transforms;
}

- (void).cxx_destruct;
- (void)_updateStyle;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (struct CGAffineTransform)transformForState:(unsigned int)arg1;
- (id)imageTintColorForState:(unsigned int)arg1;
- (id)backgroundColorForState:(unsigned int)arg1;
- (void)setTransform:(struct CGAffineTransform)arg1 forState:(unsigned int)arg2;
- (void)setImageTintColor:(id)arg1 forState:(unsigned int)arg2;
- (void)setBackgroundColor:(id)arg1 forState:(unsigned int)arg2;
- (id)initWithFrame:(struct CGRect)arg1 backgroundColor:(id)arg2 backgroundCornerRadius:(float)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

