//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MTLArgument, NSMutableArray, NSString;
@protocol MTLArgumentEncoder;

__attribute__((visibility("hidden")))
@interface SCNMTLResourceBinding : NSObject
{
    BOOL _needsRenderResource;
    CDStruct_21854d8c _indices;
    CDStruct_21854d8c _samplerIndices;
    NSMutableArray *_usedResources;
    id _bindBlock;
    MTLArgument *_argument;
    id <MTLArgumentEncoder> _argumentEncoder;
}

@property(retain, nonatomic) id <MTLArgumentEncoder> argumentEncoder; // @synthesize argumentEncoder=_argumentEncoder;
@property(retain, nonatomic) MTLArgument *argument; // @synthesize argument=_argument;
@property(copy, nonatomic) id bindBlock; // @synthesize bindBlock=_bindBlock;
@property(readonly, nonatomic) NSMutableArray *usedResources;
@property(nonatomic) BOOL needsRenderResource;
@property(readonly, nonatomic) NSString *name;
- (id)description;
@property(readonly, nonatomic) unsigned long long type;
- (void)dealloc;
- (id)init;

@end

