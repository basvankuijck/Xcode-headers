//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameToolsFoundation/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>
#import <GameToolsFoundation/NSCopying-Protocol.h>
#import <GameToolsFoundation/NSSecureCoding-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, GTFActionLibrary, GTFActionLibraryTargetThumbnail, IDEFileReference, NSArray, NSImage, NSMutableArray, NSNull, NSString, NSURL, _TtC13DVTFoundation9DVTSymbol;
@protocol GTFActionTimelineModelDelegate, NSCopying;

@interface GTFActionTimelineModel : NSObject <NSSecureCoding, NSCopying, IDEKeyDrivenNavigableItemRepresentedObject>
{
    NSMutableArray *_actions;
    NSMutableArray *_tracks;
    NSMutableArray *_groups;
    int _nextGroupId;
    BOOL _allowActionDisplacement;
    BOOL _allowStickyDurationChanges;
    BOOL _allowReturnToNotedStartTime;
    double _totalDuration;
    double _durationScale;
    double _startTime;
    id <NSCopying> _targetID;
    GTFActionLibraryTargetThumbnail *_targetThumbnail;
    id <GTFActionTimelineModelDelegate> _delegate;
    GTFActionLibrary *_ownerLibrary;
    long long _numTracks;
    double _previewTime;
    NSString *_keyName;
    NSString *_targetName;
}

+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffectingNav_children;
@property(readonly, nonatomic) NSString *targetName; // @synthesize targetName=_targetName;
@property(retain, nonatomic) NSString *keyName; // @synthesize keyName=_keyName;
@property(nonatomic) BOOL allowReturnToNotedStartTime; // @synthesize allowReturnToNotedStartTime=_allowReturnToNotedStartTime;
@property(nonatomic) BOOL allowStickyDurationChanges; // @synthesize allowStickyDurationChanges=_allowStickyDurationChanges;
@property(nonatomic) BOOL allowActionDisplacement; // @synthesize allowActionDisplacement=_allowActionDisplacement;
@property(nonatomic) double previewTime; // @synthesize previewTime=_previewTime;
@property(nonatomic) long long numTracks; // @synthesize numTracks=_numTracks;
@property(nonatomic) __weak GTFActionLibrary *ownerLibrary; // @synthesize ownerLibrary=_ownerLibrary;
@property(nonatomic) __weak id <GTFActionTimelineModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) GTFActionLibraryTargetThumbnail *targetThumbnail; // @synthesize targetThumbnail=_targetThumbnail;
@property(readonly, nonatomic) id <NSCopying> targetID; // @synthesize targetID=_targetID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) BOOL navigableItem_isLeaf;
@property(readonly, nonatomic) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly, nonatomic) BOOL navigableItem_isMajorGroup;
@property(readonly, nonatomic) NSArray *nav_children;
- (id)ideModelObjectTypeIdentifier;
@property(readonly, nonatomic) NSString *navigableItem_name;
- (id)lookupImageAssetPathForAssetName:(id)arg1;
- (BOOL)isInfiniteLoopInTrack:(int)arg1;
- (void)removeGroup:(id)arg1;
- (id)getGroupForTrack:(int)arg1;
- (int)getGroupIndex:(id)arg1;
- (id)getGroupWithId:(int)arg1;
- (id)getGroupWithIndex:(int)arg1;
- (id)getGroupThatContainsAction:(id)arg1;
- (id)createGroupReferenceFromActions:(id)arg1;
- (id)createLoopFromActions:(id)arg1 withLoopCount:(int)arg2;
- (id)createLoopWithLoopCount:(int)arg1;
- (void)updateEditorWithEndTime;
- (void)calculateStartTime;
- (double)getDurationExcludingInfiniteLoops;
- (void)calculateTotalDuration;
- (double)calculateTotalDurationIncludingInfiniteLoops:(BOOL)arg1;
- (void)calculateTotalDurationAndStartTime;
- (void)scaleTimelineDuration:(double)arg1;
- (long long)getFirstEmptyTrackIndex;
- (double)getTrackEndTime:(int)arg1;
- (void)requestViewUpdate;
- (void)endChange;
- (void)beginChange;
- (id)getSKActionForPreview:(BOOL)arg1 withPreviewStartTime:(double)arg2 activeAnimationFound:(char *)arg3 effectiveDuration:(double)arg4 ignoreScrubSensitiveActions:(BOOL)arg5;
- (id)getPreviewSKActionWithStartTime:(double)arg1;
- (id)getSKAction;
- (id)getSCNAction;
- (BOOL)setDurationForAction:(id)arg1 newDuration:(double)arg2 enableSnapping:(BOOL)arg3;
- (void)setDurationForActionWithoutDisplacement:(id)arg1 newDuration:(double)arg2;
- (double)getClosestStartOrEndTimeInTrack:(int)arg1 forTime:(double)arg2 withDuration:(double)arg3;
- (void)noteCurrentStartTimesInTrack:(int)arg1;
- (BOOL)verifyCanMoveActions:(id)arg1 byTrackOffset:(int)arg2 ignoreEachOther:(BOOL)arg3;
- (void)getSmallestTimeMarginForGroup:(int)arg1 outLeftMargin:(double *)arg2 outRightMargin:(double *)arg3;
- (void)getSmallestTimeMarginForActions:(id)arg1 ignoreEachOther:(BOOL)arg2 outLeftMargin:(double *)arg3 outRightMargin:(double *)arg4;
- (double)moveGroup:(id)arg1 withTimeOffset:(double)arg2;
- (void)offsetTrack:(int)arg1 forActions:(id)arg2;
- (void)offsetTime:(double)arg1 forActions:(id)arg2;
- (void)checkForOverlapWithLoop:(id)arg1;
- (void)insertNewTrackAt:(long long)arg1;
- (BOOL)adjustNumberOfTracks;
- (BOOL)canMoveAction:(id)arg1 toTrack:(int)arg2 atTime:(double)arg3;
- (void)addActionToClosestOpenSlot:(id)arg1 inTrack:(int)arg2 atTime:(double)arg3 enableAlignment:(BOOL)arg4 canMoveBeforeStartTime:(BOOL)arg5;
- (void)addAction:(id)arg1 inLoop:(id)arg2 toClosestOpenSlotInTrack:(int)arg3 atTime:(double)arg4 enableAlignment:(BOOL)arg5 canMoveBeforeStartTime:(BOOL)arg6;
- (void)setActionStartTime:(id)arg1 inTrack:(int)arg2 atTime:(double)arg3 enableSnap:(BOOL)arg4;
- (void)forceMoveAction:(id)arg1 toTrack:(int)arg2;
- (BOOL)moveAction:(id)arg1 toTrack:(int)arg2 atTime:(double)arg3 enableAlignment:(BOOL)arg4;
- (void)removeActionFromTrack:(id)arg1;
- (BOOL)removeAction:(id)arg1;
- (void)pasteActions:(id)arg1 insertRequiredTracks:(BOOL)arg2 adjustTracksAfterPaste:(BOOL)arg3;
- (void)pasteActions:(id)arg1 insertRequiredTracks:(BOOL)arg2;
- (void)pasteActions:(id)arg1;
- (void)pasteAction:(id)arg1 adjustTracksAfterPaste:(BOOL)arg2;
- (void)pasteAction:(id)arg1;
- (void)addAction:(id)arg1;
- (void)_addInitialAction:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)setTarget:(id)arg1;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) double durationScale; // @synthesize durationScale=_durationScale;
@property(nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(readonly, nonatomic) BOOL hasActions;
@property(readonly, nonatomic) NSArray *groups;
@property(readonly, nonatomic) NSArray *tracks;
@property(readonly, nonatomic) NSArray *actions;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *navigableItem_accessibilityIdentifier;
@property(readonly, nonatomic) NSString *navigableItem_accessibleImageDescription;
@property(readonly, nonatomic) NSArray *navigableItem_additionalFilterMatchingText;
@property(readonly, nonatomic) NSArray *navigableItem_childRepresentedObjects;
@property(readonly, nonatomic) DVTFileDataType *navigableItem_documentType;
@property(readonly, nonatomic) IDEFileReference *navigableItem_fileReference;
@property(readonly, nonatomic) NSNull *navigableItem_filtered;
@property(readonly, nonatomic) NSString *navigableItem_groupIdentifier;
@property(readonly, nonatomic) NSImage *navigableItem_image;
@property(readonly, nonatomic) BOOL navigableItem_isEnabled;
@property(readonly, nonatomic) BOOL navigableItem_isVisible;
@property(readonly, nonatomic) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly, nonatomic) id navigableItem_parentRepresentedObject;
@property(readonly, nonatomic) BOOL navigableItem_referencedContentExists;
@property(readonly, nonatomic) _TtC13DVTFoundation9DVTSymbol *navigableItem_representedSymbol;
@property(readonly, nonatomic) NSURL *navigableItem_representedURL;
@property(readonly, nonatomic) NSString *navigableItem_subtitle;
@property(readonly, nonatomic) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;

@end

