//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUDebuggerFoundation/GPUTraceOutlineItem.h>

#import <GPUDebuggerFoundation/DYPResourceItem-Protocol.h>
#import <GPUDebuggerFoundation/NSPasteboardWriting-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSObject, NSString;
@protocol DYResource, OS_dispatch_queue;

@interface GPUTraceResourceItem : GPUTraceOutlineItem <DYPResourceItem, NSPasteboardWriting>
{
    id <DYResource> _resourceObject;
    long long _resourceState;
    NSObject<OS_dispatch_queue> *_resourceQueue;
    NSMutableSet *_resourceCompletionHandlers;
    BOOL _placeholder;
    BOOL _harvested;
    unsigned int _type;
    unsigned long long _objectID;
    const void *_stateMirrorObject;
    unsigned long long _containerID;
    NSMutableDictionary *_properties;
    id _displayAttributes;
    unsigned long long _sharegroupID;
    CDStruct_b00b4bef _resolution;
}

+ (id)sharedByteFormatter;
@property(nonatomic) CDStruct_b00b4bef resolution; // @synthesize resolution=_resolution;
@property(nonatomic) BOOL harvested; // @synthesize harvested=_harvested;
@property(readonly, nonatomic) BOOL placeholder; // @synthesize placeholder=_placeholder;
@property(readonly, nonatomic) unsigned long long sharegroupID; // @synthesize sharegroupID=_sharegroupID;
@property(retain, nonatomic) id displayAttributes; // @synthesize displayAttributes=_displayAttributes;
@property(readonly, nonatomic) NSMutableDictionary *properties; // @synthesize properties=_properties;
@property(readonly, nonatomic) unsigned long long containerID; // @synthesize containerID=_containerID;
@property(readonly, nonatomic) const void *stateMirrorObject; // @synthesize stateMirrorObject=_stateMirrorObject;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
@property(readonly, nonatomic) unsigned long long objectID; // @synthesize objectID=_objectID;
- (void).cxx_destruct;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
- (id)_loadResourceObjectWithResolution:(CDStruct_b00b4bef)arg1;
- (void)_executeLoadCompletionHandlers;
- (void)resourceObjectResolution:(CDStruct_b00b4bef)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)resourceObjectWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)resourceObject;
- (void)purgeResourceObject;
@property(readonly, nonatomic) int bindingIndex;
@property(readonly, nonatomic) unsigned int bindingType;
@property(readonly, nonatomic) long long resourcesItemType;
@property(readonly, nonatomic) unsigned int functionIndex;
- (struct Function *)decodedFunction;
- (id)siblingResourceItemsOfType:(unsigned int)arg1;
- (id)parentResourcesItem;
- (id)associatedDisplayableItem;
- (id)APIItem;
- (void)generateFilterItems;
@property(readonly, nonatomic) BOOL generatesThumbnail;
@property(readonly, nonatomic) NSString *identifier;
- (void)populatePlaceholderWithObjectID:(unsigned long long)arg1 stateMirrorObject:(const void *)arg2 containerID:(unsigned long long)arg3 identifier:(id)arg4;
- (id)initPlaceholderWithController:(id)arg1 parent:(id)arg2 identifier:(id)arg3 type:(unsigned int)arg4;
- (id)initWithController:(id)arg1 parent:(id)arg2 objectID:(unsigned long long)arg3 stateMirrorObject:(const void *)arg4 containerID:(unsigned long long)arg5 sharegroupID:(unsigned long long)arg6 identifier:(id)arg7 type:(unsigned int)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *label;
@property(readonly) Class superclass;

@end

