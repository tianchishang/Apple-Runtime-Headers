//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProVideo/FxTimingAPI_v2-Protocol.h>

@protocol FxTimingAPI_v3 <FxTimingAPI_v2>
- (void)imageFxTime:(CDUnion_baaf6063 *)arg1 forParmId:(unsigned int)arg2 fromTimelineTime:(CDUnion_baaf6063)arg3;
- (void)inputBFxTime:(CDUnion_baaf6063 *)arg1 fromTimelineTime:(CDUnion_baaf6063)arg2;
- (void)inputAFxTime:(CDUnion_baaf6063 *)arg1 fromTimelineTime:(CDUnion_baaf6063)arg2;
- (void)inputFxTime:(CDUnion_baaf6063 *)arg1 fromTimelineTime:(CDUnion_baaf6063)arg2;
- (void)timelineFxTime:(CDUnion_baaf6063 *)arg1 fromImageTime:(CDUnion_baaf6063)arg2 forParmId:(unsigned int)arg3;
- (void)timelineFxTime:(CDUnion_baaf6063 *)arg1 fromInputBTime:(CDUnion_baaf6063)arg2;
- (void)timelineFxTime:(CDUnion_baaf6063 *)arg1 fromInputATime:(CDUnion_baaf6063)arg2;
- (void)timelineFxTime:(CDUnion_baaf6063 *)arg1 fromInputTime:(CDUnion_baaf6063)arg2;
- (void)outPointFxTimeOfTimelineForEffect:(CDUnion_baaf6063 *)arg1;
- (void)inPointFxTimeOfTimelineForEffect:(CDUnion_baaf6063 *)arg1;
- (void)durationFxTime:(CDUnion_baaf6063 *)arg1 ofImageParm:(unsigned int)arg2;
- (void)startFxTime:(CDUnion_baaf6063 *)arg1 ofImageParam:(unsigned int)arg2;
- (void)durationFxTimeOfInputToFilter:(CDUnion_baaf6063 *)arg1;
- (void)startFxTimeOfInputToFilter:(CDUnion_baaf6063 *)arg1;
- (void)durationFxTimeOfInputBToTransition:(CDUnion_baaf6063 *)arg1;
- (void)durationFxTimeOfInputAToTransition:(CDUnion_baaf6063 *)arg1;
- (void)startFxTimeOfInputBToTransition:(CDUnion_baaf6063 *)arg1;
- (void)startFxTimeOfInputAToTransition:(CDUnion_baaf6063 *)arg1;
- (void)durationFxTimeForEffect:(CDUnion_baaf6063 *)arg1;
- (void)startFxTimeForEffect:(CDUnion_baaf6063 *)arg1;
- (void)sampleDuration:(CDUnion_baaf6063 *)arg1;
- (void)frameDuration:(CDUnion_baaf6063 *)arg1;
@end

