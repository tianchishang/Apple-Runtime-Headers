//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreServices/LSPlugInQuery.h>

@class NSArray, NSDictionary;

@interface LSPlugInQueryWithQueryDictionary : LSPlugInQuery
{
    NSDictionary *_queryDict;
    NSArray *_extensionIdentifiers;
    NSArray *_extensionPointIdentifiers;
    CDUnknownBlockType _filterBlock;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)matchesPlugin:(unsigned int)arg1 pluginData:(const struct LSPluginData *)arg2 withDatabase:(id)arg3;
- (id)_queryDictionary;
- (id)_initWithQueryDictionary:(id)arg1 applyFilter:(CDUnknownBlockType)arg2;

@end

