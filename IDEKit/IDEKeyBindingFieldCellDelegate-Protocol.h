//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class IDEKeyBinding, IDEKeyBindingFieldCell, IDEKeyboardShortcut, NSArray, NSAttributedString;

@protocol IDEKeyBindingFieldCellDelegate <NSObject>

@optional
- (NSAttributedString *)keyBindingFieldCellWillReturnAttributedString:(IDEKeyBindingFieldCell *)arg1;
- (void)keyBindingFieldCellWillRemoveKeyboardShortcut:(IDEKeyboardShortcut *)arg1;
- (void)keyBindingFieldCellDidAddKeyboardShortcut:(IDEKeyboardShortcut *)arg1;
- (void)keyBindingCellFieldDidEndEditing:(IDEKeyBindingFieldCell *)arg1;
- (IDEKeyboardShortcut *)keyBindingFieldCell:(IDEKeyBindingFieldCell *)arg1 validatedKeyboardShortcut:(IDEKeyboardShortcut *)arg2;
- (NSArray *)keyBindingFieldCell:(IDEKeyBindingFieldCell *)arg1 alternateKeyBindingsForKeyBinding:(IDEKeyBinding *)arg2;
- (BOOL)keyBindingFieldCellAllowsMultipleKeyboardShortcut:(IDEKeyBindingFieldCell *)arg1;
- (BOOL)keyBindingFieldCell:(IDEKeyBindingFieldCell *)arg1 keyboardShortcutIsPrefix:(IDEKeyboardShortcut *)arg2;
@end

