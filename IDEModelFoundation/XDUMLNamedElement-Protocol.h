//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEModelFoundation/XDUMLElement-Protocol.h>

@class NSString;
@protocol XDUMLNamespace;

@protocol XDUMLNamedElement <XDUMLElement>
- (void)removeContainingBucket:(id)arg1;
- (void)addContainingBucket:(id)arg1;
- (void)setVisibility:(unsigned long long)arg1;
- (void)setName:(NSString *)arg1;
- (NSString *)separator;
- (unsigned long long)visibility;
- (id <XDUMLNamespace>)namespace;
- (NSString *)qualifiedName;
- (NSString *)name;
@end

