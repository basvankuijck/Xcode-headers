//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUToolsShaderProfiler/NSCopying-Protocol.h>
#import <GPUToolsShaderProfiler/NSSecureCoding-Protocol.h>

@class DYShaderAnalyzerResult, NSData, NSMutableData, NSString;

@interface ShaderBinaryInfo : NSObject <NSSecureCoding, NSCopying>
{
    NSData *_binary;
    NSMutableData *_uscSamples;
    NSString *_disassembly;
    DYShaderAnalyzerResult *_analyzerResult;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) DYShaderAnalyzerResult *analyzerResult; // @synthesize analyzerResult=_analyzerResult;
@property(retain, nonatomic) NSString *disassembly; // @synthesize disassembly=_disassembly;
@property(retain, nonatomic) NSMutableData *uscSamples; // @synthesize uscSamples=_uscSamples;
@property(retain, nonatomic) NSData *binary; // @synthesize binary=_binary;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

