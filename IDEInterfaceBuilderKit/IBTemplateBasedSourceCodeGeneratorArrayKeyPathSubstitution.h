//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBTemplateBasedSourceCodeGeneratorSubstitution.h>

@class NSArray, NSString;

@interface IBTemplateBasedSourceCodeGeneratorArrayKeyPathSubstitution : IBTemplateBasedSourceCodeGeneratorSubstitution
{
    NSString *_arrayName;
    NSArray *_keysToReplace;
    NSArray *_valueObjects;
}

@property(readonly, copy) NSArray *valueObjects; // @synthesize valueObjects=_valueObjects;
@property(readonly, copy) NSArray *keysToReplace; // @synthesize keysToReplace=_keysToReplace;
@property(readonly, copy) NSString *arrayName; // @synthesize arrayName=_arrayName;
- (void).cxx_destruct;
- (id)performReplacementWithGenerator:(id)arg1 forTemplateString:(id)arg2;
@property(readonly, copy) NSArray *stableValueObjects;
- (id)initWithArrayName:(id)arg1 keysToReplace:(id)arg2 valueObjects:(id)arg3;

@end

