//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface DVT_VMUMachOSection : NSObject
{
    unsigned long long _localAddress;
    unsigned long long _mappingSize;
}

- (unsigned long long)mappingSize;
- (unsigned long long)localAddress;
- (void)dealloc;
- (id)initWithTask:(unsigned int)arg1 remoteAddress:(unsigned long long)arg2 size:(unsigned long long)arg3;

@end

