//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIFontedObject-Protocol.h>

@class IBDocumentArchiver, IBDocumentUnarchiver, IBUIFontDescription, NSAttributedString, NSCoder, NSColor, NSString;

@protocol IBUIAttributedTextContainer <IBUIFontedObject>
@property(readonly) IBUIFontDescription *defaultFontDescription;
@property(nonatomic) BOOL usesAttributedText;
@property(nonatomic) long long textAlignment;
@property(copy, nonatomic) IBUIFontDescription *fontDescription;
@property(copy, nonatomic) NSColor *textColor;
@property(copy, nonatomic) NSAttributedString *attributedText;
@property(copy, nonatomic) NSString *text;
- (void)unarchiveAttributedText:(IBDocumentUnarchiver *)arg1;
- (void)archiveAttributedText:(IBDocumentArchiver *)arg1;
- (void)decodeAttributedText:(NSCoder *)arg1;
- (void)encodeAttributedText:(NSCoder *)arg1;
@end
