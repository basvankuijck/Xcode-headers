//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, SKScene;
@protocol SKSelectionView;

@interface SKSceneSelectionEngine : NSObject
{
    NSMutableArray *_selectables;
    id <SKSelectionView> _view;
    SKScene *_selectableScene;
    NSArray *_selectableItems;
}

+ (id)selectionEngineInView:(id)arg1;
@property(retain, nonatomic) NSArray *selectableItems; // @synthesize selectableItems=_selectableItems;
@property(retain, nonatomic) SKScene *selectableScene; // @synthesize selectableScene=_selectableScene;
@property(retain, nonatomic) id <SKSelectionView> view; // @synthesize view=_view;
- (void).cxx_destruct;
- (struct NSObject *)_selectableAtLocation:(struct CGPoint)arg1 ignoreLock:(BOOL)arg2;
- (id)_nodeAtLocationInView:(struct CGPoint)arg1 andLocationInScene:(struct CGPoint)arg2 ignoreLock:(BOOL)arg3;
- (id)selectionInRect:(struct CGRect)arg1 ignoreLock:(BOOL)arg2;
- (struct NSObject *)selectionAtLocation:(struct CGPoint)arg1 ignoreLock:(BOOL)arg2;
- (void)removeSelectable:(struct NSObject *)arg1;
- (void)addSelectable:(struct NSObject *)arg1;
- (id)initInView:(id)arg1;

@end

