//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTInstrumentsUtilities/XRXMLElementParser.h>

@protocol XRSchemaRegexPatternDetectionDelegate;

@interface XRSchemaPatternRestrictionElementParser : XRXMLElementParser
{
    id <XRSchemaRegexPatternDetectionDelegate> _delegate;
}

+ (id)_elementNameToClassMap;
@property(nonatomic) __weak id <XRSchemaRegexPatternDetectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forKey:(id)arg2;

@end

