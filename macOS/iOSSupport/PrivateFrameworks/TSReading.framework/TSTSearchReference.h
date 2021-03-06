//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSKSearchReference-Protocol.h>

@class NSArray, NSString, TSTTableInfo;
@protocol TSKAnnotation;

@interface TSTSearchReference : NSObject <TSKSearchReference>
{
    TSTTableInfo *_tableInfo;
    CDStruct_0441cfb5 _cellID;
    struct _NSRange _range;
    BOOL _autohideHighlight;
    BOOL _pulseHighlight;
    NSArray *_findHighlights;
    id <TSKAnnotation> annotation;
    struct CGPoint searchReferencePoint;
}

+ (id)searchReferenceWithTableInfo:(id)arg1 cellID:(CDStruct_0441cfb5)arg2 range:(struct _NSRange)arg3;
@property(retain, nonatomic) id <TSKAnnotation> annotation; // @synthesize annotation;
@property(nonatomic) struct CGPoint searchReferencePoint; // @synthesize searchReferencePoint;
@property(nonatomic) BOOL pulseHighlight; // @synthesize pulseHighlight=_pulseHighlight;
@property(nonatomic) BOOL autohideHighlight; // @synthesize autohideHighlight=_autohideHighlight;
@property(retain, nonatomic) NSArray *findHighlights; // @synthesize findHighlights=_findHighlights;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)searchReferenceEnd;
- (id)searchReferenceStart;
- (id)searchReferenceForReplacingWithString:(id)arg1 options:(unsigned long long)arg2 authorCreatedWithCommand:(id *)arg3;
- (BOOL)isReplaceable;
- (id)selection;
- (id)tableInfo;
- (id)model;
- (id)commandForReplacingWithString:(id)arg1 options:(unsigned long long)arg2;
@property(readonly, copy) NSString *description;
- (CDStruct_0441cfb5)cellID;
- (void)setCellID:(CDStruct_0441cfb5)arg1;
- (struct _NSRange)range;
- (void)setRange:(struct _NSRange)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithTableInfo:(id)arg1 cellID:(CDStruct_0441cfb5)arg2 range:(struct _NSRange)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

