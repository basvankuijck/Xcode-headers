//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DVTSourceFileCodeCoverageRange : NSObject
{
    unsigned int _column;
    unsigned int _length;
    unsigned long long _executionCount;
}

@property(readonly, nonatomic) unsigned long long executionCount; // @synthesize executionCount=_executionCount;
@property(readonly, nonatomic) unsigned int length; // @synthesize length=_length;
@property(readonly, nonatomic) unsigned int column; // @synthesize column=_column;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)initWithColumn:(unsigned int)arg1 length:(unsigned int)arg2 executionCount:(unsigned long long)arg3;

@end

