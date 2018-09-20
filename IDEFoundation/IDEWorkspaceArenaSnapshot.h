//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFilePath;

@interface IDEWorkspaceArenaSnapshot : NSObject
{
    DVTFilePath *_derivedDataFolderPath;
    DVTFilePath *_buildProductsFolderPath;
    DVTFilePath *_buildIntermediatesFolderPath;
    DVTFilePath *_precompiledHeadersFolderPath;
    DVTFilePath *_clonedSourcePackagesFolderPath;
    DVTFilePath *_indexFolderPath;
    DVTFilePath *_indexDataStoreFolderPath;
    DVTFilePath *_indexPrecompiledHeadersFolderPath;
    DVTFilePath *_logFolderPath;
    DVTFilePath *_textIndexFolderPath;
    BOOL _indexEnableDataStore;
    unsigned long long _hash;
}

+ (id)workspaceArenaSnapshotForWorkspaceArena:(id)arg1;
@property(readonly) DVTFilePath *textIndexFolderPath; // @synthesize textIndexFolderPath=_textIndexFolderPath;
@property(readonly) DVTFilePath *logFolderPath; // @synthesize logFolderPath=_logFolderPath;
@property(readonly) DVTFilePath *indexPrecompiledHeadersFolderPath; // @synthesize indexPrecompiledHeadersFolderPath=_indexPrecompiledHeadersFolderPath;
@property(readonly) BOOL indexEnableDataStore; // @synthesize indexEnableDataStore=_indexEnableDataStore;
@property(readonly) DVTFilePath *indexDataStoreFolderPath; // @synthesize indexDataStoreFolderPath=_indexDataStoreFolderPath;
@property(readonly) DVTFilePath *indexFolderPath; // @synthesize indexFolderPath=_indexFolderPath;
@property(readonly) DVTFilePath *clonedSourcePackagesFolderPath; // @synthesize clonedSourcePackagesFolderPath=_clonedSourcePackagesFolderPath;
@property(readonly) DVTFilePath *precompiledHeadersFolderPath; // @synthesize precompiledHeadersFolderPath=_precompiledHeadersFolderPath;
@property(readonly) DVTFilePath *buildIntermediatesFolderPath; // @synthesize buildIntermediatesFolderPath=_buildIntermediatesFolderPath;
@property(readonly) DVTFilePath *buildProductsFolderPath; // @synthesize buildProductsFolderPath=_buildProductsFolderPath;
@property(readonly) DVTFilePath *derivedDataFolderPath; // @synthesize derivedDataFolderPath=_derivedDataFolderPath;
- (void).cxx_destruct;
- (id)dvt_detailedDebugDescription;
- (id)copy;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

