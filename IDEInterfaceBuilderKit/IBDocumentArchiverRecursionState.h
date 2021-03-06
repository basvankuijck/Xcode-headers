//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/IBDocumentArchiverToken-Protocol.h>

@class NSMutableArray, NSString, NSXMLElement;

@interface IBDocumentArchiverRecursionState : NSObject <IBDocumentArchiverToken>
{
    id _object;
    NSXMLElement *_element;
    long long _kind;
    NSMutableArray *_blocksToRunPostSubgraphArchiving;
}

+ (id)recursionStateWithElement:(id)arg1 object:(id)arg2 kind:(long long)arg3;
@property(retain, nonatomic) NSMutableArray *blocksToRunPostSubgraphArchiving; // @synthesize blocksToRunPostSubgraphArchiving=_blocksToRunPostSubgraphArchiving;
@property(nonatomic) long long kind; // @synthesize kind=_kind;
@property(retain, nonatomic) NSXMLElement *element; // @synthesize element=_element;
@property(retain, nonatomic) id object; // @synthesize object=_object;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

