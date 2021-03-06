//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESourceEditor/NSObject-Protocol.h>

@class DVTSourceCodeLanguage, DVTSourceCodeSymbolKind, IDEIndexSymbol, NSArray, NSXMLElement;

@protocol IDEQuickHelpDataContext <NSObject>
- (void)enumerateRelatedDeclarationsUsingBlock:(void (^)(NSXMLElement *, char *))arg1;
- (void)enumerateOverriddenSymbolResolutionsUsingBlock:(void (^)(NSString *, char *))arg1;
@property(nonatomic, readonly) DVTSourceCodeLanguage *preferredLanguage;
@property(nonatomic, readonly) NSArray *usrs;
@property(nonatomic, readonly) char *documentationJSON;
@property(nonatomic, readonly) BOOL symbolKindRepresentsAModule;
@property(nonatomic, readonly) DVTSourceCodeSymbolKind *documentationSymbolKind;
@property(nonatomic, readonly) NSXMLElement *documentationMarkup;
@property(nonatomic, readonly) NSXMLElement *declarationSymbolMarkup;
@property(nonatomic, readonly) IDEIndexSymbol *indexSymbol;
@end

