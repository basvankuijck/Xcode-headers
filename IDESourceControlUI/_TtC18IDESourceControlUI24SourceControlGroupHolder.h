//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDocumentLocation, NSArray, NSImage, NSString;

@interface _TtC18IDESourceControlUI24SourceControlGroupHolder : NSObject
{
    // Error parsing type: , name: childItems
    // Error parsing type: , name: type
    // Error parsing type: , name: identifier
    // Error parsing type: , name: name
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)copy;
@property(nonatomic, readonly) NSString *navigableItem_name;
@property(nonatomic, readonly) BOOL navigableItem_isLeaf;
@property(nonatomic, readonly) NSImage *navigableItem_image;
- (BOOL)isEqual:(id)arg1;
@property(nonatomic, readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
- (BOOL)isEqualTo:(id)arg1;
@property(nonatomic, readonly) NSString *name; // @synthesize name;
@property(nonatomic, copy) NSArray *childItems; // @synthesize childItems;

@end

