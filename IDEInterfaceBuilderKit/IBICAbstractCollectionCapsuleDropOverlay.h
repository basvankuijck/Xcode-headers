//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class IBICAbstractCollectionCapsule, IBICCollectionOverlayOrnament;

@interface IBICAbstractCollectionCapsuleDropOverlay : NSView
{
    IBICCollectionOverlayOrnament *_ornament;
}

@property(retain, nonatomic) IBICCollectionOverlayOrnament *ornament; // @synthesize ornament=_ornament;
- (void).cxx_destruct;
- (BOOL)isAccessibilityHidden;
- (BOOL)isAccessibilityEnabled;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isFlipped;
@property(readonly, nonatomic) IBICAbstractCollectionCapsule *superview;
- (id)initWithOrnament:(id)arg1;

@end

