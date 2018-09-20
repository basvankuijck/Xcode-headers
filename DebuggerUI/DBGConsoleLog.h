//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEActivityLogSection.h>

#import <DebuggerUI/DVTSimpleSerialization-Protocol.h>

@class IDEConsoleItem, IDELaunchSession, NSArray;

@interface DBGConsoleLog : IDEActivityLogSection <DVTSimpleSerialization>
{
    IDELaunchSession *_launchSession;
    IDEConsoleItem *_nextConsoleItem;
    NSArray *_logConsoleItems;
    BOOL _consoleItemsChanged;
}

+ (id)defaultLogSectionDomainType;
@property(retain, nonatomic) IDEConsoleItem *nextConsoleItem; // @synthesize nextConsoleItem=_nextConsoleItem;
- (void).cxx_destruct;
- (void)dvt_writeToSerializer:(id)arg1;
- (id)dvt_initFromDeserializer:(id)arg1;
- (void)setOwningLaunchSession:(id)arg1;
- (id)logConsoleItems;
- (id)navigableItem_documentType;
- (id)initLogWithTitle:(id)arg1 serializationPath:(id)arg2;

@end

