//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ModelIO/MDLNamed-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface MDLMaterialPropertyNode : NSObject <MDLNamed>
{
    NSArray *_inputs;
    NSArray *_outputs;
    NSMutableArray *_inputNodes;
    CDUnknownBlockType _evaluationFunction;
    NSString *_name;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSArray *outputs; // @synthesize outputs=_outputs;
@property(readonly, nonatomic) NSArray *inputs; // @synthesize inputs=_inputs;
@property(copy, nonatomic) CDUnknownBlockType evaluationFunction; // @synthesize evaluationFunction=_evaluationFunction;
- (void).cxx_destruct;
- (id)initWithInputs:(id)arg1 outputs:(id)arg2 evaluationFunction:(CDUnknownBlockType)arg3;

@end

