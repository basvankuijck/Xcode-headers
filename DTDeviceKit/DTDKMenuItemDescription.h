//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DTDKMenuItemDescription : NSObject
{
    NSString *title;
    SEL action;
    id target;
    id representedObject;
}

+ (id)descriptionWithTitle:(id)arg1 action:(SEL)arg2 target:(id)arg3 representedObject:(id)arg4;
@property(retain) id representedObject; // @synthesize representedObject;
@property(retain) id target; // @synthesize target;
@property SEL action; // @synthesize action;
@property(copy) NSString *title; // @synthesize title;
- (void).cxx_destruct;

@end

