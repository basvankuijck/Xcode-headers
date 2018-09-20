//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEModelFoundation/XDUMLNamedElementImp.h>

#import <IDEModelFoundation/XDUMLParameter-Protocol.h>

@class NSString;
@protocol XDUMLType;

@interface XDUMLParameterImp : XDUMLNamedElementImp <XDUMLParameter>
{
    unsigned long long _direction;
    BOOL _isOrdered;
    BOOL _isUnique;
    NSString *_default;
    id <XDUMLType> _type;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (long long)upper;
- (long long)lower;
- (BOOL)isUnique;
- (BOOL)isOrdered;
- (void)setType:(id)arg1;
- (id)type;
- (void)setDirection:(unsigned long long)arg1;
- (unsigned long long)direction;
- (id)default;
- (id)operation;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

