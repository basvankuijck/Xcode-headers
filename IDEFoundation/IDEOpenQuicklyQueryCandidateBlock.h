//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/NSSecureCoding-Protocol.h>

@interface IDEOpenQuicklyQueryCandidateBlock : NSObject <NSSecureCoding>
{
    unsigned long long _count;
    struct IDEOpenQuicklyQueryCandidate *_firstEntry;
}

+ (BOOL)supportsSecureCoding;
- (unsigned long long)count;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToCandidateBlock:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataRepresentation:(id)arg1;
- (id)dataRepresentation;
- (void)dealloc;
- (id)initWithStrings:(id)arg1;
- (id)initWithFilePaths:(id)arg1;
- (id)initWithUTF8Strings:(const char **)arg1 lengths:(const long long *)arg2 count:(long long)arg3;

@end

