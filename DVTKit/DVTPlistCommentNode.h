//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTPlistNode.h>

@class NSString;

@interface DVTPlistCommentNode : DVTPlistNode
{
    NSString *_comment;
    BOOL isMultiLine;
}

@property BOOL isMultiLine; // @synthesize isMultiLine;
- (void).cxx_destruct;
- (id)rawPlist;
- (id)xmlStringWithIndent:(id)arg1;
- (id)plistStringWithIndent:(id)arg1;
- (id)value;
- (void)setValueFromPlist:(id)arg1;
- (void)setValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isPlistCommentNode;

@end

