//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTObservingToken, IDENavigatorSearchFilterControlBar, NSImage, NSString;

@interface IDENavigatorFilterContext : NSObject
{
    long long _type;
    NSImage *_image;
    IDENavigatorSearchFilterControlBar *_navigatorFilterControlBar;
    long long _toggleIndex;
    NSString *_toggleKeyPath;
    id _toggleTarget;
    DVTObservingToken *_toggleKeyPathObservingToken;
}

+ (id)contextWithType:(long long)arg1 image:(id)arg2;
@property(retain, nonatomic) DVTObservingToken *toggleKeyPathObservingToken; // @synthesize toggleKeyPathObservingToken=_toggleKeyPathObservingToken;
@property(retain) id toggleTarget; // @synthesize toggleTarget=_toggleTarget;
@property(copy) NSString *toggleKeyPath; // @synthesize toggleKeyPath=_toggleKeyPath;
@property long long toggleIndex; // @synthesize toggleIndex=_toggleIndex;
@property(retain) IDENavigatorSearchFilterControlBar *navigatorFilterControlBar; // @synthesize navigatorFilterControlBar=_navigatorFilterControlBar;
@property(retain) NSImage *image; // @synthesize image=_image;
@property long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)_typeDescription;
- (id)description;
- (void)dealloc;

@end

