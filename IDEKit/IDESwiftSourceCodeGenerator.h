//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDESourceCodeGenerator.h>

#import <IDEKit/IDEMethodSourceCodeGenerator-Protocol.h>

@interface IDESwiftSourceCodeGenerator : IDESourceCodeGenerator <IDEMethodSourceCodeGenerator>
{
}

+ (id)teardownMethodNameForCounterpart:(id)arg1;
+ (BOOL)isTeardownCounterpart:(id)arg1;
+ (id)allTeardownCounterparts;
- (BOOL)classItemIsValid:(id)arg1;
- (id)prepareToAddClassMethodWithName:(id)arg1 inClassNamed:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)prepareToAddInstanceMethodWithName:(id)arg1 inClassNamed:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)primitiveAddMethodWithName:(id)arg1 inClassItem:(id)arg2 options:(id)arg3 instanceMethod:(BOOL)arg4 error:(id *)arg5;
- (id)prepareToAddPropertyWithName:(id)arg1 type:(id)arg2 inClassItem:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (CDUnknownBlockType)documentLocationForCounterpartBlockForClassSymbol:(id)arg1 options:(id)arg2;
- (id)effectiveOptionsForTeardownCounterpart:(id)arg1 originalOptions:(id)arg2;
- (id)generateSourceCodeForMessageSendWithOptions:(id)arg1;
- (id)generateSourceCodeForMethodDefinitionWithName:(id)arg1 isClassMethod:(BOOL)arg2 options:(id)arg3;
- (id)baseSourceCodeForMethodDeclaratorWithName:(id)arg1 isClassMethod:(BOOL)arg2 options:(id)arg3;
- (id)generateSourceCodeForPropertyDeclarationWithName:(id)arg1 type:(id)arg2 options:(id)arg3;
- (id)generatedLanguage;

@end

