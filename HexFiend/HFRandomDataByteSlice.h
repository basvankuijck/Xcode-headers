//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HexFiend/HFByteSlice.h>

@interface HFRandomDataByteSlice : HFByteSlice
{
    unsigned long long start;
    unsigned long long length;
    unsigned char randomizer;
}

- (id)subsliceWithRange:(CDStruct_91ee6ea3)arg1;
- (void)copyBytes:(char *)arg1 range:(CDStruct_91ee6ea3)arg2;
- (unsigned long long)length;
- (id)initWithRandomDataLength:(unsigned long long)arg1;

@end

