//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LOCAGEnvironmentManager, LOCAGProjectManager, NSString;

@interface LOCAGDocument : NSObject
{
    NSString *_environmentFolderPath;
    LOCAGEnvironmentManager *_environmentManager;
    LOCAGProjectManager *_projectManager;
}

@property(retain) LOCAGProjectManager *projectManager; // @synthesize projectManager=_projectManager;
@property(retain) LOCAGEnvironmentManager *environmentManager; // @synthesize environmentManager=_environmentManager;
@property(retain) NSString *environmentFolderPath; // @synthesize environmentFolderPath=_environmentFolderPath;
- (void).cxx_destruct;
- (void)consolidateIBToolErrors:(id)arg1;
- (id)elapsedTimeStringFrom:(id)arg1 to:(id)arg2;
- (void)finalize;
- (void)updateWithCleanUp:(BOOL)arg1;
- (void)populate;
- (id)initWithEnvironmentManager:(id)arg1 projectManager:(id)arg2;

@end

