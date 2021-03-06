//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBFile-Protocol.h>

@class NSData, NSString, _INPBURLValue;

@interface _INPBFile : PBCodable <_INPBFile, NSSecureCoding, NSCopying>
{
    struct _has;
    _Bool __encodeLegacyGloryData;
    NSData *_data;
    _INPBURLValue *_fileURL;
    NSString *_filename;
    NSString *_typeIdentifier;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(copy, nonatomic) NSString *typeIdentifier; // @synthesize typeIdentifier=_typeIdentifier;
@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(retain, nonatomic) _INPBURLValue *fileURL; // @synthesize fileURL=_fileURL;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasTypeIdentifier;
@property(readonly, nonatomic) _Bool hasFilename;
@property(readonly, nonatomic) _Bool hasFileURL;
@property(readonly, nonatomic) _Bool hasData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

