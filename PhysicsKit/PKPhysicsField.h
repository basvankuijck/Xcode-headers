//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PKRegion;
@protocol NSObject;

@interface PKPhysicsField : NSObject
{
    shared_ptr_307a0f33 _field;
    PKRegion *_region;
    // Error parsing type: , name: _position
    float _rotation;
    // Error parsing type: , name: _scale
    BOOL _override;
}

@property(nonatomic, getter=isOverride) BOOL override; // @synthesize override=_override;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) float minimumRadius;
// Error parsing type for property scale:
// Property attributes: T,N

@property(nonatomic) float rotation;
// Error parsing type for property position:
// Property attributes: T,N

- (void)setIsOverride:(BOOL)arg1;
- (BOOL)override;
@property(nonatomic) unsigned int categoryBitMask;
- (void)setActive:(BOOL)arg1;
- (BOOL)isActive;
@property(nonatomic, getter=isEnabled) BOOL enabled;
@property(nonatomic) float falloff;
// Error parsing type for property direction:
// Property attributes: T,N

@property(nonatomic) float strength;
@property(nonatomic) __weak id <NSObject> representedObject;
@property(retain, nonatomic) id region;
- (void)set_field:(shared_ptr_307a0f33)arg1;
- (shared_ptr_307a0f33)_field;
- (void)dealloc;
- (id)init;

@end

