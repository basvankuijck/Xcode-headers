//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IBDiagnosticsLogSection : NSObject
{
    NSString *_body;
    NSString *_heading;
    CDUnknownBlockType _bodyBlock;
}

@property(readonly, nonatomic) CDUnknownBlockType bodyBlock; // @synthesize bodyBlock=_bodyBlock;
@property(readonly, nonatomic) NSString *heading; // @synthesize heading=_heading;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *body; // @synthesize body=_body;
- (id)initWithHeading:(id)arg1 bodyBlock:(CDUnknownBlockType)arg2;
- (id)initWithHeading:(id)arg1 body:(id)arg2;
- (id)initWithHeading:(id)arg1;

@end
