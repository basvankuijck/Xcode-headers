//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSGraphicsContext.h>

@interface NSGraphicsContext (DVTNSGraphicsContextAdditions)
+ (void)dvt_drawInBitmap:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (void)dvt_drawInContext:(struct CGContext *)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)dvt_temporarilyMakeCurrentAndDoOperationPerservingState:(CDUnknownBlockType)arg1;
- (void)dvt_temporarilyMakeCurrentAndDoOperationPreservingState:(CDUnknownBlockType)arg1;
- (void)dvt_drawBlockByPreservingState:(CDUnknownBlockType)arg1;
@end

