//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <LoggingSupportHost/OSActivityEventMessage.h>

@class NSString;

@interface OSActivityLogMessageEvent : OSActivityEventMessage
{
    unsigned char _messageType;
    NSString *_subsystem;
    NSString *_category;
    unsigned long long _senderProgramCounter;
}

@property(readonly, nonatomic) unsigned char messageType; // @synthesize messageType=_messageType;
@property(readonly, nonatomic) unsigned long long senderProgramCounter; // @synthesize senderProgramCounter=_senderProgramCounter;
@property(readonly, copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(readonly, copy, nonatomic) NSString *subsystem; // @synthesize subsystem=_subsystem;
- (void).cxx_destruct;
- (void)_addProperties:(id)arg1;
- (id)initWithEntry:(struct os_activity_stream_entry_s *)arg1;

@end

