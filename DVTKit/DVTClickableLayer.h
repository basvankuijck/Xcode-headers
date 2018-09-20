//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import <DVTKit/DVTClickableLayer-Protocol.h>

@class NSString;

@interface DVTClickableLayer : CALayer <DVTClickableLayer>
{
    CDUnknownBlockType _clickHandlerBlock;
    BOOL _disableClickHandler;
    BOOL _showsClickedState;
}

@property BOOL disableClickHandler; // @synthesize disableClickHandler=_disableClickHandler;
@property BOOL showsClickedState; // @synthesize showsClickedState=_showsClickedState;
@property(copy) CDUnknownBlockType clickHandlerBlock; // @synthesize clickHandlerBlock=_clickHandlerBlock;
- (void).cxx_destruct;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (void)fireClickHandler;
- (void)layerShouldShowUnclickedState;
- (void)layerShouldShowClickedState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
