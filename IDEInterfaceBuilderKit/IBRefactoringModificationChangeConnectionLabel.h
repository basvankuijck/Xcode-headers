//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBRefactoringModification.h>

@class IBMemberID, NSString;

@interface IBRefactoringModificationChangeConnectionLabel : IBRefactoringModification
{
    NSString *_modificationDescription;
    NSString *_categoryName;
    IBMemberID *_connectionID;
    NSString *_replacementLabel;
}

+ (id)plistTypeName;
@property(readonly) NSString *replacementLabel; // @synthesize replacementLabel=_replacementLabel;
@property(readonly) IBMemberID *connectionID; // @synthesize connectionID=_connectionID;
- (void).cxx_destruct;
- (id)modificationDescription;
- (id)categoryName;
- (id)modificationByChangingReplacementName:(id)arg1;
- (BOOL)applyToDocument:(id)arg1 error:(id *)arg2;
- (void)populatePropertyListRepresentation:(id)arg1;
- (id)initWithPropertyList:(id)arg1;
- (id)initWithConnectionID:(id)arg1 replacementLabel:(id)arg2 categoryName:(id)arg3 modificationDescription:(id)arg4;

@end

