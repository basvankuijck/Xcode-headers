//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEActivityLogChangeEvent.h>

@class IDEActivityLogSection;

@interface IDEActivityLogAddSubsectionChangeEvent : IDEActivityLogChangeEvent
{
    IDEActivityLogSection *_subsection;
}

@property(readonly) IDEActivityLogSection *subsection; // @synthesize subsection=_subsection;
- (void).cxx_destruct;
- (id)description;
- (id)addedChild;
- (void)writeToLogEventStream:(id)arg1;
- (id)initWithSection:(id)arg1 subsection:(id)arg2;

@end

