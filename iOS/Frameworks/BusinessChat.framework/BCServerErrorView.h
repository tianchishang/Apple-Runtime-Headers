//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface BCServerErrorView : UIView
{
    UIView *_contentView;
    UILabel *_messageLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)setupConstraints;
- (void)setupSubviews;
- (id)init;

@end

