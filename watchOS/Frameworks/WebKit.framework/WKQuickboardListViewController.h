//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PepperUICore/PUICQuickboardListViewController.h>

#import <WebKit/PUICQuickboardLanguageControllerDelegate-Protocol.h>

@protocol WKQuickboardViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WKQuickboardListViewController : PUICQuickboardListViewController <PUICQuickboardLanguageControllerDelegate>
{
    _Bool _contextViewNeedsUpdate;
    struct RetainPtr<UIView> _contextView;
    struct RetainPtr<PUICStatusBarGlobalContextViewAssertion> _statusBarAssertion;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)headerContentView;
- (float)headerContentViewHeight;
- (void)languageControllerDidChangePrimaryLanguage:(id)arg1;
- (id)actionController;
- (void)reloadContextView;
- (void)_handleStatusBarNavigation;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)prefersStatusBarHidden;
- (void)updateContextViewIfNeeded;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <WKQuickboardViewControllerDelegate> delegate; // @dynamic delegate;

@end

