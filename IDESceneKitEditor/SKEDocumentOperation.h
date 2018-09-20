//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDESceneKitEditor/DVTProgressReporting-Protocol.h>

@class NSDocument, NSString;
@protocol SKEDocumentProtocol;

@interface SKEDocumentOperation : NSObject <DVTProgressReporting>
{
    NSDocument<SKEDocumentProtocol> *_document;
    CDUnknownBlockType _completionBlock;
}

@property(readonly) __weak NSDocument<SKEDocumentProtocol> *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (void)cancel;
- (void)start;
@property(readonly) long long progress;
@property(readonly) NSString *title;
- (id)initWithDocument:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

