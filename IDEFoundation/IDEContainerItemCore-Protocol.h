//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/NSObject-Protocol.h>

@class NSString;
@protocol IDEContainerCore, IDEGroupCore;

@protocol IDEContainerItemCore <NSObject>
@property(readonly) id <IDEContainerCore> parentContainer;
@property(copy) NSString *path;
@property(retain) id <IDEGroupCore> parentGroup;
@end

