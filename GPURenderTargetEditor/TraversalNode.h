//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GPUGVNode;

__attribute__((visibility("hidden")))
@interface TraversalNode : NSObject
{
    GPUGVNode *_node;
    GPUGVNode *_parent;
    unsigned long long _depth;
}

@property(nonatomic) unsigned long long depth; // @synthesize depth=_depth;
@property(nonatomic) __weak GPUGVNode *parent; // @synthesize parent=_parent;
@property(nonatomic) __weak GPUGVNode *node; // @synthesize node=_node;
- (void).cxx_destruct;

@end

