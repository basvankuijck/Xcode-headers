//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class IBObjectPickerView, NSEvent, NSString;

@protocol IBObjectPickerViewDelegate <NSObject>
- (void)objectPickerView:(IBObjectPickerView *)arg1 updatedRolledOverObject:(id)arg2;
- (void)objectPickerView:(IBObjectPickerView *)arg1 didRemoveObject:(id)arg2;
- (NSString *)objectPickerView:(IBObjectPickerView *)arg1 titleForPickedObject:(id)arg2;
- (void)objectPickerView:(IBObjectPickerView *)arg1 handleEstablishmentDragWithEvent:(NSEvent *)arg2 startingPoint:(struct CGPoint)arg3;
@end

