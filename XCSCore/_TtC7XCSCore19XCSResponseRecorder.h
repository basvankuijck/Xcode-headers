//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC7XCSCore19XCSResponseRecorder : NSObject
{
    // Error parsing type: , name: options
    // Error parsing type: , name: info
}

+ (void)setCurrentRecorder:(id)arg1;
+ (id)currentRecorder;
- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (BOOL)recordRequest:(id)arg1 downloadedURL:(id)arg2 error:(id *)arg3;
- (BOOL)recordRequest:(id)arg1 response:(id)arg2 data:(id)arg3 error:(id *)arg4;
- (BOOL)recordResponse:(id)arg1 error:(id *)arg2;
- (void)setServerVersion:(id)arg1 forHost:(id)arg2;
- (void)setUsername:(id)arg1 forHost:(id)arg2;

@end

