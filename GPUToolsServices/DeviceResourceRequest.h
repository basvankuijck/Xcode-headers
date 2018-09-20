//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DYFuture, NSString;
@protocol DYResource;

__attribute__((visibility("hidden")))
@interface DeviceResourceRequest : NSObject
{
    NSString *_identifier;
    id <DYResource> _resource;
    unsigned long long _functionIndex;
    DYFuture *_future;
}

@property(readonly, nonatomic) DYFuture *future; // @synthesize future=_future;
@property(readonly, nonatomic) unsigned long long functionIndex; // @synthesize functionIndex=_functionIndex;
@property(readonly, nonatomic) id <DYResource> resource; // @synthesize resource=_resource;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1 resource:(id)arg2 functionIndex:(unsigned int)arg3 subCommandIndex:(int)arg4;

@end

