//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEModelEditor/NSCopying-Protocol.h>
#import <IDEModelEditor/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface IDEDMSelection : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_selectionPath;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) NSArray *selectionPath; // @synthesize selectionPath=_selectionPath;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) NSString *stringRepresentation;
- (BOOL)isNearSelection:(id)arg1 inModel:(id)arg2;
- (long long)compare:(id)arg1;
- (unsigned long long)_orderOfKey:(id)arg1 forClassName:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)modelObjectFromModel:(id)arg1;
- (id)initWithStringRepresentation:(id)arg1;
- (id)initWithModelObject:(id)arg1;
- (id)_findKeyForObject:(id)arg1 ofRootObject:(id)arg2;
- (id)_findKeyForObject:(id)arg1 inKeys:(id)arg2 ofRootObject:(id)arg3;
- (id)_keysToSearchForModelObject:(id)arg1;

@end
