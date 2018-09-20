//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GLToolsServices/DYGLResourceObject.h>

@class NSString;

@interface DYGLProgramObject : DYGLResourceObject
{
    BOOL _separable;
    BOOL _linked;
    BOOL _hasBeenLinked;
    NSString *_vertexSource;
    NSString *_fragmentSource;
    NSString *_vertexInfoLog;
    NSString *_fragmentInfoLog;
    NSString *_infoLog;
}

@property(readonly, nonatomic) BOOL hasBeenLinked; // @synthesize hasBeenLinked=_hasBeenLinked;
@property(readonly, nonatomic) BOOL linked; // @synthesize linked=_linked;
@property(readonly, nonatomic) BOOL separable; // @synthesize separable=_separable;
@property(readonly, copy, nonatomic) NSString *infoLog; // @synthesize infoLog=_infoLog;
@property(readonly, copy, nonatomic) NSString *fragmentInfoLog; // @synthesize fragmentInfoLog=_fragmentInfoLog;
@property(readonly, copy, nonatomic) NSString *vertexInfoLog; // @synthesize vertexInfoLog=_vertexInfoLog;
@property(readonly, copy, nonatomic) NSString *fragmentSource; // @synthesize fragmentSource=_fragmentSource;
@property(readonly, copy, nonatomic) NSString *vertexSource; // @synthesize vertexSource=_vertexSource;
- (void).cxx_destruct;
- (id)initWithProperties:(id)arg1;

@end

