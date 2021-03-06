//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUITableViewCell.h>

@class NSString, SKUIColorScheme, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIProductPageInAppPurchaseTableCell : SKUITableViewCell
{
    SKUIColorScheme *_colorScheme;
    struct UIEdgeInsets _contentInsets;
    UILabel *_indexLabel;
    UILabel *_nameLabel;
    UILabel *_priceLabel;
}

- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(retain, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *productName;
@property(copy, nonatomic) NSString *priceString;
@property(copy, nonatomic) NSString *indexString;

@end

