//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/REMUserDefaultsObserveToken-Protocol.h>

@class NSString, REMUserDefaults;

@interface REMUserDefaultsObserver : NSObject <REMUserDefaultsObserveToken>
{
    _Bool _removed;
    REMUserDefaults *_userDefaults;
    NSString *_userDefaultsKey;
    CDUnknownBlockType _block;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool removed; // @synthesize removed=_removed;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(copy, nonatomic) NSString *userDefaultsKey; // @synthesize userDefaultsKey=_userDefaultsKey;
@property(retain, nonatomic) REMUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void)dealloc;
- (void)stopObserving;
- (id)initWithUserDefaults:(id)arg1 key:(id)arg2 block:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

