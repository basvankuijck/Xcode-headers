//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDispatchLock, NSString;

@interface DVTDynamicLogController : NSObject
{
    NSString *_path;
    DVTDispatchLock *_dispatchLock;
}

+ (id)dynamicLogControllerForPath:(id)arg1 createIfNeeded:(BOOL)arg2 returningError:(id *)arg3;
@property(retain) DVTDispatchLock *dispatchLock; // @synthesize dispatchLock=_dispatchLock;
@property(retain) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (BOOL)writeString:(id)arg1 toFileAtSubpath:(id)arg2 returningError:(id *)arg3;
- (id)initWithPath:(id)arg1;

@end
