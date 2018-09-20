//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBFoundation/IBBinaryArchiving-Protocol.h>

@class NSString;
@protocol IBObjectRepresentationTranslator;

@interface IBObjectBasedMarshallingResult : NSObject <IBBinaryArchiving>
{
    NSString *_identifier;
    NSObject<IBObjectRepresentationTranslator> *_archivingTranslationContext;
}

@property(readonly, nonatomic) NSObject<IBObjectRepresentationTranslator> *archivingTranslationContext; // @synthesize archivingTranslationContext=_archivingTranslationContext;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)didFinishEncodingWithBinaryArchiver:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (void)didFinishDecodingWithBinaryUnarchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)_originalInitiatingRequestFromContextOfUnarchiver:(id)arg1;
- (id)initWithIdentifier:(id)arg1 archivingTranslationContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

