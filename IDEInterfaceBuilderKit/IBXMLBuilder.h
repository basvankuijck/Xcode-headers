//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXMLElement;

@interface IBXMLBuilder : NSObject
{
    NSXMLElement *_currentElement;
}

+ (id)elementWithName:(id)arg1 scope:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSXMLElement *currentElement; // @synthesize currentElement=_currentElement;
- (void).cxx_destruct;
- (id)push:(id)arg1 scope:(CDUnknownBlockType)arg2;

@end
