//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class HFItem;
@protocol HUResizableCellDelegate;

@protocol HUCellProtocol <NSObject>
@property(retain, nonatomic) HFItem *item;
- (void)updateUIWithAnimation:(_Bool)arg1;

@optional
@property(nonatomic) __weak id <HUResizableCellDelegate> resizingDelegate;
@end

