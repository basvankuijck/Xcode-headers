//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEActivityLogSectionCustomData-Protocol.h>

@class NSString;

@interface IDEBuildLogCustomData : NSObject <IDEActivityLogSectionCustomData>
{
    NSString *_threadSanitizerMessage;
}

@property(copy) NSString *threadSanitizerMessage; // @synthesize threadSanitizerMessage=_threadSanitizerMessage;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

