//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <USDKit/USKIterator-Protocol.h>

@interface USKPropertyIterator : NSObject <USKIterator>
{
    vector_8221fbb7 _properties;
    struct __wrap_iter<pxrInternal_v0_19__pxrReserved__usdkit__::UsdProperty *> {
        struct UsdProperty *__i;
    } _it;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithProperties:(const vector_8221fbb7 *)arg1;

@end

