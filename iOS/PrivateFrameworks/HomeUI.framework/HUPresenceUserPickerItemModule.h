//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemModule.h>

@class HFItem, HFPresenceEventBuilder, HFStaticItemProvider, HMHome, HULocationDeviceManager, HUPresenceActivationOptionItem, HUPresenceLocationDeviceFooterItem, HUPresenceUserPickerItemModuleOptions, NSDictionary;
@protocol HUPresenceUserPickerItemModuleDelegate;

@interface HUPresenceUserPickerItemModule : HFItemModule
{
    HUPresenceLocationDeviceFooterItem *_footerItem;
    HUPresenceActivationOptionItem *_singleUserSummaryItem;
    HMHome *_home;
    id <HUPresenceUserPickerItemModuleDelegate> _delegate;
    HFPresenceEventBuilder *_presenceEventBuilder;
    HUPresenceUserPickerItemModuleOptions *_options;
    NSDictionary *_activationOptionStateByGranularity;
    HFStaticItemProvider *_staticItemProvider;
    HULocationDeviceManager *_locationDeviceManager;
}

+ (CDUnknownBlockType)_userItemComparator;
+ (id)footerSectionID;
+ (id)sectionID;
- (void).cxx_destruct;
@property(readonly, nonatomic) HULocationDeviceManager *locationDeviceManager; // @synthesize locationDeviceManager=_locationDeviceManager;
@property(readonly, nonatomic) HFStaticItemProvider *staticItemProvider; // @synthesize staticItemProvider=_staticItemProvider;
@property(readonly, nonatomic) NSDictionary *activationOptionStateByGranularity; // @synthesize activationOptionStateByGranularity=_activationOptionStateByGranularity;
@property(retain, nonatomic) HUPresenceUserPickerItemModuleOptions *options; // @synthesize options=_options;
@property(readonly, nonatomic) HFPresenceEventBuilder *presenceEventBuilder; // @synthesize presenceEventBuilder=_presenceEventBuilder;
@property(nonatomic) __weak id <HUPresenceUserPickerItemModuleDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) HFItem *singleUserSummaryItem; // @synthesize singleUserSummaryItem=_singleUserSummaryItem;
@property(readonly, nonatomic) HFItem *footerItem; // @synthesize footerItem=_footerItem;
- (_Bool)_isPresenceAuthorizedForUser:(id)arg1;
- (id)_allSelectedAndSupportedUsers;
- (void)_updateSelected:(_Bool)arg1 forUserHandle:(id)arg2;
- (_Bool)_isUserHandleSelected:(id)arg1;
- (_Bool)_canDeselectUserHandle:(id)arg1;
- (_Bool)_shouldUseSingleUserStyle;
- (void)_createItemProviders;
- (unsigned long long)_activationGranularityForUserItem:(id)arg1;
- (id)_sortedActivationGranularities;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)itemProviders;
- (void)_resetSelectionForCustomLocation;
- (id)confirmationPromptForOptionItem:(id)arg1;
- (void)deselectUserItem:(id)arg1;
- (void)selectUserItem:(id)arg1;
- (id)stateForUserItem:(id)arg1;
- (void)toggleExpandedForActivationOptionItem:(id)arg1;
- (void)selectActivationOptionItem:(id)arg1;
- (id)stateForActivationOptionItem:(id)arg1;
- (id)activationOptionItemForGranularity:(unsigned long long)arg1;
- (unsigned long long)itemTypeForItem:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2 presenceEvent:(id)arg3 options:(id)arg4 delegate:(id)arg5;
- (id)initWithItemUpdater:(id)arg1;

@end

