//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBUIWorkspaceAnimationController.h>

@class SBSceneLayoutViewController, SBUIBlockAnimationController;

@interface SBSceneLayoutTransitionAnimationController : SBUIWorkspaceAnimationController
{
    SBSceneLayoutViewController *_layoutController;
    SBUIBlockAnimationController *_blockAnimation;
}

- (void).cxx_destruct;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (_Bool)_canBeInterrupted;
- (id)containerView;
- (id)_getTransitionWindow;
- (id)animationSettings;
- (id)initWithWorkspaceTransitionRequest:(id)arg1;
- (id)initWithTransitionContextProvider:(id)arg1 layoutController:(id)arg2 animationSettings:(id)arg3 animationBlock:(CDUnknownBlockType)arg4;
- (id)initWithTransitionContextProvider:(id)arg1 layoutController:(id)arg2 animationSettings:(id)arg3 stepped:(_Bool)arg4 animationBlock:(CDUnknownBlockType)arg5;

@end

