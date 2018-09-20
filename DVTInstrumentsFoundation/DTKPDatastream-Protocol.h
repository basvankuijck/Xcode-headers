//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTInstrumentsFoundation/NSObject-Protocol.h>

@protocol DTKPDatastream <NSObject>
- (int)peekAtRawDataWithError:(id *)arg1 block:(void (^)(void *, unsigned long long, BOOL))arg2;
- (int)exportRawDataWithError:(id *)arg1 block:(void (^)(void *, unsigned long long, void (^)(void), BOOL))arg2;
- (int)importRawData:(const void *)arg1 bufferSize:(unsigned long long)arg2 error:(id *)arg3 destructor:(void (^)(void))arg4;
- (int)setWritingCompletedWithError:(id *)arg1;
- (BOOL)hasData;
- (id)createNextStream:(id *)arg1;
@end

