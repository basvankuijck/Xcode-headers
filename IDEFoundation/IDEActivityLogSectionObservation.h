//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTCancellable-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface IDEActivityLogSectionObservation : NSObject <DVTCancellable>
{
    CDUnknownBlockType _block;
}

+ (id)sharedNullObservation;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)cancel;
@property(readonly, getter=isCancelled) BOOL cancelled;
- (CDUnknownBlockType)block;
- (id)init;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

