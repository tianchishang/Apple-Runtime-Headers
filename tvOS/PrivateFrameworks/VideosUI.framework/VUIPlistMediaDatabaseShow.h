//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideosUI/VUIPlistMediaDatabaseEntity.h>

#import <VideosUI/NSCopying-Protocol.h>

@class NSArray;

@interface VUIPlistMediaDatabaseShow : VUIPlistMediaDatabaseEntity <NSCopying>
{
    NSArray *_seasons;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *seasons; // @synthesize seasons=_seasons;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)isLocal;
- (id)seasonForIdentifier:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;

@end

