//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DTXChannel;

@interface DTTapServiceMessageSender : NSObject
{
    DTXChannel *_channel;
}

@property(readonly, retain, nonatomic) DTXChannel *channel; // @synthesize channel=_channel;
- (void).cxx_destruct;
- (void)sendBarrierMessage;
- (void)sendMessage:(id)arg1;
- (id)initWithChannel:(id)arg1;

@end

