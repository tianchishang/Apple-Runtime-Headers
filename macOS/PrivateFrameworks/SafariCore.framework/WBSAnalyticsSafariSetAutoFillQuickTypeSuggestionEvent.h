//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SafariCore/NSCopying-Protocol.h>

@interface WBSAnalyticsSafariSetAutoFillQuickTypeSuggestionEvent : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _category;
    int _formProperty;
    CDStruct_18b2ecd0 _has;
}

@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsFormProperty:(id)arg1;
- (id)formPropertyAsString:(int)arg1;
@property(nonatomic) BOOL hasFormProperty;
@property(nonatomic) int formProperty; // @synthesize formProperty=_formProperty;
- (int)StringAsCategory:(id)arg1;
- (id)categoryAsString:(int)arg1;
@property(nonatomic) BOOL hasCategory;
@property(nonatomic) int category; // @synthesize category=_category;
@property(nonatomic) BOOL hasTimestamp;

@end

