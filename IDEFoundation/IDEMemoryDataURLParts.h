//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDEMemoryDataURLParts : NSObject
{
    int _processID;
    NSString *_memoryDataUUID;
}

+ (id)urlParts:(id)arg1;
+ (BOOL)isMemoryDataURL:(id)arg1;
@property(readonly) NSString *memoryDataUUID; // @synthesize memoryDataUUID=_memoryDataUUID;
@property(readonly) int processID; // @synthesize processID=_processID;
- (void).cxx_destruct;
- (id)_initWithProcessID:(int)arg1 memoryDataUUID:(id)arg2;

@end

