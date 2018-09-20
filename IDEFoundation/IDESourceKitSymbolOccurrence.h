//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDocumentLocation, DVTFilePath, IDESourceKitSymbol, IDESourceKitWorkspace, NSURL;

@interface IDESourceKitSymbolOccurrence : NSObject
{
    long long _role;
    DVTDocumentLocation *_location;
    long long _lineNumber;
    long long _column;
    DVTFilePath *_file;
    NSURL *_moduleURL;
    IDESourceKitSymbol *_correspondingSymbol;
    IDESourceKitSymbol *_containingSymbol;
    IDESourceKitWorkspace *_index;
}

@property(readonly, nonatomic) long long column; // @synthesize column=_column;
@property(readonly, nonatomic) long long lineNumber; // @synthesize lineNumber=_lineNumber;
@property(readonly, nonatomic) long long role; // @synthesize role=_role;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:(Class)arg1;
- (id)callees;
@property(readonly, nonatomic) DVTDocumentLocation *location;
@property(readonly, nonatomic) NSURL *moduleURL;
@property(readonly, nonatomic) DVTFilePath *file;
- (id)index;
- (id)occurrence;
- (void)setContainingSymbol:(id)arg1;
- (id)containingSymbol;
- (id)description;
- (void)setOccurrence:(id)arg1;
- (id)correspondingSymbol;
- (id)initWithCorrespondingSymbol:(id)arg1 role:(long long)arg2 lineNumber:(long long)arg3 column:(long long)arg4 file:(id)arg5 location:(id)arg6 moduleURL:(id)arg7 forSourceKitWorkspace:(id)arg8;
- (void)describeFields:(CDUnknownBlockType)arg1;

@end

