//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEAppIDAbstractFlightCheck.h>

@class DVTPortalContainerType;
@protocol IDEAppIDContainerFlightCheckDelegate;

@interface IDEAppIDContainerFlightCheck : IDEAppIDAbstractFlightCheck
{
    id <IDEAppIDContainerFlightCheckDelegate> _delegate;
    DVTPortalContainerType *_containerType;
}

@property(readonly, nonatomic) DVTPortalContainerType *containerType; // @synthesize containerType=_containerType;
@property(retain, nonatomic) id <IDEAppIDContainerFlightCheckDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)validate;
- (id)resolvingTitle;
- (id)pastTitle;
- (id)title;
- (id)expectedFeaturesWithError:(id *)arg1;
- (void)primitiveInvalidate;
- (id)initWithAppIDFeatureCoordinator:(id)arg1 containerType:(id)arg2;

@end

