//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableString, NSString;

@interface LOCImportComparisonFile : NSObject
{
    NSString *_path;
    NSMutableString *_comparisonViewString;
}

@property(copy) NSMutableString *comparisonViewString; // @synthesize comparisonViewString=_comparisonViewString;
@property(copy) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (struct _NSRange)appendAllTransUnitsFromGlossary:(id)arg1;
- (struct _NSRange)appendTransUnit:(id)arg1 fromGlossary:(id)arg2;
- (BOOL)writeWithError:(id *)arg1;
- (id)initWithPath:(id)arg1;

@end

