//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEQuickHelp/NSObject-Protocol.h>

@class DVTSourceCodeLanguage, DVTSourceCodeSymbolKind, IDEIndexSymbol, NSArray, NSXMLElement;

@protocol IDEQuickHelpDataContext <NSObject>
@property(readonly, nonatomic) DVTSourceCodeLanguage *preferredLanguage;
@property(readonly, nonatomic) NSArray *usrs;
@property(readonly, nonatomic) char *documentationJSON;
@property(readonly, nonatomic) BOOL symbolKindRepresentsAModule;
@property(readonly, nonatomic) DVTSourceCodeSymbolKind *documentationSymbolKind;
@property(readonly, nonatomic) NSXMLElement *documentationMarkup;
@property(readonly, nonatomic) NSXMLElement *declarationSymbolMarkup;
@property(readonly, nonatomic) IDEIndexSymbol *indexSymbol;
- (void)enumerateRelatedDeclarationsUsingBlock:(void (^)(NSXMLElement *, char *))arg1;
- (void)enumerateOverriddenSymbolResolutionsUsingBlock:(void (^)(NSString *, char *))arg1;
@end
