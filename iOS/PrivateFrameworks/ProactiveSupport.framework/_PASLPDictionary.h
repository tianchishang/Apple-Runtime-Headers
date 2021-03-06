//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDictionary.h>

#import <ProactiveSupport/NSFastEnumeration-Protocol.h>

@class NSCache, _PASLazyPlist;

@interface _PASLPDictionary : NSDictionary <NSFastEnumeration>
{
    _PASLazyPlist *_lazyPlist;
    const unsigned int *_storage;
    unsigned long long _count;
    NSCache *_enumerationCache;
}

- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_keyAtIndex:(unsigned long long)arg1;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (unsigned long long)count;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;
- (id)initWithLazyPlist:(id)arg1 storage:(const unsigned int *)arg2 count:(unsigned long long)arg3;

@end

