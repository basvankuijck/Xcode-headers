//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SKEDocumentProtocol;

@interface SKEDocumentEdition : NSObject
{
    id <SKEDocumentProtocol> _document;
    SKEDocumentEdition *_revertingEdition;
}

- (void).cxx_destruct;
- (id)reverseEdition;
- (void)revertWithObject:(id)arg1;
- (BOOL)revert;
- (BOOL)apply;
@property(readonly) id <SKEDocumentProtocol> document;
- (id)initWithDocument:(id)arg1;

@end
