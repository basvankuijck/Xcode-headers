//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUDebuggerKit/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol DYPShaderDebuggerExecutionHistoryNode, DYPShaderDebuggerThread;

@protocol DYPShaderDebuggerExecutionHistoryNode <NSObject>
@property(nonatomic, readonly) unsigned long long column;
@property(nonatomic, readonly) unsigned long long line;
@property(nonatomic, readonly) NSString *filePath;
@property(nonatomic, readonly) unsigned long long type;
@property(nonatomic, readonly) NSArray *children;
@property(nonatomic, readonly) id <DYPShaderDebuggerExecutionHistoryNode> parent;
@property(nonatomic, readonly) id <DYPShaderDebuggerThread> thread;
@end

