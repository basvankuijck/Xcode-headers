//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEAssistant.h>

@class NSString;

@interface Xcode3PackageAddPackageRepositoryChooserAssistant : IDEAssistant
{
    NSString *_packageURLString;
}

+ (id)keyPathsForValuesAffectingCanGoForward;
@property(retain) NSString *packageURLString; // @synthesize packageURLString=_packageURLString;
- (void).cxx_destruct;
- (void)setAssistantContext:(id)arg1;
- (id)packageAssistantContext;
- (void)willGoNextOrFinish;
- (BOOL)canGoForward;
- (id)nextAssistantIdentifier;

@end

