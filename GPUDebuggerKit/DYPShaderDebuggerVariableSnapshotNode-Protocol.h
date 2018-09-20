//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUDebuggerKit/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol DYPShaderDebuggerVariableSnapshot, DYPShaderDebuggerVariableSnapshotNode;

@protocol DYPShaderDebuggerVariableSnapshotNode <NSObject>
@property(nonatomic, readonly) NSArray *elements;
@property(nonatomic, readonly) BOOL dataUpdated;
@property(nonatomic, readonly) unsigned long long data;
@property(nonatomic, readonly) BOOL dataAvailable;
@property(nonatomic, readonly) unsigned long long previousData;
@property(nonatomic, readonly) BOOL previousDataAvailable;
@property(nonatomic, readonly) unsigned long long globalOffsetInBits;
@property(nonatomic, readonly) unsigned long long offsetInBits;
@property(nonatomic, readonly) unsigned long long sizeInBits;
@property(nonatomic, readonly) NSString *type;
@property(nonatomic, readonly) NSString *name;
@property(nonatomic, readonly) unsigned long long flags;
@property(nonatomic, readonly) unsigned long long nodeType;
@property(nonatomic, readonly) id <DYPShaderDebuggerVariableSnapshotNode> parent;
@property(nonatomic, readonly) id <DYPShaderDebuggerVariableSnapshot> snapshot;
@end

