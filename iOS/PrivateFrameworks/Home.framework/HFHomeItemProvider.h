//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HMHomeManager, NSMutableSet;

@interface HFHomeItemProvider : HFItemProvider
{
    CDUnknownBlockType _filter;
    HMHomeManager *_homeManager;
    NSMutableSet *_homeItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *homeItems; // @synthesize homeItems=_homeItems;
@property(retain, nonatomic) HMHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (id)initWithHomeManager:(id)arg1;

@end

