//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSArray, NSMutableArray;

@interface MPUAbbreviatingLabel : UILabel
{
    NSMutableArray *_textRepresentationSizes;
    NSArray *_textRepresentations;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *textRepresentations; // @synthesize textRepresentations=_textRepresentations;
- (void)_setTextRepresentation:(id)arg1;
- (void)_selectBestRepresentation;
- (void)_calculateTextSizes;
- (void)setNumberOfLines:(int)arg1;
- (void)setText:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setFont:(id)arg1;

@end

