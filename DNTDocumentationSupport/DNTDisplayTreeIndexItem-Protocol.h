//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DNTDocumentationSupport/NSCopying-Protocol.h>

@class NSString, NSURL;
@protocol DNTDisplayTreeIndexItem;

@protocol DNTDisplayTreeIndexItem <NSCopying>
@property(nonatomic, readonly) long long languageEntityKind;
@property(nonatomic, readonly) NSString *name;
@property(nonatomic, readonly) NSURL *url;
@property(nonatomic, readonly) id <DNTDisplayTreeIndexItem> parent;
- (BOOL)isGroup;
@property(nonatomic, readonly) int rawLanguage;
@property(nonatomic, readonly) unsigned char type;

// Remaining properties
@property(nonatomic, readonly) BOOL group;
@end

