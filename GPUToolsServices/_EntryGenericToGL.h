//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _EntryGenericToGL : NSObject
{
    unsigned int _internalFormat;
    unsigned int _format;
    unsigned int _type;
}

@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
@property(readonly, nonatomic) unsigned int format; // @synthesize format=_format;
@property(readonly, nonatomic) unsigned int internalFormat; // @synthesize internalFormat=_internalFormat;
- (id)initWithInternalFormat:(unsigned int)arg1 andFormat:(unsigned int)arg2 andType:(unsigned int)arg3;

@end
