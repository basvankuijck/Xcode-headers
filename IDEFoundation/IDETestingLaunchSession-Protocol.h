//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol _TtP13IDEFoundation22IDETestingOutputStream_;

@protocol IDETestingLaunchSession
@property(nonatomic, copy) CDUnknownBlockType receivedRunnablePID;
@property(nonatomic, copy) CDUnknownBlockType filter;
@property(nonatomic, readonly) BOOL isFinishedReceivingData;
@property(nonatomic, readonly) BOOL hasStarted;
- (void)invalidate;
@property(nonatomic, retain) id <_TtP13IDEFoundation22IDETestingOutputStream_> outputStream;
@end

