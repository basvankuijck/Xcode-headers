//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSCore/XCSCodeCoverageObject.h>

@class NSArray;

@interface XCSCodeCoverageTarget : XCSCodeCoverageObject
{
    NSArray *_files;
}

@property(retain, nonatomic) NSArray *files; // @synthesize files=_files;
- (void).cxx_destruct;
- (id)_deviceTinyIDs;
- (void)_bindHierarchyWithIntegration:(id)arg1 parentObject:(id)arg2;
- (BOOL)_validateWithFiles:(id)arg1 validationErrors:(id *)arg2;
- (id)saveRepresentationHumanReadable:(BOOL)arg1;
- (id)saveRepresentation;
- (id)ccifRepresentation;
- (id)ccimRepresentation;
- (id)dictionaryRepresentation;
- (unsigned long long)count;
- (id)keyPath;
- (id)_initWithFiles:(id)arg1 skipValidation:(BOOL)arg2 skipBindHierarchy:(BOOL)arg3 validationErrors:(id *)arg4;
- (id)initWithContents:(id)arg1 service:(id)arg2 skipValidation:(BOOL)arg3 skipBindHierarchy:(BOOL)arg4 validationErrors:(id *)arg5;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithTitle:(id)arg1 files:(id)arg2;
- (id)init;

@end

