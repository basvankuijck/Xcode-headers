//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/IBHighlightProvider-Protocol.h>

@class NSString;
@protocol IBDockViewHighlightProviderDelegate;

@interface IBDockViewHighlightProvider : NSObject <IBHighlightProvider>
{
    id <IBDockViewHighlightProviderDelegate> _delegate;
}

@property __weak id <IBDockViewHighlightProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)documentEditor:(id)arg1 highlightObjects:(id)arg2 showLabels:(BOOL)arg3 successfulObjects:(id *)arg4;
- (double)highlightPriorityInDocumentEditor:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

