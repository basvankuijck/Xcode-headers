//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSArray.h>

@class IDESourceKitResponse, IDESourceKitUIDSet;

@interface IDESourceKitCompletionsArray : NSArray
{
    IDESourceKitResponse *_response;
    IDESourceKitUIDSet *_UID;
    CDStruct_4c46f3f5 _completions;
    id *_items;
    unsigned long long _itemCount;
}

- (void).cxx_destruct;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)initWithSourceKitResponse:(id)arg1 UIDSet:(id)arg2;

@end

