//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _TtC13IDEFoundation28IDEDocumentationSearchResult;

@interface IDEDocSearchResultItem : NSObject
{
    BOOL _selectable;
    BOOL _header;
    BOOL _separator;
    NSString *_identifier;
    NSString *_title;
    _TtC13IDEFoundation28IDEDocumentationSearchResult *_searchResult;
}

+ (id)separatorSearchResultItem;
+ (id)headerSearchResultItem;
@property(retain) _TtC13IDEFoundation28IDEDocumentationSearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(readonly, getter=isSeparator) BOOL separator; // @synthesize separator=_separator;
@property(readonly, getter=isHeader) BOOL header; // @synthesize header=_header;
@property(readonly, getter=isSelectable) BOOL selectable; // @synthesize selectable=_selectable;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1;

@end

