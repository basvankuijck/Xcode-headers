//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTInstrumentsUtilities/XRXMLElementParser.h>

#import <DVTInstrumentsUtilities/XRSchemaAnnotationTextValuesDelegate-Protocol.h>

@class NSString;
@protocol XRSchemaAnnotationPropertyReportingDelegate;

@interface XRSchemaAnnotationContainingElementParser : XRXMLElementParser <XRSchemaAnnotationTextValuesDelegate>
{
    NSString *_key;
    id <XRSchemaAnnotationPropertyReportingDelegate> _delegate;
}

+ (id)_elementNameToClassMap;
@property(nonatomic) __weak id <XRSchemaAnnotationPropertyReportingDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)startElementWithName:(id)arg1 attributes:(id)arg2 line:(long long)arg3 col:(long long)arg4;
- (void)textParserCompletedParsing:(id)arg1 elementName:(id)arg2;

@end

