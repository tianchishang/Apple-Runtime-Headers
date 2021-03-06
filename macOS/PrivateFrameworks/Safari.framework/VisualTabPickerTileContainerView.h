//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <Safari/VisualTabPickerNewTabViewDelegate-Protocol.h>
#import <Safari/VisualTabPickerThumbnailDataSource-Protocol.h>
#import <Safari/VisualTabPickerThumbnailDelegate-Protocol.h>

@class NSString, NSTextField, VisualTabPickerGridView, VisualTabPickerShadowTileView;
@protocol VisualTabPickerTileContainerDataSource, VisualTabPickerTileContainerDelegate;

__attribute__((visibility("hidden")))
@interface VisualTabPickerTileContainerView : NSView <VisualTabPickerNewTabViewDelegate, VisualTabPickerThumbnailDataSource, VisualTabPickerThumbnailDelegate>
{
    VisualTabPickerShadowTileView *_thumbnailView;
    NSTextField *_title;
    BOOL _didSetTileConstraints;
    BOOL _visibleToUser;
    id <VisualTabPickerTileContainerDataSource> _dataSource;
    id <VisualTabPickerTileContainerDelegate> _delegate;
    VisualTabPickerGridView *_visualTabPickerGridView;
    long long _tileContainerType;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL visibleToUser; // @synthesize visibleToUser=_visibleToUser;
@property(nonatomic) long long tileContainerType; // @synthesize tileContainerType=_tileContainerType;
@property(nonatomic) __weak VisualTabPickerGridView *visualTabPickerGridView; // @synthesize visualTabPickerGridView=_visualTabPickerGridView;
@property(nonatomic) __weak id <VisualTabPickerTileContainerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <VisualTabPickerTileContainerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)_updateThumbnailLayout;
- (struct CGRect)_containerTileFrame;
- (void)_setUpThumbnail;
- (void)_createNewTabContainerView;
- (id)_createTitleTextField;
- (void)_showCloseButtonIfNeededWithMouseLocation:(struct CGPoint)arg1;
- (void)mouseMoved:(id)arg1;
- (void)didRequestNewTabForVisualTabPickerNewTabView:(id)arg1;
- (void)didToggleMuteButtonInVisualTabPickerThumbnailView:(id)arg1;
- (void)didCloseVisualTabPickerThumbnailView:(id)arg1;
- (void)didSelectVisualTabPickerThumbnailView:(id)arg1;
- (BOOL)canCloseTabInVisualTabPickerThumbnailView:(id)arg1;
- (id)siteIconForVisualTabPickerThumbnailView:(id)arg1;
- (long long)muteButtonStateForVisualTabPickerTileThumbnailView:(id)arg1;
- (BOOL)shouldShowMuteButtonForVisualTabPickerTileThumbnailView:(id)arg1;
- (struct CGRect)visibleBoundsForVisualTabPickerTileThumbnailView:(id)arg1;
- (id)viewForVisualTabPickerTileThumbnailView:(id)arg1 lowResolution:(BOOL)arg2;
- (id)titleForVisualTabPickerThumbnailView:(id)arg1;
- (void)updateIcon;
- (void)updateMuteButton;
- (void)cleanUpAnimations;
- (void)animateToolbarWithImage:(id)arg1 height:(double)arg2 gridAnimation:(long long)arg3;
- (void)animateSidebarWithImage:(id)arg1 width:(double)arg2 gridAnimation:(long long)arg3;
- (void)resetScaleFactor;
@property(readonly, nonatomic) struct CGRect thumbnailContainerFrame;
- (void)layout;
- (void)showCloseButtonIfNecessary;
- (void)hideCloseButton;
- (void)reloadData;
- (void)setHidden:(BOOL)arg1;
- (id)makeBackingLayer;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 visualTabPickerGridView:(id)arg2 containerType:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

