//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSMutableSet, NSSet, NSString;

@interface DVTAnnotationProvider : NSObject <DVTInvalidation>
{
    NSMutableSet *_annotations;
}

+ (id)annotationProviderForContext:(id)arg1 error:(id *)arg2;
+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (void)providerWillUninstall;
- (void)primitiveInvalidate;
- (id)init;

// Remaining properties
@property(copy) NSSet *annotations; // @dynamic annotations;
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, copy) NSMutableSet *mutableAnnotations; // @dynamic mutableAnnotations;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

