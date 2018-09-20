//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSAccessibilityElement.h>

#import <DTGraphKit/CALayerDelegate-Protocol.h>

@class CALayer, DTTimelineGraph, DTTimelineGraphPlaneLabelLayer, DTTimelineGroupPlane, NSColor, NSDictionary, NSImage, NSMenu, NSMutableArray, NSString;

@interface DTTimelinePlane : NSAccessibilityElement <CALayerDelegate>
{
    struct PlaneMetrics _planeMetrics;
    struct TimelineViewContext *_ctx;
    CALayer *_layer;
    double _height;
    BOOL _accessibilityElement;
    NSString *_accessibilityLabel;
    NSString *_accessibilityAccessoryLabel;
    CALayer *_labelLayer;
    CALayer *_iconLayer;
    DTTimelineGraphPlaneLabelLayer *_displayNameLayer;
    CALayer *_bottomBorderLayer;
    CALayer *_topBorderLayer;
    double _baseZPosition;
    BOOL _labelAreaIsHovered;
    CALayer *_iconContextGlyphLayer;
    BOOL _iconIsClickable;
    BOOL _iconGlyphOnlyOnHover;
    struct DTTimelinePlaneGlyph _glyphs[4];
    struct DTTimelinePlaneAccessory _accessory;
    BOOL _resizable;
    BOOL _suppressBottomBorder;
    BOOL _suppressTopBorder;
    BOOL _selected;
    BOOL _dimmed;
    BOOL _displayBottomBorder;
    BOOL _displayTopBorder;
    BOOL _hideLabel;
    BOOL _hidden;
    BOOL _drawFullLengthBorder;
    int _serialNumber;
    NSString *_displayName;
    NSString *_displayDescription;
    NSImage *_icon;
    unsigned long long _iconLocation;
    NSMenu *_contextMenu;
    unsigned long long _displayNameType;
    DTTimelineGroupPlane *_groupPlane;
    id _representedObject;
    NSDictionary *_userInfo;
    NSColor *_defaultTextColor;
    DTTimelineGraph *_timelineGraph;
    NSMutableArray *_accessibilityChildrenElements;
}

+ (BOOL)_baseClassCanAskForDefaultsDuringInit;
@property(retain, nonatomic) NSMutableArray *accessibilityChildrenElements; // @synthesize accessibilityChildrenElements=_accessibilityChildrenElements;
@property(nonatomic) BOOL drawFullLengthBorder; // @synthesize drawFullLengthBorder=_drawFullLengthBorder;
@property(nonatomic) BOOL hidden; // @synthesize hidden=_hidden;
@property(nonatomic) BOOL hideLabel; // @synthesize hideLabel=_hideLabel;
@property(nonatomic) BOOL displayTopBorder; // @synthesize displayTopBorder=_displayTopBorder;
@property(nonatomic) BOOL displayBottomBorder; // @synthesize displayBottomBorder=_displayBottomBorder;
@property(nonatomic) BOOL dimmed; // @synthesize dimmed=_dimmed;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic) __weak DTTimelineGraph *timelineGraph; // @synthesize timelineGraph=_timelineGraph;
@property(retain, nonatomic) NSColor *defaultTextColor; // @synthesize defaultTextColor=_defaultTextColor;
@property(nonatomic) BOOL suppressTopBorder; // @synthesize suppressTopBorder=_suppressTopBorder;
@property(nonatomic) BOOL suppressBottomBorder; // @synthesize suppressBottomBorder=_suppressBottomBorder;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
@property(nonatomic) __weak DTTimelineGroupPlane *groupPlane; // @synthesize groupPlane=_groupPlane;
@property(nonatomic) BOOL resizable; // @synthesize resizable=_resizable;
@property(nonatomic) unsigned long long displayNameType; // @synthesize displayNameType=_displayNameType;
@property(readonly, nonatomic) int serialNumber; // @synthesize serialNumber=_serialNumber;
@property(retain, nonatomic) NSMenu *contextMenu; // @synthesize contextMenu=_contextMenu;
@property(nonatomic) unsigned long long iconLocation; // @synthesize iconLocation=_iconLocation;
@property(retain, nonatomic) NSImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *displayDescription; // @synthesize displayDescription=_displayDescription;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (void)rebuildAccessibility;
- (id)accessibilityChildren;
- (void)_populateAccessibilityChildrenElements;
- (struct CGPoint)accessibilityActivationPoint;
- (BOOL)accessibilityShouldUseUniqueId;
- (BOOL)isAccessibilityDisclosed;
- (id)accessibilityLabel;
- (struct CGRect)accessibilityAccessoryIconFrame;
- (struct CGRect)accessibilityIconFrame;
- (struct CGRect)accessibilityDisplayNameFrame;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityParent;
- (id)accessibilitySubrole;
- (id)accessibilityRole;
- (long long)accessibilityDisclosureLevel;
- (long long)accessibilityIndex;
- (void)setAccessibilityAccessoryLabel:(id)arg1;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAccessibilityElement:(BOOL)arg1;
- (BOOL)_containsPlane:(id)arg1;
- (void)_enumeratesPlanesHavingKey:(id)arg1 stopPtr:(char *)arg2 block:(CDUnknownBlockType)arg3;
- (void)_enumeratePlanesWithStopPtr:(char *)arg1 block:(CDUnknownBlockType)arg2;
- (void)enumeratesPlanesHavingKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)_planesUnderPoint:(struct CGPoint)arg1;
- (void)_populatePlaneLayoutMap:(unordered_map_b8b4eb21 *)arg1 offsetFromTop:(double)arg2;
- (BOOL)_wantsBottomBorderLayerWhenInGroupPlane;
- (id)_topBorderLayer;
- (id)_bottomBorderLayer;
- (id)_labelLayer;
- (struct CGColor *)_labelBackgroundColor;
- (void)_invalidateLabel;
- (id)_labelIconLayer;
@property(nonatomic) BOOL accessoryDownState;
- (void)setAccessoryIcon:(id)arg1 alternate:(id)arg2 hover:(BOOL)arg3 selectionHidden:(BOOL)arg4;
- (BOOL)_deriveAccessoryHiddenStatus;
- (double)_accessoryWidth;
- (BOOL)_accessoryVisible;
- (id)_accessoryLayer;
- (void)_resetAccessory;
- (void)setGlyph:(id)arg1 atLocation:(unsigned long long)arg2 hover:(BOOL)arg3;
- (struct CGRect)iconRectGraphRelative:(BOOL)arg1;
- (BOOL)iconIsClickable;
- (void)setIconIsClickable:(BOOL)arg1 showOnlyOnHover:(BOOL)arg2;
- (void)_didMoveOutOfView;
- (void)_willMoveIntoView;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (BOOL)_isGroupPlane;
- (void)_updateSelectionColors;
- (void)_updateBorders:(struct CGColor *)arg1 selected:(BOOL)arg2;
- (BOOL)_drawTopBorderAsSelected;
- (BOOL)_drawBottomBorderAsSelected;
- (BOOL)_drawBordersAsSelected;
- (struct CGColor *)_borderColor;
- (id)_topGroupPlane;
- (BOOL)selfOrAncestorIsSelected;
@property(readonly, nonatomic) BOOL ancestorIsSelected;
- (id)_unselectedTextColor;
- (id)_accessorySelectedColor;
- (struct CGColor *)_accessorySeparatorColor;
- (id)_unselectedDisclosureColor;
- (id)_selectedTextColor;
- (struct CGColor *)_selectedBackgroundColor;
- (id)_immediatelyPriorSiblingPlane;
@property(nonatomic) double baseZPosition;
- (BOOL)_setHeight:(double)arg1;
@property(readonly, nonatomic) double height;
- (BOOL)_pointIntersectsIcon:(struct CGPoint)arg1 plane:(out id *)arg2 rect:(out struct CGRect *)arg3;
- (BOOL)_pointIntersectsIcon:(struct CGPoint)arg1 rect:(out struct CGRect *)arg2;
- (BOOL)_pointIntersectsDisclosureGlyph:(struct CGPoint)arg1 groupPlane:(out id *)arg2;
@property(nonatomic) BOOL labelAreaIsHovered;
- (void)_updateAccessoryVisibilityForceOpacity:(BOOL)arg1;
- (void)_updateAccessoryVisibility;
- (void)_updateHoverStatusForGlyphs;
- (void)_updateHoverStatusForIconGlyph;
- (BOOL)_pointIntersectsAccessory:(struct CGPoint)arg1 plane:(out id *)arg2 rect:(out struct CGRect *)arg3;
- (BOOL)_pointIntersectsGlyph:(struct CGPoint)arg1 plane:(out id *)arg2 location:(out unsigned long long *)arg3 rect:(out struct CGRect *)arg4;
- (BOOL)_pointIntersectsGlyph:(struct CGPoint)arg1 location:(out unsigned long long *)arg2 rect:(out struct CGRect *)arg3;
@property(readonly, nonatomic) CALayer *layer;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithHeight:(double)arg1;
- (id)init;
- (void)_removeFromContext;
- (id)_decoratedPlanes;
- (void)_contextChanged;
- (void)_setContext:(struct TimelineViewContext *)arg1 layer:(id)arg2 anchorPoint:(struct CGPoint)arg3;
- (void)_setAppearance:(id)arg1;
- (void)_invalidateTimeRange:(struct XRTimeRange)arg1;
- (void)_setPosition:(struct CGPoint)arg1 size:(struct CGSize)arg2;
- (void)_layoutAccessoryWithPlaneSize:(struct CGSize)arg1;
- (void)_createAccessoryLayer;
- (BOOL)hasGlyphs;
- (void)_layoutGlyphsAtPlanePosition:(struct CGPoint)arg1 planeSize:(struct CGSize)arg2;
- (void)_layoutGlyphAtPlanePosition:(struct CGPoint)arg1 planeSize:(struct CGSize)arg2 location:(unsigned long long)arg3;
- (void)_createGlyphLayerAtLocation:(unsigned long long)arg1;
- (void)_layoutLabelLayerAtPlanePosition:(struct CGPoint)arg1 planeSize:(struct CGSize)arg2;
- (void)_layoutLabelLayerAtPlanePosition:(struct CGPoint)arg1 planeSize:(struct CGSize)arg2 centerLabelWithin:(double)arg3;
- (void)_updateAccessoryZPosition;
- (void)_updateAccessoryColor;
- (void)_updateIconGlyphForceHiddenState:(BOOL)arg1;
- (void)_updateGlyphsForceHiddenState:(BOOL)arg1;
- (void)_updateGlyphColors;
- (void)_updateGlyphsZPosition;
- (void)_updateIconAndLabelLayerZPosition;
- (double)_centerOfLabelWithin:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

