//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBAutolayoutFoundation/IBAutolayoutOperationMarshallingRequest.h>

@class NSDictionary;

@interface IBAutolayoutArbitrationMarshallingRequest : IBAutolayoutOperationMarshallingRequest
{
    NSDictionary *_arbitrationOptions;
}

+ (id)requestWithMarshallableObjectPackage:(id)arg1 arbitrationUnit:(id)arg2 arbitrationOptions:(id)arg3;
@property(readonly, nonatomic) NSDictionary *arbitrationOptions; // @synthesize arbitrationOptions=_arbitrationOptions;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithIdentifier:(id)arg1 marshallableObjectPackage:(id)arg2 arbitrationUnit:(id)arg3 arbitrationOptions:(id)arg4;

@end

