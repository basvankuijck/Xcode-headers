//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DebuggerLLDB/NSObject-Protocol.h>

@protocol DBGSBFileSpec, DBGSBSection;

@protocol DBGSBModule <NSObject>
- (id <DBGSBSection>)FindSection:(const char *)arg1;
- (_Bool)SetPlatformFileSpec:(id <DBGSBFileSpec>)arg1;
- (unsigned int)GetNumCompileUnits;
- (id <DBGSBFileSpec>)GetFileSpec;
- (const char *)GetUUIDString;
- (_Bool)IsValid;
@end

