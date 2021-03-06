//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@interface AWDNetworkServiceProxyControlRequestStatistics : PBCodable <NSCopying>
{
    CDStruct_084d6ede _responseTimeBuckets;
    unsigned long long _requestCount;
    unsigned long long _resultCertificateFailureCount;
    unsigned long long _resultConnectionResetCount;
    unsigned long long _resultNetworkUnavailableCount;
    unsigned long long _resultResponseTimeoutCount;
    unsigned long long _resultSendFailureCount;
    unsigned long long _resultServerUnreachableCount;
    unsigned long long _resultSuccessCount;
    unsigned long long _resultUnknownErrorCount;
    unsigned long long _timestamp;
    int _interfaceType;
    int _protocolType;
    int _requestType;
    struct {
        unsigned int requestCount:1;
        unsigned int resultCertificateFailureCount:1;
        unsigned int resultConnectionResetCount:1;
        unsigned int resultNetworkUnavailableCount:1;
        unsigned int resultResponseTimeoutCount:1;
        unsigned int resultSendFailureCount:1;
        unsigned int resultServerUnreachableCount:1;
        unsigned int resultSuccessCount:1;
        unsigned int resultUnknownErrorCount:1;
        unsigned int timestamp:1;
        unsigned int interfaceType:1;
        unsigned int protocolType:1;
        unsigned int requestType:1;
    } _has;
}

@property(nonatomic) unsigned long long resultUnknownErrorCount; // @synthesize resultUnknownErrorCount=_resultUnknownErrorCount;
@property(nonatomic) unsigned long long resultCertificateFailureCount; // @synthesize resultCertificateFailureCount=_resultCertificateFailureCount;
@property(nonatomic) unsigned long long resultConnectionResetCount; // @synthesize resultConnectionResetCount=_resultConnectionResetCount;
@property(nonatomic) unsigned long long resultResponseTimeoutCount; // @synthesize resultResponseTimeoutCount=_resultResponseTimeoutCount;
@property(nonatomic) unsigned long long resultSendFailureCount; // @synthesize resultSendFailureCount=_resultSendFailureCount;
@property(nonatomic) unsigned long long resultServerUnreachableCount; // @synthesize resultServerUnreachableCount=_resultServerUnreachableCount;
@property(nonatomic) unsigned long long resultNetworkUnavailableCount; // @synthesize resultNetworkUnavailableCount=_resultNetworkUnavailableCount;
@property(nonatomic) unsigned long long resultSuccessCount; // @synthesize resultSuccessCount=_resultSuccessCount;
@property(nonatomic) unsigned long long requestCount; // @synthesize requestCount=_requestCount;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsProtocolType:(id)arg1;
- (id)protocolTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasProtocolType;
@property(nonatomic) int protocolType; // @synthesize protocolType=_protocolType;
- (void)setResponseTimeBuckets:(unsigned int *)arg1 count:(unsigned int)arg2;
- (unsigned int)responseTimeBucketsAtIndex:(unsigned int)arg1;
- (void)addResponseTimeBuckets:(unsigned int)arg1;
- (void)clearResponseTimeBuckets;
@property(readonly, nonatomic) unsigned int *responseTimeBuckets;
@property(readonly, nonatomic) unsigned int responseTimeBucketsCount;
@property(nonatomic) _Bool hasResultUnknownErrorCount;
@property(nonatomic) _Bool hasResultCertificateFailureCount;
@property(nonatomic) _Bool hasResultConnectionResetCount;
@property(nonatomic) _Bool hasResultResponseTimeoutCount;
@property(nonatomic) _Bool hasResultSendFailureCount;
@property(nonatomic) _Bool hasResultServerUnreachableCount;
@property(nonatomic) _Bool hasResultNetworkUnavailableCount;
@property(nonatomic) _Bool hasResultSuccessCount;
@property(nonatomic) _Bool hasRequestCount;
- (int)StringAsRequestType:(id)arg1;
- (id)requestTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasRequestType;
@property(nonatomic) int requestType; // @synthesize requestType=_requestType;
- (int)StringAsInterfaceType:(id)arg1;
- (id)interfaceTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasInterfaceType;
@property(nonatomic) int interfaceType; // @synthesize interfaceType=_interfaceType;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end

