//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSArray, UIBezierPath, UIColor;

@interface UIPreviewParameters : NSObject <NSCopying>
{
    NSArray *_textLineRects;
    BOOL _appliesShadow;
    UIBezierPath *_visiblePath;
    UIColor *_backgroundColor;
    long long _previewMode;
    double _textPathCornerRadius;
    UIBezierPath *_shadowPath;
    struct UIEdgeInsets _textPathInsets;
}

- (void).cxx_destruct;
@property(copy, nonatomic) UIBezierPath *shadowPath; // @synthesize shadowPath=_shadowPath;
@property(nonatomic, getter=_textPathCornerRadius, setter=_setTextPathCornerRadius:) double textPathCornerRadius; // @synthesize textPathCornerRadius=_textPathCornerRadius;
@property(nonatomic, getter=_textPathInsets, setter=_setTextPathInsets:) struct UIEdgeInsets textPathInsets; // @synthesize textPathInsets=_textPathInsets;
@property(nonatomic) BOOL appliesShadow; // @synthesize appliesShadow=_appliesShadow;
@property(nonatomic, getter=_previewMode, setter=_setPreviewMode:) long long previewMode; // @synthesize previewMode=_previewMode;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) UIBezierPath *visiblePath; // @synthesize visiblePath=_visiblePath;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) UIBezierPath *effectiveShadowPath;
@property(readonly, nonatomic, getter=_isSingleLineText) BOOL singleLineText;
- (id)_initWithMode:(long long)arg1 visiblePath:(id)arg2 backgroundColor:(id)arg3;
- (id)initWithTextLineRects:(id)arg1;
- (id)init;

@end

