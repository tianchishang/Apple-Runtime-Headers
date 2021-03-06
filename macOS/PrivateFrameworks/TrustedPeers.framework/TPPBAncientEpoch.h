//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <TrustedPeers/NSCopying-Protocol.h>

@interface TPPBAncientEpoch : PBCodable <NSCopying>
{
    unsigned long long _candidateEpoch;
    unsigned long long _myEpoch;
    struct {
        unsigned int candidateEpoch:1;
        unsigned int myEpoch:1;
    } _has;
}

@property(nonatomic) unsigned long long candidateEpoch; // @synthesize candidateEpoch=_candidateEpoch;
@property(nonatomic) unsigned long long myEpoch; // @synthesize myEpoch=_myEpoch;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasCandidateEpoch;
@property(nonatomic) BOOL hasMyEpoch;

@end

