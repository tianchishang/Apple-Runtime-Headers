//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CLPropertyValue : NSObject
{
    _Bool _dirty;
    id _value;
}

@property(nonatomic) _Bool dirty; // @synthesize dirty=_dirty;
@property(readonly, retain, nonatomic) id value; // @synthesize value=_value;
- (void)dealloc;
- (id)initWithValue:(id)arg1 dirty:(_Bool)arg2;

@end

