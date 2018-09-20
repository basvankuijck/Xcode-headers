//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpriteKit/NSCopying-Protocol.h>
#import <SpriteKit/NSFastEnumeration-Protocol.h>
#import <SpriteKit/NSMutableCopying-Protocol.h>
#import <SpriteKit/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface SKThreadSafeMutableArray : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration>
{
    struct _opaque_pthread_mutex_t _storageLock;
    NSMutableArray *_storage;
}

- (void).cxx_destruct;
@property(readonly) __weak NSArray *arrayRepresentation;
- (id)description;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)removeObjectsInArray:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithNSMutableArray:(id)arg1;

@end

