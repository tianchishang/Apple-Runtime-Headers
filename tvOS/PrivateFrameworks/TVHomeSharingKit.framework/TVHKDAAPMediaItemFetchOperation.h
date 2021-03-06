//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVHomeSharingKit/TVHKMediaEntityMediaServerFetchOperation.h>

@class TVHKDMAPPlaylistIdentifier;

__attribute__((visibility("hidden")))
@interface TVHKDAAPMediaItemFetchOperation : TVHKMediaEntityMediaServerFetchOperation
{
    _Bool _doGeniusMixItemsRequest;
    TVHKDMAPPlaylistIdentifier *_sourcePlaylistIdentifier;
}

+ (id)_mediaEntityTypePredicateForRequest:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool doGeniusMixItemsRequest; // @synthesize doGeniusMixItemsRequest=_doGeniusMixItemsRequest;
@property(retain, nonatomic) TVHKDMAPPlaylistIdentifier *sourcePlaylistIdentifier; // @synthesize sourcePlaylistIdentifier=_sourcePlaylistIdentifier;
- (id)_mediaEntitiesFromDMAPEntities:(id)arg1 mediaEntityServer:(id)arg2;
- (id)_mediaServerRequest;
- (id)_mediaEntityKind;
- (id)initWithRequest:(id)arg1 mediaServerIdentifier:(id)arg2;

@end

