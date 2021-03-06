//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSDictionaryControllerKeyValuePair.h>

@class NSDictionaryController, NSString;

__attribute__((visibility("hidden")))
@interface _NSDictionaryControllerKeyValuePair : NSDictionaryControllerKeyValuePair
{
    NSDictionaryController *_dictionaryController;
    NSString *_localizedKey;
    NSString *_key;
    id _value;
    struct __controllerKeyValuePairFlags {
        unsigned int _isExplicitlyIncluded:1;
        unsigned int _reservedControllerKeyValuePair:31;
    } _controllerKeyValuePairFlags;
}

- (BOOL)isExplicitlyIncluded;
- (void)_markAsExplicitlyIncluded:(BOOL)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (void)_setValueWithoutNotification:(id)arg1;
- (BOOL)validateValue:(id *)arg1 error:(id *)arg2;
- (id)key;
- (void)setKey:(id)arg1;
- (void)_setKeyWithoutLocalizedKey:(id)arg1;
- (BOOL)validateKey:(id *)arg1 error:(id *)arg2;
- (id)localizedKey;
- (void)setLocalizedKey:(id)arg1;
- (void)_setLocalizedKeyWithoutKey:(id)arg1;
- (BOOL)validateLocalizedKey:(id *)arg1 error:(id *)arg2;
- (BOOL)_validateAnyKey:(id)arg1 error:(id *)arg2;
- (void)_setWithoutNotificationLocalizedKey:(id)arg1 key:(id)arg2;
@property NSDictionaryController *dictionaryController; // @dynamic dictionaryController;
- (void)dealloc;
- (id)_init;

@end

