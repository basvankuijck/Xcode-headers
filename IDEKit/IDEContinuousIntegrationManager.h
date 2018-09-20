//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDEContinuousIntegrationManager : NSObject
{
}

+ (id)preferencePaneIdentifier;
+ (id)statusImagesForXCSItem:(id)arg1 status:(id)arg2 renderInWindow:(id)arg3 rowIsDisclosed:(BOOL)arg4;
+ (id)webURLForIntegration:(id)arg1;
+ (id)webURLForBot:(id)arg1;
+ (BOOL)canUserDuplicateBot;
+ (BOOL)canUserCreateAndDeleteBotsOnService:(id)arg1;
+ (void)addServer:(id)arg1 withSheetModalForWindow:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (void)showBotEditorForWorkspaceTabController:(id)arg1 bot:(id)arg2 errorPresenter:(id)arg3 errorWindow:(id)arg4 editingMode:(long long)arg5 completionBlock:(CDUnknownBlockType)arg6;
+ (void)showBotRedefinitionForWorkspaceTabController:(id)arg1 bot:(id)arg2 errorPresenter:(id)arg3 errorWindow:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
+ (void)showBotEditorForWorkspaceTabController:(id)arg1 bot:(id)arg2 errorPresenter:(id)arg3 errorWindow:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
+ (id)createEditBotAlertWithError:(id)arg1 validationErrors:(id)arg2;
+ (void)redefineBot:(id)arg1 workspaceTabController:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (void)showNewBotEditorForWorkspaceTabController:(id)arg1 selectedService:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (BOOL)verifySCMEnabled:(id *)arg1;
+ (void)deleteIntegration:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
+ (void)cancelIntegration:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
+ (id)actionManager;
+ (id)dataSource;
+ (long long)statusOfIntegration:(id)arg1;
+ (BOOL)isIntegrationFinished:(id)arg1;
+ (id)logNavigatorHelper;
+ (void)performAction:(SEL)arg1 forNavigableItemSelection:(id)arg2 withNavigator:(id)arg3;
+ (id)titleForNavigableItemSelection:(id)arg1 action:(SEL)arg2 menuItemState:(id *)arg3;
+ (BOOL)navigableItemSelection:(id)arg1 allowsAction:(SEL)arg2;
+ (id)projectNameInBlueprintForBot:(id)arg1;
+ (void)loadMoreItem:(id)arg1;
+ (BOOL)isLoadMoreItem:(id)arg1;
+ (Class)domainProviderClass;

@end

