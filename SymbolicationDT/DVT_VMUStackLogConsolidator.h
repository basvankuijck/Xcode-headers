//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVT_VMUDebugTimer;
@protocol VMUCommonGraphInterface, VMUStackLogReader;

@interface DVT_VMUStackLogConsolidator : NSObject
{
    id <VMUCommonGraphInterface> _graph;
    id <VMUStackLogReader> _stackLogReader;
    DVT_VMUDebugTimer *_debugTimer;
}

@property(retain, nonatomic) DVT_VMUDebugTimer *debugTimer; // @synthesize debugTimer=_debugTimer;
- (void).cxx_destruct;
- (id)callTreeWithOptions:(unsigned long long)arg1 nodeFilter:(CDUnknownBlockType)arg2;
- (id)stackIDsToNodesWithFilter:(CDUnknownBlockType)arg1;
- (id)initWithGraph:(id)arg1 stackLogReader:(id)arg2;

@end

