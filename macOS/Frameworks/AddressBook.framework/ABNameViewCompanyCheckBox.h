//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@protocol ABNameViewCompanyCheckBoxDelegate;

@interface ABNameViewCompanyCheckBox : NSButton
{
    id <ABNameViewCompanyCheckBoxDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ABNameViewCompanyCheckBoxDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)resignFirstResponder;

@end

