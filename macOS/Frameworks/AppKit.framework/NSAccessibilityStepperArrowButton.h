//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSAccessibilityMockUIElement.h>

__attribute__((visibility("hidden")))
@interface NSAccessibilityStepperArrowButton : NSAccessibilityMockUIElement
{
    BOOL _increments;
}

+ (id)decrementButtonWithParent:(id)arg1;
+ (id)incrementButtonWithParent:(id)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (BOOL)isEqual:(id)arg1;
- (BOOL)increments;
- (id)initWithIncrements:(BOOL)arg1 parent:(id)arg2;

@end

