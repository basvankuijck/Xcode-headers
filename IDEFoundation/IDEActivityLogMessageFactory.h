//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDEActivityLogMessageFactory : NSObject
{
}

+ (id)shared;
- (id)activityLogMessageWithType:(id)arg1 severity:(unsigned long long)arg2 title:(id)arg3 filePath:(id)arg4 locationIdentifier:(id)arg5;
- (id)activityLogMessageFromClass:(Class)arg1 withType:(id)arg2 severity:(unsigned long long)arg3 title:(id)arg4 filePath:(id)arg5 locationIdentifier:(id)arg6;
- (Class)creatorForFilePath:(id)arg1;
- (id)creatorExtensions;

@end

