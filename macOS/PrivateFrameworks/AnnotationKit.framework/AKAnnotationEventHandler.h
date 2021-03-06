//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AKAnnotation, AKPageController;

@interface AKAnnotationEventHandler : NSObject
{
    BOOL _draggingHorizontalOnly;
    BOOL _draggingVerticalOnly;
    AKPageController *_pageController;
    AKAnnotation *_annotation;
    unsigned long long _initiallyDraggedArea;
    struct CGPoint _initialDraggedPoint;
    struct CGPoint _initialOtherPoint;
    struct CGPoint _initialCenter;
    struct CGPoint _lastPositionInModel;
    struct CGPoint _lastPositionInWindow;
}

+ (Class)_handlerClassForPlatformForAnnotation:(id)arg1;
+ (struct CGRect)annotationRectangleForDraggingBounds:(struct CGRect)arg1 forAnnotation:(id)arg2 onPageController:(id)arg3 withOriginalCenter:(struct CGPoint)arg4;
+ (BOOL)allowsDraggingOfAnnotation:(id)arg1;
+ (BOOL)allowsDragging;
+ (id)newAnnotationEventHandlerForCurrentPlatformForAnnotation:(id)arg1 withPageController:(id)arg2;
- (void).cxx_destruct;
@property struct CGPoint lastPositionInWindow; // @synthesize lastPositionInWindow=_lastPositionInWindow;
@property struct CGPoint lastPositionInModel; // @synthesize lastPositionInModel=_lastPositionInModel;
@property BOOL draggingVerticalOnly; // @synthesize draggingVerticalOnly=_draggingVerticalOnly;
@property BOOL draggingHorizontalOnly; // @synthesize draggingHorizontalOnly=_draggingHorizontalOnly;
@property struct CGPoint initialCenter; // @synthesize initialCenter=_initialCenter;
@property struct CGPoint initialOtherPoint; // @synthesize initialOtherPoint=_initialOtherPoint;
@property struct CGPoint initialDraggedPoint; // @synthesize initialDraggedPoint=_initialDraggedPoint;
@property unsigned long long initiallyDraggedArea; // @synthesize initiallyDraggedArea=_initiallyDraggedArea;
@property(retain) AKAnnotation *annotation; // @synthesize annotation=_annotation;
@property __weak AKPageController *pageController; // @synthesize pageController=_pageController;
- (struct CGPoint)modelPointFromPointInWindow:(struct CGPoint)arg1;
- (struct CGPoint)windowPointFromEvent:(id)arg1 orRecognizer:(id)arg2;
- (void)updateModelWithCurrentPoint:(struct CGPoint)arg1;
- (void)setupDraggingConstraints;
- (void)getInitialDraggedPoint:(struct CGPoint *)arg1 otherPoint:(struct CGPoint *)arg2 center:(struct CGPoint *)arg3 forEvent:(id)arg4 orRecognizer:(id)arg5;
- (BOOL)continueDraggableAreaEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2;
- (BOOL)enterDraggableAreaEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2;
- (BOOL)handleDownEvent:(id)arg1 orRecognizer:(id)arg2;
- (double)naturalAspectRatioForAnnotation;
- (struct CGSize)naturalSizeForAnnotation;
- (BOOL)lockAspectRatioByDefault;
- (BOOL)alwaysLockAspectRatio;
- (BOOL)canLockAspectRatio;
- (id)_initWithAnnotation:(id)arg1 andPageController:(id)arg2;

@end

