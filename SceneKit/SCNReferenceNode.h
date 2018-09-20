//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNNode.h>

@class NSMutableDictionary, NSURL;

@interface SCNReferenceNode : SCNNode
{
    NSURL *_referenceURL;
    BOOL _loaded;
    NSMutableDictionary *_overrides;
    long long _loadingPolicy;
    NSURL *_catalogURL;
    NSURL *_sourceDocumentURL;
}

+ (BOOL)supportsSecureCoding;
+ (id)referenceNodeWithURL:(id)arg1;
@property(nonatomic) long long loadingPolicy; // @synthesize loadingPolicy=_loadingPolicy;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (void)_loadWithURL:(id)arg1 catalog:(id)arg2;
- (void)_loadWithURL:(id)arg1;
- (void)_loadWithCatalog:(id)arg1;
- (id)_loadReferencedSceneWithURL:(id)arg1 catalog:(id)arg2;
- (void)load;
@property(readonly, getter=isLoaded) BOOL loaded;
- (void)unload;
- (id)_resolveURL;
- (id)_catalog;
@property(copy, nonatomic) NSURL *referenceURL;
- (BOOL)_isAReference;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setOverride:(id)arg1 forKeyPath:(id)arg2;
- (void)_applyOverrides;
- (void)_applyUnsharing:(id)arg1 alreadyShared:(id)arg2;
- (void)_applyOverride:(id)arg1 forKeyPath:(id)arg2;
- (void)setOverrides:(id)arg1;
- (id)overrides;
- (void)removeAllOverrides;
- (void)removeForKeyPath:(id)arg1;
- (void)addOverride:(id)arg1 forKeyPath:(id)arg2;
- (void)collectOverrides;
- (void)_diffNode:(id)arg1 with:(id)arg2 path:(id)arg3;
- (BOOL)_isNameUnique:(id)arg1;
- (void)_diffObject:(id)arg1 with:(id)arg2 path:(id)arg3;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

@end

