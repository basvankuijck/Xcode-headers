//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEBreakpointAction.h>

@class NSString;

@interface IDEAppleScriptBreakpointAction : IDEBreakpointAction
{
    NSString *_script;
}

+ (id)propertiesAffectingPersistenceState;
@property(copy, nonatomic) NSString *script; // @synthesize script=_script;
- (void).cxx_destruct;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)setScriptFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (void)performActionUsingContext:(id)arg1 andBreakpoint:(id)arg2;
- (void)_appleScriptActionCommonInit;
- (id)init;

@end

