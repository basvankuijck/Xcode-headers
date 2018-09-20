//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTObservingToken.h>

@class DVTSharedObserver, NSString;

@interface DVTSharedObserverToken : DVTObservingToken
{
    DVTSharedObserver *_sharedObserver;
    NSString *_keyPath;
    id _observedObject;
    CDUnknownBlockType _handlerBlock;
    unsigned int _trackingIndex;
}

@property unsigned int trackingIndex; // @synthesize trackingIndex=_trackingIndex;
- (void).cxx_destruct;
@property(readonly) CDUnknownBlockType handlerBlock;
- (void)_primitiveCancelObservation;
- (id)initWithSharedObserver:(id)arg1 observedObject:(id)arg2 trackingIndex:(unsigned int)arg3 keyPath:(id)arg4 creationBacktrace:(id)arg5 block:(CDUnknownBlockType)arg6;

@end

