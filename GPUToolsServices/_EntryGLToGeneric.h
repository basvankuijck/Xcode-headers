//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _EntryGLToGeneric : NSObject
{
    unsigned int _type;
    unsigned int _genericEnum;
}

+ (id)addToArray:(id)arg1 glType:(unsigned int)arg2 genericEnum:(unsigned int)arg3;
@property(readonly, nonatomic) unsigned int genericEnum; // @synthesize genericEnum=_genericEnum;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
- (id)initWithType:(unsigned int)arg1 andGenericEnum:(unsigned int)arg2;

@end

