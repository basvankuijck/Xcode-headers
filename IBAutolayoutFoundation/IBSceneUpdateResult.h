//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBObjectBasedMarshallingResult.h>

@class NSArray;

@interface IBSceneUpdateResult : IBObjectBasedMarshallingResult
{
    NSArray *_processingResults;
}

@property(readonly, nonatomic) NSArray *processingResults; // @synthesize processingResults=_processingResults;
- (void).cxx_destruct;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithIdentifier:(id)arg1 archivingTranslationContext:(id)arg2 processingResults:(id)arg3;

@end

