//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MTUIAlarmView, UISwitch;
@protocol HUAlarmTableViewCellDelegate;

@interface HUAlarmTableViewCell : UITableViewCell
{
    _Bool _disabled;
    _Bool _enabled;
    id <HUAlarmTableViewCellDelegate> _delegate;
    MTUIAlarmView *_alarmView;
    UISwitch *_enabledSwitch;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) UISwitch *enabledSwitch; // @synthesize enabledSwitch=_enabledSwitch;
@property(retain, nonatomic) MTUIAlarmView *alarmView; // @synthesize alarmView=_alarmView;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) __weak id <HUAlarmTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)willTransitionToState:(unsigned long long)arg1;
- (void)_alarmActiveChanged:(id)arg1;
- (void)setAlarmActiveDelegate:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)refreshUI:(id)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)init;

@end

