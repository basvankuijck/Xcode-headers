//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSArray.h>

@interface IDESwiftCompletionsArray : NSArray
{
    CDStruct_4c46f3f5 _completions;
    CDUnknownBlockType _deallocHandler;
    id *_items;
    unsigned long long _itemCount;
}

- (void).cxx_destruct;
- (unsigned long long)indexOfFirstObjectWithCaseInsensitivePrefix:(const char *)arg1 length:(unsigned long long)arg2;
- (void)enumerateSourceKitObjectsInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateSourceKitObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)initWithSourceKitArray:(CDStruct_4c46f3f5)arg1 deallocHandler:(CDUnknownBlockType)arg2;

@end

