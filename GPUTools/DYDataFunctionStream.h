//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUTools/DYFunctionStream.h>

@class NSData;

@interface DYDataFunctionStream : DYFunctionStream
{
    NSData *_data;
    struct shared_ptr<GPUTools::FD::TFunctionStream<GPUTools::FD::Function, void>> _stream;
    struct _Iterator<GPUTools::FD::Function> _iter;
    struct _Iterator<GPUTools::FD::Function> _reset;
}

@property(readonly, retain, nonatomic) NSData *data; // @synthesize data=_data;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)readFunctions:(struct Function *)arg1 maxCount:(unsigned long long)arg2;
- (const struct Function *)readFunction;
- (const struct Function *)peekFunction;
- (void)resetToFunction:(const struct Function *)arg1;
- (void)clearResetMarker;
- (void)setResetMarker;
- (void)reset;
@property(readonly, nonatomic) BOOL swapsByteOrder;
- (void)dealloc;
- (id)initWithData:(id)arg1 header:(const void *)arg2 error:(id *)arg3;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)init;

@end

