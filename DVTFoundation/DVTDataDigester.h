//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DVTDataDigester : NSObject
{
}

- (id)digest;
- (void)updateWithArrayOfStrings:(id)arg1;
- (void)updateWithString:(id)arg1;
- (void)updateWithData:(id)arg1;
- (void)updateWithBytes:(const void *)arg1 length:(unsigned long long)arg2;

@end

