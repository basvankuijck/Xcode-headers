//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBDocumentMemberWrapper.h>

@class IBConnection, NSString;

@interface IBDocumentConnectionMemberWrapper : IBDocumentMemberWrapper
{
    NSString *_name;
}

+ (id)keyPathsForValuesAffectingImage;
- (void).cxx_destruct;
- (id)applicableInspectorSlicesForCategory:(id)arg1 suggestedSlices:(id)arg2;
- (id)ideModelObjectTypeIdentifier;
- (void)document:(id)arg1 didChangeKeyPath:(id)arg2 forMember:(id)arg3;
- (void)refreshDisplayValues;
- (BOOL)wrapsNormalDocumentObject;
- (id)image;
- (id)name;
- (void)setName:(id)arg1;
- (id)childWrappers;
@property(readonly) IBConnection *connection;
- (id)initWithMember:(id)arg1 document:(id)arg2;

@end

