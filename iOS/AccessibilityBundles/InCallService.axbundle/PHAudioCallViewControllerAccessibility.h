//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "__PHAudioCallViewControllerAccessibility_super.h"

@interface PHAudioCallViewControllerAccessibility : __PHAudioCallViewControllerAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)setMiddleViewState:(unsigned short)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_accessibilityBottomBarStoppedAnimating:(id)arg1;
- (void)setCurrentState:(unsigned short)arg1 animated:(_Bool)arg2;
- (void)_axSetPhoneToMiddleState:(unsigned short)arg1 totalTimeTried:(double)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)dealloc;
- (void)_accessibilitySubscribeForBottomBarNotificationsIfNecessary;
- (void)_accessibilitySetHasSubscribedToBottomBarNotifications:(_Bool)arg1;
- (_Bool)_accessibilityHasSubscribedForBottomBarNotifications;
- (void)_accessibilitySetWantsToShowKeypad:(_Bool)arg1;
- (_Bool)_accessibilityWantsToShowKeypad;
- (void)_accessibilitySetMiddleViewStateDepth:(long long)arg1;
- (long long)_accessibilityMiddleViewStateDepth;

@end

