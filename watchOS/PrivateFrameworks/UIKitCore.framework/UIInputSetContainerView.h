//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIInputSetHostView.h>

#import <UIKitCore/_UIViewHost-Protocol.h>

@class NSMutableDictionary, NSString, UIKBRenderConfig, UIScreen;

__attribute__((visibility("hidden")))
@interface UIInputSetContainerView : UIInputSetHostView <_UIViewHost>
{
    UIKBRenderConfig *_renderConfig;
    NSMutableDictionary *_hostedViews;
    _Bool _disableGeometryObserverNotifications;
    struct CGPoint _offsetOrigin;
}

+ (_Bool)_notifyOnExplicitLayout;
+ (_Bool)_shouldHitTestInputViewFirst;
@property(nonatomic) struct CGPoint offsetOrigin; // @synthesize offsetOrigin=_offsetOrigin;
- (_Bool)_isTransparentFocusRegion;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)_disableGeometryObserverNotification;
- (void)performWithoutGeometryObserverNotifications:(CDUnknownBlockType)arg1;
- (void)_didRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (_Bool)hasHostedViews;
- (void)addHostedView:(id)arg1 withViewRemovalHandler:(CDUnknownBlockType)arg2;
@property(readonly, retain) UIScreen *hostingScreen;
- (void)_setAccessoryViewFrame:(struct CGRect)arg1;
- (struct CGRect)_accessoryViewFrame;
- (id)_inputWindowController;
- (void)_setRenderConfig:(id)arg1;
- (id)_inheritedRenderConfig;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

