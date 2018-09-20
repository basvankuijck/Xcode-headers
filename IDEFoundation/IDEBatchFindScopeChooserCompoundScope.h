//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEBatchFindNamedScope.h>

@class NSArray;

@interface IDEBatchFindScopeChooserCompoundScope : IDEBatchFindNamedScope
{
    NSArray *_namedScopes;
    NSArray *_workspaceLocationPredicates;
}

+ (id)decodeFromPropertyListRepresentation:(id)arg1;
+ (id)propertyListIdentifier;
@property(readonly) NSArray *workspaceLocationPredicates; // @synthesize workspaceLocationPredicates=_workspaceLocationPredicates;
@property(readonly) NSArray *namedScopes; // @synthesize namedScopes=_namedScopes;
- (void).cxx_destruct;
- (id)propertyListRepresentation;
- (id)predicate;
- (id)source;
- (id)name;
- (BOOL)isEqualToNamedScopeWithIdenticalClass:(id)arg1;
- (unsigned long long)hash;
- (id)initWithNamedScopes:(id)arg1 workspaceLocationPredicates:(id)arg2;

@end

