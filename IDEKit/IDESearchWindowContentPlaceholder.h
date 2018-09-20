//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <IDEKit/DVTEmptyContentPlaceholderContainer-Protocol.h>

@class NSFont, NSString;

@interface IDESearchWindowContentPlaceholder : NSView <DVTEmptyContentPlaceholderContainer>
{
    int _emptyContentStringStyle;
    NSString *_emptyContentString;
    NSString *_emptyContentSubtitle;
    NSFont *_emptyContentFont;
}

@property(copy, nonatomic) NSFont *emptyContentFont; // @synthesize emptyContentFont=_emptyContentFont;
@property(nonatomic) int emptyContentStringStyle; // @synthesize emptyContentStringStyle=_emptyContentStringStyle;
@property(copy, nonatomic) NSString *emptyContentSubtitle; // @synthesize emptyContentSubtitle=_emptyContentSubtitle;
@property(copy, nonatomic) NSString *emptyContentString; // @synthesize emptyContentString=_emptyContentString;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) BOOL followsFontAndColorTheme;

@end

