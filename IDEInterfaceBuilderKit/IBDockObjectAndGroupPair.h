//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IBDockObjectAndGroupPair : NSObject
{
    id _group;
    id _object;
}

+ (id)pairWithObject:(id)arg1 andGroup:(id)arg2;
@property(readonly) id object; // @synthesize object=_object;
@property(readonly) id group; // @synthesize group=_group;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToDockObjectAndGroupPair:(id)arg1;
- (unsigned long long)hash;
- (id)initWithObject:(id)arg1 andGroup:(id)arg2;

@end

