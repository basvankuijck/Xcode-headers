//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IBRenameRefactoringRequest : NSObject
{
    long long _symbolKind;
    NSString *_containingClassName;
    NSString *_originalName;
    NSString *_replacementName;
}

+ (BOOL)getRequest:(id *)arg1 fromTransformation:(id)arg2 error:(id *)arg3;
+ (id)translateNameIfNeeded:(id)arg1 forSymbolKind:(long long)arg2;
+ (id)requestFromPropertyListRepresentation:(id)arg1;
@property(readonly) NSString *replacementName; // @synthesize replacementName=_replacementName;
@property(readonly) NSString *originalName; // @synthesize originalName=_originalName;
@property(readonly) NSString *containingClassName; // @synthesize containingClassName=_containingClassName;
@property(readonly) long long symbolKind; // @synthesize symbolKind=_symbolKind;
- (void).cxx_destruct;
- (id)initWithSymbolKind:(long long)arg1 containingClassName:(id)arg2 originalName:(id)arg3 replacementName:(id)arg4;
- (id)translateNameIfNeeded:(id)arg1;
- (id)propertyListRepresentation;

@end

