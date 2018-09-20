//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSValueTransformer.h>

@interface DVTObjectLiteralValueTransformer : NSValueTransformer
{
}

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;
+ (id)registeredValueTransformers;
+ (id)valueTransformerForObjectLiteral:(id)arg1;
+ (id)valueTransformerForLiteralString:(id)arg1;
+ (Class)valueTransformerClassForLiteralString:(id)arg1;
+ (unsigned long long)transformedObjectLiteralType;
- (id)stringByUnescapingString:(id)arg1;
- (id)stringByEscapingString:(id)arg1;
- (id)reverseTransformedValue:(id)arg1 context:(id)arg2;
- (id)transformedValue:(id)arg1 context:(id)arg2;
- (id)reverseTransformedValue:(id)arg1;
- (id)transformedValue:(id)arg1;

@end

