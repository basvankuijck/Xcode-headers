//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/NSCopying-Protocol.h>

@class DVTFilePath, IDEContainerItem, IDEGroup, IDETemplate, IDEWorkspace, NSArray, NSDictionary;
@protocol IDEProvisioningBasicTeam;

@interface IDETemplateInstantiationContext : NSObject <NSCopying>
{
    BOOL _showsCrossPlatformSection;
    BOOL _alwaysReplaceFiles;
    BOOL _reuseFileReferences;
    IDEWorkspace *_workspace;
    IDETemplate *_documentTemplate;
    DVTFilePath *_documentFilePath;
    NSArray *_instantiatedItems;
    IDEContainerItem *_primaryInstantiatedItem;
    IDEGroup *_destinationGroup;
    unsigned long long _destinationIndex;
    NSArray *_destinationBuildables;
    IDEWorkspace *_createdWorkspace;
    id <IDEProvisioningBasicTeam> _team;
}

@property(retain) id <IDEProvisioningBasicTeam> team; // @synthesize team=_team;
@property BOOL reuseFileReferences; // @synthesize reuseFileReferences=_reuseFileReferences;
@property BOOL alwaysReplaceFiles; // @synthesize alwaysReplaceFiles=_alwaysReplaceFiles;
@property(retain) IDEWorkspace *createdWorkspace; // @synthesize createdWorkspace=_createdWorkspace;
@property BOOL showsCrossPlatformSection; // @synthesize showsCrossPlatformSection=_showsCrossPlatformSection;
@property(copy) NSArray *destinationBuildables; // @synthesize destinationBuildables=_destinationBuildables;
@property unsigned long long destinationIndex; // @synthesize destinationIndex=_destinationIndex;
@property(retain) IDEGroup *destinationGroup; // @synthesize destinationGroup=_destinationGroup;
@property(retain) IDEContainerItem *primaryInstantiatedItem; // @synthesize primaryInstantiatedItem=_primaryInstantiatedItem;
@property(copy) NSArray *instantiatedItems; // @synthesize instantiatedItems=_instantiatedItems;
@property(retain) DVTFilePath *documentFilePath; // @synthesize documentFilePath=_documentFilePath;
@property(retain, nonatomic) IDETemplate *documentTemplate; // @synthesize documentTemplate=_documentTemplate;
@property(retain, nonatomic) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void).cxx_destruct;
@property(readonly) NSDictionary *additionalMacroExpansions;
@property(readonly) NSArray *customDataStoresForTemplateMacros;
- (id)destinationBlueprintProvider;
- (id)sectionsForAvailableTemplatesOfKind:(id)arg1;
- (id)arrayBySortingSections:(id)arg1;
- (id)standardSectionNames;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
