//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBMediaResourceReference.h>

@class CIFilter, NSString;

@interface IBCIFilterCIImageMediaResourceReference : IBMediaResourceReference
{
    CIFilter *_filter;
    NSString *_keyPath;
}

- (void).cxx_destruct;
- (BOOL)updateValueFromResourceValueIfNeeded:(id)arg1 inDocument:(id)arg2;
- (id)initWithVariantSet:(id)arg1 documentObject:(id)arg2 filter:(id)arg3 originalValue:(id)arg4 keyPath:(id)arg5 transformer:(id)arg6;

@end

