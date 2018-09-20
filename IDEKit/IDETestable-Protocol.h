//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/DVTInvalidation-Protocol.h>
#import <IDEKit/IDETestContainer-Protocol.h>
#import <IDEKit/NSObject-Protocol.h>

@class DVTDocumentLocation, IDEBuildParameters, IDETest, IDETestRunSpecification, IDEWorkspace, NSArray, NSSet, NSString, NSURL;
@protocol IDEBuildable, IDEBuildableProduct, IDETestableProvider, IDETestingSpecifier;

@protocol IDETestable <IDETestContainer, DVTInvalidation, NSObject>
@property(readonly) id <IDEBuildable> primaryBuildable;
@property(readonly) BOOL isSearchingForTests;
@property(readonly) NSArray *supportedPlatformsForParallelization;
@property(readonly) BOOL isUITest;
@property(readonly) NSSet *testFiles;
@property(readonly) NSString *name;
@property(readonly) id <IDETestableProvider> testableProvider;
- (void)removeSubtest:(IDETest *)arg1;
- (BOOL)canHaveSubtestsForTestWithIdentifier:(NSString *)arg1;
- (IDETest *)supertestForTestWithIdentifier:(NSString *)arg1;
- (NSString *)nameForTestWithIdentifier:(NSString *)arg1;
- (NSSet *)testsInFile:(NSURL *)arg1;
- (IDETest *)testForIdentifier:(NSString *)arg1 location:(DVTDocumentLocation *)arg2 createIfNeeded:(BOOL)arg3;
- (IDETest *)testForIdentifier:(NSString *)arg1 createIfNeeded:(BOOL)arg2;
- (IDETest *)testForIdentifier:(NSString *)arg1;
- (id <IDEBuildable>)parentBuildableInWorkspace:(IDEWorkspace *)arg1;
- (id <IDEBuildableProduct>)targetApplicationBuildableForWorkspace:(IDEWorkspace *)arg1 withBuildParameters:(IDEBuildParameters *)arg2;
- (id <IDEBuildableProduct>)testHostBuildableInWorkspace:(IDEWorkspace *)arg1 buildParameters:(IDEBuildParameters *)arg2;
- (void)searchForTestsInWorkspace:(IDEWorkspace *)arg1;
- (IDETestRunSpecification *)testRunSpecificationWithTestingSpecifier:(id <IDETestingSpecifier>)arg1 buildParameters:(IDEBuildParameters *)arg2 buildables:(NSArray *)arg3 error:(id *)arg4;
@end
