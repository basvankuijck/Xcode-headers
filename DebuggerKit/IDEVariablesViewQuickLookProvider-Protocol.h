//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DebuggerKit/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, NSURL, NSView;
@protocol IDEDataValue;

@protocol IDEVariablesViewQuickLookProvider <NSObject>
@property(readonly) NSView *quickLookView;
@property(readonly) int loadedState;
- (void)cancelLoading;
- (id)initWithDataValue:(id <IDEDataValue>)arg1 options:(NSDictionary *)arg2;

@optional
@property(readonly) NSString *extensionForTemporaryFile;
@property(readonly) NSURL *existingURLToOpen;
- (NSData *)dataRepresentation;
@end

