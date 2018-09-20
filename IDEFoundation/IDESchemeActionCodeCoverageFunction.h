//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTCoverageDataContainer.h>

@class DVTSourceCodeSymbolKind, IDESchemeActionCodeCoverageFile, NSArray;

@interface IDESchemeActionCodeCoverageFunction : DVTCoverageDataContainer
{
    BOOL _needsDemangling;
    unsigned long long _executionCount;
    DVTSourceCodeSymbolKind *_symbolKind;
    IDESchemeActionCodeCoverageFile *_sourceFile;
    NSArray *_lines;
    struct _NSRange _lineRange;
}

@property(retain, nonatomic) NSArray *lines; // @synthesize lines=_lines;
@property(nonatomic) BOOL needsDemangling; // @synthesize needsDemangling=_needsDemangling;
@property(nonatomic) __weak IDESchemeActionCodeCoverageFile *sourceFile; // @synthesize sourceFile=_sourceFile;
@property(retain, nonatomic) DVTSourceCodeSymbolKind *symbolKind; // @synthesize symbolKind=_symbolKind;
@property(readonly, nonatomic) struct _NSRange lineRange; // @synthesize lineRange=_lineRange;
@property(readonly, nonatomic) unsigned long long executionCount; // @synthesize executionCount=_executionCount;
- (void).cxx_destruct;
- (id)description;
- (id)wrappedContainer;
- (id)initWithLineRange:(struct _NSRange)arg1 executionCount:(unsigned long long)arg2 executableLines:(unsigned int)arg3 coveredLines:(unsigned int)arg4;
- (id)initWithName:(id)arg1 lineRange:(struct _NSRange)arg2 executionCount:(unsigned long long)arg3 executableLines:(unsigned int)arg4 coveredLines:(unsigned int)arg5;

@end

