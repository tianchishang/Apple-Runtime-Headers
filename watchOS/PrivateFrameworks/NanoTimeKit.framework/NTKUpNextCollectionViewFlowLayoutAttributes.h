//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayoutAttributes.h>

@interface NTKUpNextCollectionViewFlowLayoutAttributes : UICollectionViewLayoutAttributes
{
    _Bool _notVisibleToUser;
    _Bool _fullyVisibleToUser;
    float _darkeningAlphaUniform;
    float _shadowAlpha;
    float _scale;
    int _layoutMode;
    float _tritium_brightness;
    struct CGRect _unitFrameOnScreen;
    struct CGRect _computedFrame;
}

@property(nonatomic, setter=tritium_setBrightness:) float tritium_brightness; // @synthesize tritium_brightness=_tritium_brightness;
@property(nonatomic) _Bool fullyVisibleToUser; // @synthesize fullyVisibleToUser=_fullyVisibleToUser;
@property(nonatomic) _Bool notVisibleToUser; // @synthesize notVisibleToUser=_notVisibleToUser;
@property(nonatomic) int layoutMode; // @synthesize layoutMode=_layoutMode;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGRect computedFrame; // @synthesize computedFrame=_computedFrame;
@property(nonatomic) float shadowAlpha; // @synthesize shadowAlpha=_shadowAlpha;
@property(nonatomic) struct CGRect unitFrameOnScreen; // @synthesize unitFrameOnScreen=_unitFrameOnScreen;
@property(nonatomic) float darkeningAlphaUniform; // @synthesize darkeningAlphaUniform=_darkeningAlphaUniform;
- (void)tritium_populateFromAttributes:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end

